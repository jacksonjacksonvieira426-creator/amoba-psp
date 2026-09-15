// amoba - main.c gerado por V14
#include <pspkernel.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include "j2me_gfx.h"
#include "j2me_font.h"
#include "j2me_input.h"
#include "j2me_image.h"
#include "j2me_clip.h"
#include "j2me_runtime.h"

PSP_MODULE_INFO("amoba", 0, 1, 0);
PSP_MAIN_THREAD_ATTR(THREAD_ATTR_USER);

#define SCR_W 480
#define SCR_H 272

// Tipos J2ME (auto-detectados, dedup)
typedef void* Alert;
typedef void* AlertType;
typedef void* Boolean;
typedef void* Byte;
typedef void* ByteArrayInputStream;
typedef void* ByteArrayOutputStream;
typedef void* Calendar;
typedef void* Canvas;
typedef void* Character;
typedef void* ChoiceGroup;
typedef void* Class_x;
typedef void* Command;
typedef void* CommandListener;
typedef void* Control;
typedef void* DataInputStream;
typedef void* DataOutputStream;
typedef void* Date;
typedef void* DateField;
typedef void* DeviceControl;
typedef void* DirectGraphics;
typedef void* Display;
typedef void* Displayable;
typedef void* Double_x;
typedef void* Enumeration;
typedef void* Float_x;
typedef void* Font;
typedef void* Form;
typedef void* FullCanvas;
typedef void* GameCanvas;
typedef void* Gauge;
typedef void* Graphics;
typedef void* Hashtable;
typedef void* IOException;
typedef void* Image;
typedef void* ImageItem;
typedef void* InputStream;
typedef void* Integer;
typedef void* InterruptedException;
typedef void* InvalidRecordIDException;
typedef void* Item;
typedef void* Iterator;
typedef void* List;
typedef void* ListItem;
typedef void* Locale;
typedef void* Long_x;
typedef void* MIDlet;
typedef void* Manager;
typedef void* Math;
typedef void* Object;
typedef void* OutOfMemoryError;
typedef void* OutputStream;
typedef void* Player;
typedef void* Process;
typedef void* Queue;
typedef void* Random;
typedef void* RecordEnumeration;
typedef void* RecordFilter;
typedef void* RecordStore;
typedef void* RecordStoreException;
typedef void* RecordStoreFullException;
typedef void* RecordStoreNotFoundException;
typedef void* RecordStoreNotOpenException;
typedef void* Runnable;
typedef void* Runtime;
typedef void* Screen;
typedef void* Short_x;
typedef void* Sound;
typedef void* Spacer;
typedef void* Stack;
typedef void* String;
typedef void* StringBuffer;
typedef void* StringTokenizer;
typedef void* System;
typedef void* TextBox;
typedef void* TextField;
typedef void* Thread;
typedef void* Throwable;
typedef void* Ticker;
typedef void* TimeZone;
typedef void* Timer;
typedef void* TimerTask;
typedef void* Vector;

// Stubs de biblioteca
void j2me_canvas_repaint(void) { }
void j2me_canvas_serviceRepaints(void) { }
void j2me_gc(void) { }
void* j2me_image_get_graphics(void* img) { return img; }

// Forward typedefs
typedef struct AmobaMIDlet_s AmobaMIDlet;
typedef struct AmobaMIDlet_s AmobaMIDlet_s;
typedef struct a_s a;
typedef struct a_s a_s;
typedef struct b_a_s b_a;
typedef struct b_a_s b_a_s;
typedef struct b_s b;
typedef struct b_s b_s;
typedef struct c_s c;
typedef struct c_s c_s;
typedef struct d_s d;
typedef struct d_s d_s;
typedef struct e_s e;
typedef struct e_s e_s;
typedef struct f_s f;
typedef struct f_s f_s;
typedef struct g_s g;
typedef struct g_s g_s;
typedef struct h_s h;
typedef struct h_s h_s;

// Globais
void* _self = 0;
void* _p1_self = 0;
void* _p2_self = 0;
void* _role_self = 0;
b* msf_mc = 0;
int Game_count = 0;
int MapCanvas_OFFY = 96;
int MapCanvas_OFFX = 180;
int MapCanvas_CanvasWidth = 480;
int MapCanvas_CanvasHeight = 272;
int MapCanvas_still = 0;
int MapCanvas_lightflag = 0;

// Structs
struct AmobaMIDlet_s {
    void*        for_x;
    void*        do_x;
    void*        a;
    void*        if_x;
};

struct a_s {
    int          do_x;
    void*        if_x;
    void*        a;
};

struct b_a_s {
    int          a;
    int          if_x;
};

struct b_s {
    int          m;
    int          int_x;
    int          u;
    int          h;
    int          w;
    void*        null_x;
    void*        f;
    void*        o;
    int          long_x;
    int          e;
    int          c;
    int          s;
    int          d;
    int          y;
    int          j;
    int          byte;
    void*        void_x;
    void*        r;
    void*        t;
    int          C;
    int*         l;
    void*        z;
    int          k;
    int          b;
    int          for_x;
    int          D;
    int          try_x;
    int          new_x;
    int          do_x;
    int          if_x;
    int          else_x;
    int          char_x;
    int          goto_x;
    int          g;
    int          case_x;
    void*        a;
    void*        n;
    int*         B;
    void*        x;
    void*        q;
    int          v;
    int          i;
    int          A;
    int          p;
};

struct c_s {
    void*        int_x;
    void*        do_x;
    void*        for_x;
    int          if_x;
    int          a;
    int          new_x;
};

struct d_s {
    void*        byte;
    void*        do_x;
    void*        a;
    void*        new_x;
    void*        int_x;
    void*        if_x;
    void*        for_x;
    void*        try_x;
};

struct e_s {
    void*        for_x;
    void*        a;
    void*        do_x;
    void*        if_x;
    void*        int_x;
};

struct f_s {
    void*        new_x;
    void*        a;
    void*        do_x;
    void*        for_x;
    int          if_x;
    int          int_x;
};

struct g_s {
    int          for_x;
    int          new_x;
    void*        do_x;
    int          a;
    int          byte;
    void*        if_x;
    int          try_x;
    int          int_x;
};

struct h_s {
    void*        do_x;
    void*        for_x;
    void*        if_x;
    void*        a;
};

// Prototipos
void AmobaMIDlet_constructor(void* self);
void AmobaMIDlet_run(void* self);
void* AmobaMIDlet_a(void* self, void* arg0);
void AmobaMIDlet_a_2(void* self, void* arg0);
void AmobaMIDlet_startApp(void* self);
void AmobaMIDlet_pauseApp(void* self);
void AmobaMIDlet_destroyApp(void* self, int arg0);
void AmobaMIDlet_if_x(void* self);
void AmobaMIDlet_a_3(void* self);
void a_constructor(void* self);
void a_if_x(void* self, void* arg0);
void a_a_fn(void* self);
void* a_a_fn_2(void* self, void* arg0);
void a_a_fn_3(void* self, void* arg0, void* arg1);
int a_matches(void* self, void* arg0);
void b_a_constructor(void* self, int arg0, int arg1);
void b_constructor(void* self, int arg0, int arg1);
void b_int_x(void* self);
void b_byte(void* self);
int b_new_x(void* self);
void b_a(void* self, int arg0);
int b_do_x(void* self);
void b_do_x_2(void* self, int arg0);
void b_for_x(void* self);
void b_try_x(void* self);
int b_if_x(void* self, int arg0, int arg1);
int b_a_2(void* self, int arg0, int arg1, int arg2, int arg3);
int b_a_3(void* self, int arg0, int arg1, int arg2);
void* b_if_x_2(void* self);
void b_if_x_3(void* self, int arg0, int arg1, int arg2);
void b_if_x_4(void* self, int arg0, int arg1, int arg2, int arg3);
void b_a_4(void* self, int arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
int b_if_x_5(void* self, int arg0);
void b_a_5(void* self, int arg0, int arg1);
int b_a_6(void* self, void* arg0);
void b_a_7(void* self);
int b_case_x(void* self);
void b_a_8(void* self, void* arg0);
void b_char_x(void* self);
void b_if_x_6(void* self, void* arg0);
void b_a_9(void* self, void* arg0, int arg1, int arg2);
void c_constructor(void* self, void* arg0);
void c_run(void* self);
void c_keyReleased(void* self, int arg0);
void c_paint(void* self, void* arg0);
void d_constructor(void* self, void* arg0);
void d_a(void* self, int arg0);
void d_commandAction(void* self, void* arg0, void* arg1);
void e_constructor(void* self, void* arg0);
void e_commandAction(void* self, void* arg0, void* arg1);
void f_constructor(void* self, void* arg0);
void f_keyReleased(void* self, int arg0);
void f_keyRepeated(void* self, int arg0);
void f_run(void* self);
void f_a(void* self, int arg0);
void f_a_2(void* self);
void f_paint(void* self, void* arg0);
void f_commandAction(void* self, void* arg0, void* arg1);
void g_constructor(void* self, void* arg0, int arg1, int arg2);
void g_run(void* self);
void g_if_x(void* self);
void g_a(void* self);
void g_a_2(void* self, void* arg0);
void h_constructor(void* self, void* arg0, void* arg1, void* arg2);
void h_paint(void* self, void* arg0);
void h_commandAction(void* self, void* arg0, void* arg1);

// Implementacoes
void AmobaMIDlet_constructor(void* self) {
    AmobaMIDlet* s = (AmobaMIDlet*)self;
    if (!s) return;
    (void)s;
}

void AmobaMIDlet_run(void* self) {
    AmobaMIDlet* s = (AmobaMIDlet*)self;
    if (!s) return;
    (void)s;
}

void* AmobaMIDlet_a(void* self, void* arg0) {
    AmobaMIDlet* s = (AmobaMIDlet*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void AmobaMIDlet_a_2(void* self, void* arg0) {
    AmobaMIDlet* s = (AmobaMIDlet*)self;
    if (!s) return;
    (void)s;
}

void AmobaMIDlet_startApp(void* self) {
    AmobaMIDlet* s = (AmobaMIDlet*)self;
    if (!s) return;
    (void)s;
}

void AmobaMIDlet_pauseApp(void* self) {
    AmobaMIDlet* s = (AmobaMIDlet*)self;
    if (!s) return;
    (void)s;
}

void AmobaMIDlet_destroyApp(void* self, int arg0) {
    AmobaMIDlet* s = (AmobaMIDlet*)self;
    if (!s) return;
    (void)s;
}

void AmobaMIDlet_if_x(void* self) {
    AmobaMIDlet* s = (AmobaMIDlet*)self;
    if (!s) return;
    (void)s;
}

void AmobaMIDlet_a_3(void* self) {
    AmobaMIDlet* s = (AmobaMIDlet*)self;
    if (!s) return;
    (void)s;
}

void a_constructor(void* self) {
    a* s = (a*)self;
    if (!s) return;
    (void)s;
}

void a_if_x(void* self, void* arg0) {
    a* s = (a*)self;
    if (!s) return;
    (void)s;
}

void a_a_fn(void* self) {
    a* s = (a*)self;
    if (!s) return;
    (void)s;
}

void* a_a_fn_2(void* self, void* arg0) {
    a* s = (a*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void a_a_fn_3(void* self, void* arg0, void* arg1) {
    a* s = (a*)self;
    if (!s) return;
    (void)s;
}

int a_matches(void* self, void* arg0) {
    a* s = (a*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void b_a_constructor(void* self, int arg0, int arg1) {
    b_a* s = (b_a*)self;
    if (!s) return;
    (void)s;
}

void b_constructor(void* self, int arg0, int arg1) {
    b* s = (b*)self;
    if (!s) return;
    (void)s;
}

void b_int_x(void* self) {
    b* s = (b*)self;
    if (!s) return;
    (void)s;
}

void b_byte(void* self) {
    b* s = (b*)self;
    if (!s) return;
    (void)s;
}

int b_new_x(void* self) {
    b* s = (b*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void b_a(void* self, int arg0) {
    b* s = (b*)self;
    if (!s) return;
    (void)s;
}

int b_do_x(void* self) {
    b* s = (b*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void b_do_x_2(void* self, int arg0) {
    b* s = (b*)self;
    if (!s) return;
    (void)s;
}

void b_for_x(void* self) {
    b* s = (b*)self;
    if (!s) return;
    (void)s;
}

void b_try_x(void* self) {
    b* s = (b*)self;
    if (!s) return;
    (void)s;
}

int b_if_x(void* self, int arg0, int arg1) {
    b* s = (b*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

int b_a_2(void* self, int arg0, int arg1, int arg2, int arg3) {
    b* s = (b*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

int b_a_3(void* self, int arg0, int arg1, int arg2) {
    b* s = (b*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void* b_if_x_2(void* self) {
    b* s = (b*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void b_if_x_3(void* self, int arg0, int arg1, int arg2) {
    b* s = (b*)self;
    if (!s) return;
    (void)s;
}

void b_if_x_4(void* self, int arg0, int arg1, int arg2, int arg3) {
    b* s = (b*)self;
    if (!s) return;
    (void)s;
}

void b_a_4(void* self, int arg0, int arg1, int arg2, int arg3, int arg4, int arg5) {
    b* s = (b*)self;
    if (!s) return;
    (void)s;
}

int b_if_x_5(void* self, int arg0) {
    b* s = (b*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void b_a_5(void* self, int arg0, int arg1) {
    b* s = (b*)self;
    if (!s) return;
    (void)s;
}

int b_a_6(void* self, void* arg0) {
    b* s = (b*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void b_a_7(void* self) {
    b* s = (b*)self;
    if (!s) return;
    (void)s;
}

int b_case_x(void* self) {
    b* s = (b*)self;
    if (!s) return 0;
    (void)s;
    return 0;
}

void b_a_8(void* self, void* arg0) {
    b* s = (b*)self;
    if (!s) return;
    (void)s;
}

void b_char_x(void* self) {
    b* s = (b*)self;
    if (!s) return;
    (void)s;
}

void b_if_x_6(void* self, void* arg0) {
    b* s = (b*)self;
    if (!s) return;
    (void)s;
}

void b_a_9(void* self, void* arg0, int arg1, int arg2) {
    b* s = (b*)self;
    if (!s) return;
    (void)s;
}

void c_constructor(void* self, void* arg0) {
    c* s = (c*)self;
    if (!s) return;
    (void)s;
}

void c_run(void* self) {
    c* s = (c*)self;
    if (!s) return;
    (void)s;
}

void c_keyReleased(void* self, int arg0) {
    c* s = (c*)self;
    if (!s) return;
    (void)s;
}

void c_paint(void* self, void* arg0) {
    c* s = (c*)self;
    if (!s) return;
    (void)s;
}

void d_constructor(void* self, void* arg0) {
    d* s = (d*)self;
    if (!s) return;
    (void)s;
}

void d_a(void* self, int arg0) {
    d* s = (d*)self;
    if (!s) return;
    (void)s;
}

void d_commandAction(void* self, void* arg0, void* arg1) {
    d* s = (d*)self;
    if (!s) return;
    (void)s;
}

void e_constructor(void* self, void* arg0) {
    e* s = (e*)self;
    if (!s) return;
    (void)s;
}

void e_commandAction(void* self, void* arg0, void* arg1) {
    e* s = (e*)self;
    if (!s) return;
    (void)s;
}

void f_constructor(void* self, void* arg0) {
    f* s = (f*)self;
    if (!s) return;
    (void)s;
}

void f_keyReleased(void* self, int arg0) {
    f* s = (f*)self;
    if (!s) return;
    (void)s;
}

void f_keyRepeated(void* self, int arg0) {
    f* s = (f*)self;
    if (!s) return;
    (void)s;
}

void f_run(void* self) {
    f* s = (f*)self;
    if (!s) return;
    (void)s;
}

void f_a(void* self, int arg0) {
    f* s = (f*)self;
    if (!s) return;
    (void)s;
}

void f_a_2(void* self) {
    f* s = (f*)self;
    if (!s) return;
    (void)s;
}

void f_paint(void* self, void* arg0) {
    f* s = (f*)self;
    if (!s) return;
    (void)s;
}

void f_commandAction(void* self, void* arg0, void* arg1) {
    f* s = (f*)self;
    if (!s) return;
    (void)s;
}

void g_constructor(void* self, void* arg0, int arg1, int arg2) {
    g* s = (g*)self;
    if (!s) return;
    (void)s;
}

void g_run(void* self) {
    g* s = (g*)self;
    if (!s) return;
    (void)s;
}

void g_if_x(void* self) {
    g* s = (g*)self;
    if (!s) return;
    (void)s;
}

void g_a(void* self) {
    g* s = (g*)self;
    if (!s) return;
    (void)s;
}

void g_a_2(void* self, void* arg0) {
    g* s = (g*)self;
    if (!s) return;
    (void)s;
}

void h_constructor(void* self, void* arg0, void* arg1, void* arg2) {
    h* s = (h*)self;
    if (!s) return;
    (void)s;
}

void h_paint(void* self, void* arg0) {
    h* s = (h*)self;
    if (!s) return;
    (void)s;
}

void h_commandAction(void* self, void* arg0, void* arg1) {
    h* s = (h*)self;
    if (!s) return;
    (void)s;
}

int main(void) {
    j2me_gfx_init();
    j2me_input_init();
    j2me_random_init();

    b* mc = (b*)calloc(1, sizeof(b));
    _self = mc;
    msf_mc = mc;

    while (1) {
        j2me_input_update();
        if (j2me_input_should_quit()) break;
        j2me_gfx_begin_frame();
        j2me_gfx_clear(0x101020);
        j2me_gfx_flip();
    }
    j2me_gfx_shutdown();
    sceKernelExitGame();
    return 0;
}