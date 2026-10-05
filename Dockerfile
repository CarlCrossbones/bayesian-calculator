FROM archlinux:latest

# Install dependencies
RUN pacman -Syu --noconfirm && \
    pacman -S --noconfirm make gcc cmake && \
    rm -rf /var/cache/pacman/pkg/*

########### BUILD ###########
WORKDIR /app

COPY ./src .
COPY ./LICENSE .

RUN mkdir -p build && \
    cmake -S . -B build && \
    cd build && \
    make

############ RUN ############
CMD ["./build/calculator"]