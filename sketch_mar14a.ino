#define NUM 8 // 首先定義LED的數目

// 然後是LED對應的腳位，請配合接線順序填寫。
int leds[NUM] = {
  8,9,10,11,12,13,14,15
};

// 將每個腳位模式設為OUTPUT
void setup() {                
  for(int i = 0; i < NUM; i++){
    pinMode(leds[i], OUTPUT); 
  }     
}
// 雖然A3、A2、A1、A0是類比腳位，
// 但也可以把它當做數位腳位使用。 

// 然後是兩個迴圈，
// 第一個迴圈從這邊跑到那邊，
// 第二個迴圈跑回來。
void loop() {
  for(int i = 0; i < NUM; i++){
    digitalWrite(leds[i], HIGH);
    delay(100);
    digitalWrite(leds[i], LOW);
  }
  for(int i = NUM-1; i >= 0; i--){
    digitalWrite(leds[i], HIGH);
    delay(100);
    digitalWrite(leds[i], LOW);
  }
}
// 以degitalWrite點亮LED後，延遲100 milliseconds（0.1秒），
// 然後再滅掉，你可以修改延遲時間。
// 你可以把第二個迴圈改為 for(int i = NUM-2; i > 0; i--)，
// 看看有何不同。

