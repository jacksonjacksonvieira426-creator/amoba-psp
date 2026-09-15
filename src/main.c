// amoba - Port automatico J2ME -> PSP
// Gerado por portador.py
// MIDlet: AmobaMIDlet  Canvas: b

#include <pspkernel.h>
#include <string.h>
#include <stdlib.h>
#include "j2me_gfx.h"
#include "j2me_font.h"
#include "j2me_input.h"
#include "j2me_image.h"
#include "j2me_clip.h"
#include "j2me_runtime.h"
#include <stdint.h>

// ============================================
// TIPOS J2ME -> ponteiros opacos em C
// ============================================
typedef void* Image;
typedef void* Graphics;
typedef void* Font;
typedef void* String;
typedef void* Command;
typedef void* Display;
typedef void* Displayable;
typedef void* MIDlet;
typedef void* Canvas;

PSP_MODULE_INFO("amoba", 0, 1, 0);
PSP_MAIN_THREAD_ATTR(THREAD_ATTR_USER);

#define SCR_W 480
#define SCR_H 272

// ============================================
// FORWARD DECLARATIONS das classes do projeto
// ============================================
typedef struct AmobaMIDlet_s AmobaMIDlet;
typedef struct a_s a;
typedef struct ofusc_00e7_s ofusc_00e7;
typedef struct b_s b;
typedef struct c_s c;
typedef struct d_s d;
typedef struct e_s e;
typedef struct f_s f;
typedef struct g_s g;
typedef struct h_s h;

// ============================================
// ESTRUTURAS DE DADOS (traduzidas do J2ME)
// ============================================

// === Classe: AmobaMIDlet (extends MIDlet) ===
// Padroes detectados: MIDLET, TEM_RUN, TEM_STARTAPP
struct AmobaMIDlet_s {
    f*              for;  // for (Lf;)
    d*              do;  // do (Ld;)
    Hashtable*      a;  // a (Ljava/util/Hashtable;)
    c*              if;  // if (Lc;)
};

// === Classe: a (extends Object) ===
// Padroes detectados: nenhum
struct a_s {
    int             do;  // do (I)
    RecordStore*    if;  // if (Ljavax/microedition/rms/RecordStore;)
    String*         a;  // a (Ljava/lang/String;)
};

// === Classe: b$a (extends Object) ===
// Padroes detectados: nenhum
struct ofusc_00e7_s {
    int             a;  // a (I)
    int             if;  // if (I)
};

// === Classe: b (extends Canvas) ===
// Padroes detectados: CANVAS, USA_IMAGE
struct b_s {
    int             m;  // m (I)
    int             int;  // int (I)
    int             u;  // u (I)
    int             h;  // h (I)
    int             w;  // w (I)
    signed char     null;  // null (B)
    signed char     f;  // f (B)
    signed char     o;  // o (B)
    int             long;  // long (I)
    int             e;  // e (I)
    int             c;  // c (I)
    int             s;  // s (I)
    int             d;  // d (I)
    int             y;  // y (I)
    int             j;  // j (I)
    int             byte;  // byte (I)
    String*         void;  // void (Ljava/lang/String;)
    String*         r;  // r (Ljava/lang/String;)
    String*         t;  // t (Ljava/lang/String;)
    int             C;  // C (I)
    int*            l;  // l ([I)
    Image*          z;  // z (Ljavax/microedition/lcdui/Image;)
    int             k;  // k (I)
    int             b;  // b (I)
    int             for;  // for (I)
    int             D;  // D (I)
    int             try;  // try (I)
    int             new;  // new (I)
    int             do;  // do (I)
    int             if;  // if (I)
    int             else;  // else (I)
    int             char;  // char (I)
    int             goto;  // goto (I)
    int             g;  // g (I)
    int             case;  // case (I)
    signed char*    a;  // a ([B)
    signed char*    n;  // n ([B)
    int*            B;  // B ([I)
    Random*         x;  // x (Ljava/util/Random;)
    Image*          q;  // q (Ljavax/microedition/lcdui/Image;)
    int             v;  // v (I)
    int             i;  // i (I)
    int             A;  // A (I)
    int             p;  // p (I)
};

// === Classe: c (extends Canvas) ===
// Padroes detectados: CANVAS, TEM_PAINT, TEM_RUN, USA_IMAGE
struct c_s {
    AmobaMIDlet*    int;  // int (LAmobaMIDlet;)
    Image*          do;  // do (Ljavax/microedition/lcdui/Image;)
    Image*          for;  // for (Ljavax/microedition/lcdui/Image;)
    int             if;  // if (Z)
    int             a;  // a (Z)
    int             new;  // new (I)
};

// === Classe: d (extends Object) ===
// Padroes detectados: nenhum
struct d_s {
    String*         byte;  // byte (Ljava/lang/String;)
    String*         do;  // do (Ljava/lang/String;)
    String*         a;  // a (Ljava/lang/String;)
    String*         new;  // new (Ljava/lang/String;)
    String*         int;  // int (Ljava/lang/String;)
    String*         if;  // if (Ljava/lang/String;)
    AmobaMIDlet*    for;  // for (LAmobaMIDlet;)
    Command*        try;  // try (Ljavax/microedition/lcdui/Command;)
};

// === Classe: e (extends Object) ===
// Padroes detectados: nenhum
struct e_s {
    AmobaMIDlet*    for;  // for (LAmobaMIDlet;)
    ChoiceGroup*    a;  // a (Ljavax/microedition/lcdui/ChoiceGroup;)
    TextField*      do;  // do (Ljavax/microedition/lcdui/TextField;)
    Command*        if;  // if (Ljavax/microedition/lcdui/Command;)
    Command*        int;  // int (Ljavax/microedition/lcdui/Command;)
};

// === Classe: f (extends Canvas) ===
// Padroes detectados: CANVAS, TEM_PAINT, TEM_RUN
struct f_s {
    AmobaMIDlet*    new;  // new (LAmobaMIDlet;)
    b*              a;  // a (Lb;)
    Command*        do;  // do (Ljavax/microedition/lcdui/Command;)
    g*              for;  // for (Lg;)
    int             if;  // if (I)
    int             int;  // int (Z)
};

// === Classe: g (extends Canvas) ===
// Padroes detectados: CANVAS, TEM_RUN, USA_IMAGE
struct g_s {
    int             for;  // for (I)
    int             new;  // new (I)
    Canvas*         do;  // do (Ljavax/microedition/lcdui/Canvas;)
    int             a;  // a (I)
    int             byte;  // byte (I)
    Image*          if;  // if (Ljavax/microedition/lcdui/Image;)
    int             try;  // try (I)
    int             int;  // int (Z)
};

// === Classe: h (extends Canvas) ===
// Padroes detectados: CANVAS, TEM_PAINT, USA_IMAGE
struct h_s {
    AmobaMIDlet*    do;  // do (LAmobaMIDlet;)
    Displayable*    for;  // for (Ljavax/microedition/lcdui/Displayable;)
    Image*          if;  // if (Ljavax/microedition/lcdui/Image;)
    Command*        a;  // a (Ljavax/microedition/lcdui/Command;)
};

// ============================================
// METODOS (traduzidos do bytecode)
// ============================================

// === AmobaMIDlet.AmobaMIDlet_constructor (()V) ===
// Instrucoes: 3
// APIs usadas:
//   1x javax/microedition/midlet/MIDlet.<init> -> ??? javax/microedition/midlet/MIDlet.<init>
void AmobaMIDlet_constructor() {
    // TODO: traduzir logica do bytecode
}

// === AmobaMIDlet.AmobaMIDlet_run (()V) ===
// Instrucoes: 32
void AmobaMIDlet_run() {
    // TODO: traduzir logica do bytecode
}

// === AmobaMIDlet.AmobaMIDlet_a ((Ljava/lang/String;)Ljava/lang/String;) ===
// Instrucoes: 6
// APIs usadas:
//   1x java/util/Hashtable.get -> ??? java/util/Hashtable.get
String* AmobaMIDlet_a() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === AmobaMIDlet.AmobaMIDlet_a_2 ((Ljavax/microedition/lcdui/Displayable;)V) ===
// Instrucoes: 5
// APIs usadas:
//   1x javax/microedition/lcdui/Display.getDisplay -> j2me_display_get
//   1x javax/microedition/lcdui/Display.setCurrent -> j2me_display_set
void AmobaMIDlet_a_2() {
    // TODO: traduzir logica do bytecode
}

// === AmobaMIDlet.AmobaMIDlet_startApp (()V) ===
// Instrucoes: 28
// APIs usadas:
//   3x javax/microedition/lcdui/Display.getDisplay -> j2me_display_get
//   2x javax/microedition/lcdui/Display.setCurrent -> j2me_display_set
//   1x javax/microedition/lcdui/Display.getCurrent -> ??? javax/microedition/lcdui/Display.getCurrent
//   1x java/lang/Thread.<init> -> ??? java/lang/Thread.<init>
//   1x java/lang/Thread.start -> j2me_thread_start
void AmobaMIDlet_startApp() {
    // TODO: traduzir logica do bytecode
}

// === AmobaMIDlet.AmobaMIDlet_pauseApp (()V) ===
// Instrucoes: 1
void AmobaMIDlet_pauseApp() {
    // TODO: traduzir logica do bytecode
}

// === AmobaMIDlet.AmobaMIDlet_destroyApp ((Z)V) ===
// Instrucoes: 5
void AmobaMIDlet_destroyApp() {
    // TODO: traduzir logica do bytecode
}

// === AmobaMIDlet.AmobaMIDlet_if (()V) ===
// Instrucoes: 6
// APIs usadas:
//   1x javax/microedition/midlet/MIDlet.notifyDestroyed -> ??? javax/microedition/midlet/MIDlet.notifyDestroyed
void AmobaMIDlet_if() {
    // TODO: traduzir logica do bytecode
}

// === AmobaMIDlet.AmobaMIDlet_a_3 (()V) ===
// Instrucoes: 138
// APIs usadas:
//   2x java/io/InputStream.read -> ??? java/io/InputStream.read
//   2x java/lang/String.<init> -> ??? java/lang/String.<init>
//   2x java/lang/String.indexOf -> ??? java/lang/String.indexOf
//   2x java/lang/String.substring -> ??? java/lang/String.substring
//   1x java/util/Hashtable.<init> -> ??? java/util/Hashtable.<init>
//   1x java/lang/Object.getClass -> ??? java/lang/Object.getClass
//   1x java/lang/Class.getResourceAsStream -> ??? java/lang/Class.getResourceAsStream
//   1x java/lang/String.length -> ??? java/lang/String.length
void AmobaMIDlet_a_3() {
    // TODO: traduzir logica do bytecode
}

// === a.a_constructor (()V) ===
// Instrucoes: 3
// APIs usadas:
//   1x java/lang/Object.<init> -> j2me_noop
void a_constructor() {
    // TODO: traduzir logica do bytecode
}

// === a.a_if ((Ljava/lang/String;)V) ===
// Instrucoes: 15
// APIs usadas:
//   1x javax/microedition/rms/RecordStore.closeRecordStore -> ??? javax/microedition/rms/RecordStore.closeRecordStore
//   1x javax/microedition/rms/RecordStore.openRecordStore -> ??? javax/microedition/rms/RecordStore.openRecordStore
void a_if() {
    // TODO: traduzir logica do bytecode
}

// === a.a_a (()V) ===
// Instrucoes: 7
// APIs usadas:
//   1x javax/microedition/rms/RecordStore.closeRecordStore -> ??? javax/microedition/rms/RecordStore.closeRecordStore
void a_a() {
    // TODO: traduzir logica do bytecode
}

// === a.a_a_2 ((Ljava/lang/String;)Ljava/lang/String;) ===
// Instrucoes: 32
// APIs usadas:
//   1x javax/microedition/rms/RecordStore.enumerateRecords -> ??? javax/microedition/rms/RecordStore.enumerateRecords
//   1x javax/microedition/rms/RecordEnumeration.hasNextElement -> ??? javax/microedition/rms/RecordEnumeration.hasNextElement
//   1x javax/microedition/rms/RecordEnumeration.nextRecord -> ??? javax/microedition/rms/RecordEnumeration.nextRecord
//   1x java/lang/String.<init> -> ??? java/lang/String.<init>
//   1x javax/microedition/rms/RecordEnumeration.destroy -> ??? javax/microedition/rms/RecordEnumeration.destroy
String* a_a_2() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === a.a_a_3 ((Ljava/lang/String;Ljava/lang/String;)V) ===
// Instrucoes: 53
// APIs usadas:
//   1x java/lang/StringBuffer.<init> -> ??? java/lang/StringBuffer.<init>
//   1x java/lang/StringBuffer.setLength -> ??? java/lang/StringBuffer.setLength
//   1x java/lang/StringBuffer.insert -> ??? java/lang/StringBuffer.insert
//   1x java/lang/StringBuffer.toString -> ??? java/lang/StringBuffer.toString
//   1x java/lang/String.getBytes -> ??? java/lang/String.getBytes
//   1x javax/microedition/rms/RecordStore.enumerateRecords -> ??? javax/microedition/rms/RecordStore.enumerateRecords
//   1x javax/microedition/rms/RecordEnumeration.hasNextElement -> ??? javax/microedition/rms/RecordEnumeration.hasNextElement
//   1x javax/microedition/rms/RecordEnumeration.nextRecordId -> ??? javax/microedition/rms/RecordEnumeration.nextRecordId
void a_a_3() {
    // TODO: traduzir logica do bytecode
}

// === a.a_matches (([B)Z) ===
// Instrucoes: 14
// APIs usadas:
//   1x java/lang/String.<init> -> ??? java/lang/String.<init>
//   1x java/lang/String.trim -> ??? java/lang/String.trim
//   1x java/lang/String.startsWith -> ??? java/lang/String.startsWith
int a_matches() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === b$a.b$a_constructor ((II)V) ===
// Instrucoes: 9
// APIs usadas:
//   1x java/lang/Object.<init> -> j2me_noop
void b$a_constructor() {
    // TODO: traduzir logica do bytecode
}

// === b.b_constructor ((II)V) ===
// Instrucoes: 116
// APIs usadas:
//   1x java/lang/Object.<init> -> j2me_noop
//   1x java/util/Random.<init> -> j2me_random_init
//   1x javax/microedition/lcdui/Image.createImage -> j2me_image_create
void b_constructor() {
    // TODO: traduzir logica do bytecode
}

// === b.b_int (()V) ===
// Instrucoes: 119
// APIs usadas:
//   1x javax/microedition/lcdui/Image.getGraphics -> j2me_image_get_graphics
void b_int() {
    // TODO: traduzir logica do bytecode
}

// === b.b_byte (()V) ===
// Instrucoes: 67
// APIs usadas:
//   1x javax/microedition/lcdui/Image.createImage -> j2me_image_create
//   1x java/lang/Runtime.getRuntime -> ??? java/lang/Runtime.getRuntime
//   1x java/lang/Runtime.freeMemory -> ??? java/lang/Runtime.freeMemory
//   1x java/lang/OutOfMemoryError.<init> -> ??? java/lang/OutOfMemoryError.<init>
void b_byte() {
    // TODO: traduzir logica do bytecode
}

// === b.b_new (()I) ===
// Instrucoes: 3
int b_new() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === b.b_a ((I)V) ===
// Instrucoes: 4
void b_a() {
    // TODO: traduzir logica do bytecode
}

// === b.b_do (()I) ===
// Instrucoes: 3
int b_do() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === b.b_do_2 ((I)V) ===
// Instrucoes: 4
void b_do_2() {
    // TODO: traduzir logica do bytecode
}

// === b.b_for (()V) ===
// Instrucoes: 52
// APIs usadas:
//   2x java/lang/Integer.parseInt -> j2me_int_parse
void b_for() {
    // TODO: traduzir logica do bytecode
}

// === b.b_try (()V) ===
// Instrucoes: 24
// APIs usadas:
//   2x java/lang/String.valueOf -> ??? java/lang/String.valueOf
void b_try() {
    // TODO: traduzir logica do bytecode
}

// === b.b_if ((II)I) ===
// Instrucoes: 6
int b_if() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === b.b_a_2 ((IIII)I) ===
// Instrucoes: 14
int b_a_2() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === b.b_a_3 ((III)I) ===
// Instrucoes: 10
int b_a_3() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === b.b_if_2 (()Lb$a;) ===
// Instrucoes: 106
// APIs usadas:
//   1x java/util/Random.nextInt -> j2me_random_next
b$a* b_if_2() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === b.b_if_3 ((III)V) ===
// Instrucoes: 205
void b_if_3() {
    // TODO: traduzir logica do bytecode
}

// === b.b_if_4 ((IIII)V) ===
// Instrucoes: 47
void b_if_4() {
    // TODO: traduzir logica do bytecode
}

// === b.b_a_4 ((IIIIII)V) ===
// Instrucoes: 98
void b_a_4() {
    // TODO: traduzir logica do bytecode
}

// === b.b_if_5 ((I)I) ===
// Instrucoes: 7
int b_if_5() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === b.b_a_5 ((II)V) ===
// Instrucoes: 80
// APIs usadas:
//   1x javax/microedition/lcdui/Image.getGraphics -> j2me_image_get_graphics
void b_a_5() {
    // TODO: traduzir logica do bytecode
}

// === b.b_a_6 ((Ljavax/microedition/lcdui/Canvas;)Z) ===
// Instrucoes: 48
// APIs usadas:
//   1x javax/microedition/lcdui/Image.getGraphics -> j2me_image_get_graphics
//   1x javax/microedition/lcdui/Canvas.repaint -> j2me_canvas_repaint
//   1x java/lang/Thread.yield -> ??? java/lang/Thread.yield
int b_a_6() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === b.b_a_7 (()V) ===
// Instrucoes: 61
// APIs usadas:
//   1x javax/microedition/lcdui/Image.getGraphics -> j2me_image_get_graphics
void b_a_7() {
    // TODO: traduzir logica do bytecode
}

// === b.b_case (()I) ===
// Instrucoes: 3
int b_case() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === b.b_a_8 ((Ljavax/microedition/lcdui/Graphics;)V) ===
// Instrucoes: 113
// APIs usadas:
//   6x javax/microedition/lcdui/Graphics.drawLine -> ??? javax/microedition/lcdui/Graphics.drawLine
//   2x javax/microedition/lcdui/Graphics.setColor -> j2me_gfx_set_color
//   1x javax/microedition/lcdui/Image.getWidth -> ??? javax/microedition/lcdui/Image.getWidth
//   1x javax/microedition/lcdui/Image.getHeight -> ??? javax/microedition/lcdui/Image.getHeight
//   1x javax/microedition/lcdui/Graphics.fillRect -> j2me_gfx_fill_rect
void b_a_8() {
    // TODO: traduzir logica do bytecode
}

// === b.b_char (()V) ===
// Instrucoes: 53
void b_char() {
    // TODO: traduzir logica do bytecode
}

// === b.b_if_6 ((Ljavax/microedition/lcdui/Graphics;)V) ===
// Instrucoes: 37
// APIs usadas:
//   1x javax/microedition/lcdui/Graphics.setClip -> j2me_clip_push
//   1x javax/microedition/lcdui/Graphics.drawImage -> j2me_image_blit
void b_if_6() {
    // TODO: traduzir logica do bytecode
}

// === b.b_a_9 ((Ljavax/microedition/lcdui/Graphics;II)V) ===
// Instrucoes: 110
// APIs usadas:
//   4x javax/microedition/lcdui/Graphics.drawImage -> j2me_image_blit
//   2x javax/microedition/lcdui/Graphics.setColor -> j2me_gfx_set_color
//   2x javax/microedition/lcdui/Graphics.setClip -> j2me_clip_push
//   1x javax/microedition/lcdui/Graphics.fillRect -> j2me_gfx_fill_rect
void b_a_9() {
    // TODO: traduzir logica do bytecode
}

// === c.c_constructor ((LAmobaMIDlet;)V) ===
// Instrucoes: 23
// APIs usadas:
//   2x javax/microedition/lcdui/Image.createImage -> j2me_image_create
//   1x javax/microedition/lcdui/Canvas.<init> -> ??? javax/microedition/lcdui/Canvas.<init>
//   1x java/lang/Thread.<init> -> ??? java/lang/Thread.<init>
//   1x java/lang/Thread.start -> j2me_thread_start
//   1x javax/microedition/lcdui/Canvas.repaint -> j2me_canvas_repaint
void c_constructor() {
    // TODO: traduzir logica do bytecode
}

// === c.c_run (()V) ===
// Instrucoes: 54
// APIs usadas:
//   2x java/lang/Thread.sleep -> j2me_sleep
//   1x javax/microedition/lcdui/Canvas.repaint -> j2me_canvas_repaint
void c_run() {
    // TODO: traduzir logica do bytecode
}

// === c.c_keyReleased ((I)V) ===
// Instrucoes: 4
void c_keyReleased() {
    // TODO: traduzir logica do bytecode
}

// === c.c_paint ((Ljavax/microedition/lcdui/Graphics;)V) ===
// Instrucoes: 67
// APIs usadas:
//   2x javax/microedition/lcdui/Graphics.drawImage -> j2me_image_blit
//   1x javax/microedition/lcdui/Canvas.getWidth -> j2me_canvas_w
//   1x javax/microedition/lcdui/Canvas.getHeight -> j2me_canvas_h
//   1x javax/microedition/lcdui/Graphics.setColor -> j2me_gfx_set_color
//   1x javax/microedition/lcdui/Graphics.fillRect -> j2me_gfx_fill_rect
//   1x javax/microedition/lcdui/Image.getWidth -> ??? javax/microedition/lcdui/Image.getWidth
//   1x javax/microedition/lcdui/Image.getHeight -> ??? javax/microedition/lcdui/Image.getHeight
//   1x javax/microedition/lcdui/Graphics.setClip -> j2me_clip_push
void c_paint() {
    // TODO: traduzir logica do bytecode
}

// === d.d_constructor ((LAmobaMIDlet;)V) ===
// Instrucoes: 106
// APIs usadas:
//   5x javax/microedition/lcdui/List.append -> ??? javax/microedition/lcdui/List.append
//   1x javax/microedition/lcdui/List.<init> -> ??? javax/microedition/lcdui/List.<init>
//   1x javax/microedition/lcdui/Command.<init> -> ??? javax/microedition/lcdui/Command.<init>
//   1x javax/microedition/lcdui/Displayable.addCommand -> ??? javax/microedition/lcdui/Displayable.addCommand
//   1x javax/microedition/lcdui/Displayable.setCommandListener -> ??? javax/microedition/lcdui/Displayable.setCommandListener
void d_constructor() {
    // TODO: traduzir logica do bytecode
}

// === d.d_a ((Z)V) ===
// Instrucoes: 31
// APIs usadas:
//   2x javax/microedition/lcdui/List.getString -> ??? javax/microedition/lcdui/List.getString
//   2x java/lang/String.equals -> ??? java/lang/String.equals
//   1x javax/microedition/lcdui/List.insert -> ??? javax/microedition/lcdui/List.insert
//   1x javax/microedition/lcdui/List.setSelectedIndex -> ??? javax/microedition/lcdui/List.setSelectedIndex
//   1x javax/microedition/lcdui/List.delete -> ??? javax/microedition/lcdui/List.delete
void d_a() {
    // TODO: traduzir logica do bytecode
}

// === d.d_commandAction ((Ljavax/microedition/lcdui/Command;Ljavax/microedition/lcdui/Displayable;)V) ===
// Instrucoes: 126
// APIs usadas:
//   6x java/lang/String.equals -> ??? java/lang/String.equals
//   2x javax/microedition/lcdui/Alert.<init> -> ??? javax/microedition/lcdui/Alert.<init>
//   1x javax/microedition/lcdui/List.getSelectedIndex -> ??? javax/microedition/lcdui/List.getSelectedIndex
//   1x javax/microedition/lcdui/List.getString -> ??? javax/microedition/lcdui/List.getString
//   1x javax/microedition/lcdui/Alert.setTimeout -> ??? javax/microedition/lcdui/Alert.setTimeout
void d_commandAction() {
    // TODO: traduzir logica do bytecode
}

// === e.e_constructor ((LAmobaMIDlet;)V) ===
// Instrucoes: 98
// APIs usadas:
//   2x javax/microedition/lcdui/ChoiceGroup.append -> ??? javax/microedition/lcdui/ChoiceGroup.append
//   2x javax/microedition/lcdui/Form.append -> ??? javax/microedition/lcdui/Form.append
//   2x javax/microedition/lcdui/Command.<init> -> ??? javax/microedition/lcdui/Command.<init>
//   2x javax/microedition/lcdui/Displayable.addCommand -> ??? javax/microedition/lcdui/Displayable.addCommand
//   1x javax/microedition/lcdui/Form.<init> -> ??? javax/microedition/lcdui/Form.<init>
//   1x javax/microedition/lcdui/ChoiceGroup.<init> -> ??? javax/microedition/lcdui/ChoiceGroup.<init>
//   1x javax/microedition/lcdui/ChoiceGroup.setSelectedIndex -> ??? javax/microedition/lcdui/ChoiceGroup.setSelectedIndex
//   1x java/lang/String.valueOf -> ??? java/lang/String.valueOf
void e_constructor() {
    // TODO: traduzir logica do bytecode
}

// === e.e_commandAction ((Ljavax/microedition/lcdui/Command;Ljavax/microedition/lcdui/Displayable;)V) ===
// Instrucoes: 73
// APIs usadas:
//   1x javax/microedition/lcdui/TextField.getString -> ??? javax/microedition/lcdui/TextField.getString
//   1x java/lang/Integer.parseInt -> j2me_int_parse
//   1x javax/microedition/lcdui/Alert.<init> -> ??? javax/microedition/lcdui/Alert.<init>
//   1x javax/microedition/lcdui/Alert.setTimeout -> ??? javax/microedition/lcdui/Alert.setTimeout
//   1x javax/microedition/lcdui/ChoiceGroup.getSelectedIndex -> ??? javax/microedition/lcdui/ChoiceGroup.getSelectedIndex
void e_commandAction() {
    // TODO: traduzir logica do bytecode
}

// === f.f_constructor ((LAmobaMIDlet;)V) ===
// Instrucoes: 50
// APIs usadas:
//   2x javax/microedition/lcdui/Canvas.getWidth -> j2me_canvas_w
//   1x javax/microedition/lcdui/Canvas.<init> -> ??? javax/microedition/lcdui/Canvas.<init>
//   1x javax/microedition/lcdui/Command.<init> -> ??? javax/microedition/lcdui/Command.<init>
//   1x javax/microedition/lcdui/Displayable.addCommand -> ??? javax/microedition/lcdui/Displayable.addCommand
//   1x javax/microedition/lcdui/Displayable.setCommandListener -> ??? javax/microedition/lcdui/Displayable.setCommandListener
//   1x javax/microedition/lcdui/Canvas.getHeight -> j2me_canvas_h
//   1x java/lang/Thread.<init> -> ??? java/lang/Thread.<init>
//   1x java/lang/Thread.start -> j2me_thread_start
void f_constructor() {
    // TODO: traduzir logica do bytecode
}

// === f.f_keyReleased ((I)V) ===
// Instrucoes: 23
// APIs usadas:
//   1x javax/microedition/lcdui/Canvas.getGameAction -> j2me_input_get_actions
//   1x java/lang/Object.notifyAll -> ??? java/lang/Object.notifyAll
void f_keyReleased() {
    // TODO: traduzir logica do bytecode
}

// === f.f_keyRepeated ((I)V) ===
// Instrucoes: 23
// APIs usadas:
//   1x javax/microedition/lcdui/Canvas.getGameAction -> j2me_input_get_actions
//   1x java/lang/Object.notifyAll -> ??? java/lang/Object.notifyAll
void f_keyRepeated() {
    // TODO: traduzir logica do bytecode
}

// === f.f_run (()V) ===
// Instrucoes: 41
// APIs usadas:
//   1x java/lang/Object.wait -> ??? java/lang/Object.wait
//   1x javax/microedition/lcdui/Canvas.repaint -> j2me_canvas_repaint
void f_run() {
    // TODO: traduzir logica do bytecode
}

// === f.f_a ((I)V) ===
// Instrucoes: 28
// APIs usadas:
//   1x javax/microedition/lcdui/Canvas.repaint -> j2me_canvas_repaint
void f_a() {
    // TODO: traduzir logica do bytecode
}

// === f.f_a_2 (()V) ===
// Instrucoes: 60
// APIs usadas:
//   3x javax/microedition/lcdui/Alert.<init> -> ??? javax/microedition/lcdui/Alert.<init>
//   1x javax/microedition/lcdui/Alert.setTimeout -> ??? javax/microedition/lcdui/Alert.setTimeout
void f_a_2() {
    // TODO: traduzir logica do bytecode
}

// === f.f_paint ((Ljavax/microedition/lcdui/Graphics;)V) ===
// Instrucoes: 30
// APIs usadas:
//   1x javax/microedition/lcdui/Canvas.getWidth -> j2me_canvas_w
//   1x javax/microedition/lcdui/Canvas.getHeight -> j2me_canvas_h
//   1x javax/microedition/lcdui/Graphics.setColor -> j2me_gfx_set_color
//   1x javax/microedition/lcdui/Graphics.fillRect -> j2me_gfx_fill_rect
void f_paint() {
    // TODO: traduzir logica do bytecode
}

// === f.f_commandAction ((Ljavax/microedition/lcdui/Command;Ljavax/microedition/lcdui/Displayable;)V) ===
// Instrucoes: 16
void f_commandAction() {
    // TODO: traduzir logica do bytecode
}

// === g.g_constructor ((Ljavax/microedition/lcdui/Canvas;II)V) ===
// Instrucoes: 18
// APIs usadas:
//   1x java/lang/Object.<init> -> j2me_noop
//   1x javax/microedition/lcdui/Image.createImage -> j2me_image_create
void g_constructor() {
    // TODO: traduzir logica do bytecode
}

// === g.g_run (()V) ===
// Instrucoes: 30
// APIs usadas:
//   1x javax/microedition/lcdui/Canvas.repaint -> j2me_canvas_repaint
//   1x java/lang/Thread.sleep -> j2me_sleep
void g_run() {
    // TODO: traduzir logica do bytecode
}

// === g.g_if (()V) ===
// Instrucoes: 15
// APIs usadas:
//   1x java/lang/Thread.<init> -> ??? java/lang/Thread.<init>
//   1x java/lang/Thread.start -> j2me_thread_start
void g_if() {
    // TODO: traduzir logica do bytecode
}

// === g.g_a (()V) ===
// Instrucoes: 13
// APIs usadas:
//   1x javax/microedition/lcdui/Canvas.repaint -> j2me_canvas_repaint
void g_a() {
    // TODO: traduzir logica do bytecode
}

// === g.g_a_2 ((Ljavax/microedition/lcdui/Graphics;)V) ===
// Instrucoes: 65
// APIs usadas:
//   2x javax/microedition/lcdui/Graphics.setClip -> j2me_clip_push
//   2x javax/microedition/lcdui/Graphics.drawImage -> j2me_image_blit
void g_a_2() {
    // TODO: traduzir logica do bytecode
}

// === h.h_constructor ((LAmobaMIDlet;Ljava/lang/String;Ljavax/microedition/lcdui/Displayable;)V) ===
// Instrucoes: 32
// APIs usadas:
//   1x javax/microedition/lcdui/Canvas.<init> -> ??? javax/microedition/lcdui/Canvas.<init>
//   1x javax/microedition/lcdui/Image.createImage -> j2me_image_create
//   1x javax/microedition/lcdui/Command.<init> -> ??? javax/microedition/lcdui/Command.<init>
//   1x javax/microedition/lcdui/Displayable.addCommand -> ??? javax/microedition/lcdui/Displayable.addCommand
//   1x javax/microedition/lcdui/Displayable.setCommandListener -> ??? javax/microedition/lcdui/Displayable.setCommandListener
void h_constructor() {
    // TODO: traduzir logica do bytecode
}

// === h.h_paint ((Ljavax/microedition/lcdui/Graphics;)V) ===
// Instrucoes: 29
// APIs usadas:
//   1x javax/microedition/lcdui/Canvas.getWidth -> j2me_canvas_w
//   1x javax/microedition/lcdui/Canvas.getHeight -> j2me_canvas_h
//   1x javax/microedition/lcdui/Graphics.setColor -> j2me_gfx_set_color
//   1x javax/microedition/lcdui/Graphics.fillRect -> j2me_gfx_fill_rect
//   1x javax/microedition/lcdui/Graphics.drawImage -> j2me_image_blit
void h_paint() {
    // TODO: traduzir logica do bytecode
}

// === h.h_commandAction ((Ljavax/microedition/lcdui/Command;Ljavax/microedition/lcdui/Displayable;)V) ===
// Instrucoes: 10
void h_commandAction() {
    // TODO: traduzir logica do bytecode
}

// ============================================
// GAME LOOP PRINCIPAL
// ============================================

int main(void) {
    j2me_gfx_init();
    j2me_input_init();
    j2me_random_init();

    while (1) {
        j2me_input_update();
        if (j2me_input_should_quit()) break;

        j2me_gfx_begin_frame();
        j2me_gfx_clear(0x101020);

        // TODO: chamar metodos do jogo aqui
        // AmobaMIDlet_startApp();
        // b_paint();

        j2me_gfx_flip();
    }

    j2me_gfx_shutdown();
    sceKernelExitGame();
    return 0;
}
