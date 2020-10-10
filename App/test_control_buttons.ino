

void setup(){
  Serial.begin(9600);   
}

void loop(){
  if(Serial.available()){
    switch(Serial.read()){
      case('f'):
          go_forward();
          break;
        case('b'):
          go_backward();
          break;
        case('r'):
          go_right();
          break;
        case('l'):
          go_left();
          break;
        defualt:
          Serial.print("error data");
          break;
    }
  }
}

void go_forward(){
  Serial.print("forward");
}

void go_backward(){
  Serial.print("backward");
}

void go_right(){
  Serial.print("right");
}

void go_left(){
  Serial.print("left");
}
