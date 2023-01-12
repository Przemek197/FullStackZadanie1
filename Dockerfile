FROM frolvlad/alpine-gxx:latest
COPY ./src /usr/src/FibCalc
WORKDIR /usr/src/FibCalc
RUN gcc -o FibCalc KalkulatorFib.cpp
CMD ["./FibCalc"]