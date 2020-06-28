#include "ev3api.h"
#include "app.h"
#include "parameters.h"

//  クラスの定義
class ev3rt_test {
public:
    //  クラスのメンバ関数の宣言
    void show();
};
//  クラスのメンバ関数の定義
void ev3rt_test::show() {
    ev3_led_set_color(LED_GREEN);
    tslp_tsk(500);
    ev3_led_set_color(LED_RED);
    tslp_tsk(500);
}

void main_task(intptr_t unused) {
    //  オブジェクトの生成
    ev3rt_test t = ev3rt_test();

    while(1) {
        //  オブジェクトのメンバ関数の実行
        t.show();
    }
}
