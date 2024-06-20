FROM ubuntu

RUN apt-get update -q && apt-get upgrade -qq -y && apt-get install -qq -y vim build-essential

WORKDIR /wrk

COPY . .

RUN make

CMD [ "./pstest" ]

