/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "//Mac/Home/projects/verilog/proj_201840840_06/proj/DownCounter.v";
static int ng1[] = {0, 0};
static int ng2[] = {9, 0};
static int ng3[] = {1, 0};



static void Cont_9_0(char *t0)
{
    char t3[8];
    char t6[8];
    char t32[8];
    char t36[8];
    char t62[8];
    char t94[8];
    char t98[8];
    char t124[8];
    char t156[8];
    char t160[8];
    char t186[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    int t86;
    int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t95;
    char *t96;
    char *t97;
    char *t99;
    char *t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    char *t114;
    char *t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t128;
    char *t129;
    char *t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    char *t138;
    char *t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    int t148;
    int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    char *t157;
    char *t158;
    char *t159;
    char *t161;
    char *t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    char *t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    char *t175;
    char *t176;
    char *t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    char *t190;
    char *t191;
    char *t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    char *t200;
    char *t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    int t210;
    int t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    char *t218;
    char *t219;
    char *t220;
    char *t221;
    char *t222;
    unsigned int t223;
    unsigned int t224;
    char *t225;
    unsigned int t226;
    unsigned int t227;
    char *t228;
    unsigned int t229;
    unsigned int t230;
    char *t231;

LAB0:    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(9, ng0);
    t2 = (t0 + 2408);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 3);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 3);
    t14 = (t13 & 1);
    *((unsigned int *)t7) = t14;
    memset(t3, 0, 8);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t15) == 0)
        goto LAB4;

LAB6:    t21 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t21) = 1;

LAB7:    t22 = (t3 + 4);
    t23 = (t6 + 4);
    t24 = *((unsigned int *)t6);
    t25 = (~(t24));
    *((unsigned int *)t3) = t25;
    *((unsigned int *)t22) = 0;
    if (*((unsigned int *)t23) != 0)
        goto LAB9;

LAB8:    t30 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t30 & 1U);
    t31 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t31 & 1U);
    t33 = (t0 + 2408);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memset(t36, 0, 8);
    t37 = (t36 + 4);
    t38 = (t35 + 4);
    t39 = *((unsigned int *)t35);
    t40 = (t39 >> 2);
    t41 = (t40 & 1);
    *((unsigned int *)t36) = t41;
    t42 = *((unsigned int *)t38);
    t43 = (t42 >> 2);
    t44 = (t43 & 1);
    *((unsigned int *)t37) = t44;
    memset(t32, 0, 8);
    t45 = (t36 + 4);
    t46 = *((unsigned int *)t45);
    t47 = (~(t46));
    t48 = *((unsigned int *)t36);
    t49 = (t48 & t47);
    t50 = (t49 & 1U);
    if (t50 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t45) == 0)
        goto LAB10;

LAB12:    t51 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t51) = 1;

LAB13:    t52 = (t32 + 4);
    t53 = (t36 + 4);
    t54 = *((unsigned int *)t36);
    t55 = (~(t54));
    *((unsigned int *)t32) = t55;
    *((unsigned int *)t52) = 0;
    if (*((unsigned int *)t53) != 0)
        goto LAB15;

LAB14:    t60 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t60 & 1U);
    t61 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t61 & 1U);
    t63 = *((unsigned int *)t3);
    t64 = *((unsigned int *)t32);
    t65 = (t63 & t64);
    *((unsigned int *)t62) = t65;
    t66 = (t3 + 4);
    t67 = (t32 + 4);
    t68 = (t62 + 4);
    t69 = *((unsigned int *)t66);
    t70 = *((unsigned int *)t67);
    t71 = (t69 | t70);
    *((unsigned int *)t68) = t71;
    t72 = *((unsigned int *)t68);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB16;

LAB17:
LAB18:    t95 = (t0 + 2408);
    t96 = (t95 + 56U);
    t97 = *((char **)t96);
    memset(t98, 0, 8);
    t99 = (t98 + 4);
    t100 = (t97 + 4);
    t101 = *((unsigned int *)t97);
    t102 = (t101 >> 1);
    t103 = (t102 & 1);
    *((unsigned int *)t98) = t103;
    t104 = *((unsigned int *)t100);
    t105 = (t104 >> 1);
    t106 = (t105 & 1);
    *((unsigned int *)t99) = t106;
    memset(t94, 0, 8);
    t107 = (t98 + 4);
    t108 = *((unsigned int *)t107);
    t109 = (~(t108));
    t110 = *((unsigned int *)t98);
    t111 = (t110 & t109);
    t112 = (t111 & 1U);
    if (t112 != 0)
        goto LAB22;

LAB20:    if (*((unsigned int *)t107) == 0)
        goto LAB19;

LAB21:    t113 = (t94 + 4);
    *((unsigned int *)t94) = 1;
    *((unsigned int *)t113) = 1;

LAB22:    t114 = (t94 + 4);
    t115 = (t98 + 4);
    t116 = *((unsigned int *)t98);
    t117 = (~(t116));
    *((unsigned int *)t94) = t117;
    *((unsigned int *)t114) = 0;
    if (*((unsigned int *)t115) != 0)
        goto LAB24;

LAB23:    t122 = *((unsigned int *)t94);
    *((unsigned int *)t94) = (t122 & 1U);
    t123 = *((unsigned int *)t114);
    *((unsigned int *)t114) = (t123 & 1U);
    t125 = *((unsigned int *)t62);
    t126 = *((unsigned int *)t94);
    t127 = (t125 & t126);
    *((unsigned int *)t124) = t127;
    t128 = (t62 + 4);
    t129 = (t94 + 4);
    t130 = (t124 + 4);
    t131 = *((unsigned int *)t128);
    t132 = *((unsigned int *)t129);
    t133 = (t131 | t132);
    *((unsigned int *)t130) = t133;
    t134 = *((unsigned int *)t130);
    t135 = (t134 != 0);
    if (t135 == 1)
        goto LAB25;

LAB26:
LAB27:    t157 = (t0 + 2408);
    t158 = (t157 + 56U);
    t159 = *((char **)t158);
    memset(t160, 0, 8);
    t161 = (t160 + 4);
    t162 = (t159 + 4);
    t163 = *((unsigned int *)t159);
    t164 = (t163 >> 0);
    t165 = (t164 & 1);
    *((unsigned int *)t160) = t165;
    t166 = *((unsigned int *)t162);
    t167 = (t166 >> 0);
    t168 = (t167 & 1);
    *((unsigned int *)t161) = t168;
    memset(t156, 0, 8);
    t169 = (t160 + 4);
    t170 = *((unsigned int *)t169);
    t171 = (~(t170));
    t172 = *((unsigned int *)t160);
    t173 = (t172 & t171);
    t174 = (t173 & 1U);
    if (t174 != 0)
        goto LAB31;

LAB29:    if (*((unsigned int *)t169) == 0)
        goto LAB28;

LAB30:    t175 = (t156 + 4);
    *((unsigned int *)t156) = 1;
    *((unsigned int *)t175) = 1;

LAB31:    t176 = (t156 + 4);
    t177 = (t160 + 4);
    t178 = *((unsigned int *)t160);
    t179 = (~(t178));
    *((unsigned int *)t156) = t179;
    *((unsigned int *)t176) = 0;
    if (*((unsigned int *)t177) != 0)
        goto LAB33;

LAB32:    t184 = *((unsigned int *)t156);
    *((unsigned int *)t156) = (t184 & 1U);
    t185 = *((unsigned int *)t176);
    *((unsigned int *)t176) = (t185 & 1U);
    t187 = *((unsigned int *)t124);
    t188 = *((unsigned int *)t156);
    t189 = (t187 & t188);
    *((unsigned int *)t186) = t189;
    t190 = (t124 + 4);
    t191 = (t156 + 4);
    t192 = (t186 + 4);
    t193 = *((unsigned int *)t190);
    t194 = *((unsigned int *)t191);
    t195 = (t193 | t194);
    *((unsigned int *)t192) = t195;
    t196 = *((unsigned int *)t192);
    t197 = (t196 != 0);
    if (t197 == 1)
        goto LAB34;

LAB35:
LAB36:    t218 = (t0 + 4256);
    t219 = (t218 + 56U);
    t220 = *((char **)t219);
    t221 = (t220 + 56U);
    t222 = *((char **)t221);
    memset(t222, 0, 8);
    t223 = 1U;
    t224 = t223;
    t225 = (t186 + 4);
    t226 = *((unsigned int *)t186);
    t223 = (t223 & t226);
    t227 = *((unsigned int *)t225);
    t224 = (t224 & t227);
    t228 = (t222 + 4);
    t229 = *((unsigned int *)t222);
    *((unsigned int *)t222) = (t229 | t223);
    t230 = *((unsigned int *)t228);
    *((unsigned int *)t228) = (t230 | t224);
    xsi_driver_vfirst_trans(t218, 0, 0);
    t231 = (t0 + 4144);
    *((int *)t231) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB9:    t26 = *((unsigned int *)t3);
    t27 = *((unsigned int *)t23);
    *((unsigned int *)t3) = (t26 | t27);
    t28 = *((unsigned int *)t22);
    t29 = *((unsigned int *)t23);
    *((unsigned int *)t22) = (t28 | t29);
    goto LAB8;

LAB10:    *((unsigned int *)t32) = 1;
    goto LAB13;

LAB15:    t56 = *((unsigned int *)t32);
    t57 = *((unsigned int *)t53);
    *((unsigned int *)t32) = (t56 | t57);
    t58 = *((unsigned int *)t52);
    t59 = *((unsigned int *)t53);
    *((unsigned int *)t52) = (t58 | t59);
    goto LAB14;

LAB16:    t74 = *((unsigned int *)t62);
    t75 = *((unsigned int *)t68);
    *((unsigned int *)t62) = (t74 | t75);
    t76 = (t3 + 4);
    t77 = (t32 + 4);
    t78 = *((unsigned int *)t3);
    t79 = (~(t78));
    t80 = *((unsigned int *)t76);
    t81 = (~(t80));
    t82 = *((unsigned int *)t32);
    t83 = (~(t82));
    t84 = *((unsigned int *)t77);
    t85 = (~(t84));
    t86 = (t79 & t81);
    t87 = (t83 & t85);
    t88 = (~(t86));
    t89 = (~(t87));
    t90 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t90 & t88);
    t91 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t91 & t89);
    t92 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t92 & t88);
    t93 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t93 & t89);
    goto LAB18;

LAB19:    *((unsigned int *)t94) = 1;
    goto LAB22;

LAB24:    t118 = *((unsigned int *)t94);
    t119 = *((unsigned int *)t115);
    *((unsigned int *)t94) = (t118 | t119);
    t120 = *((unsigned int *)t114);
    t121 = *((unsigned int *)t115);
    *((unsigned int *)t114) = (t120 | t121);
    goto LAB23;

LAB25:    t136 = *((unsigned int *)t124);
    t137 = *((unsigned int *)t130);
    *((unsigned int *)t124) = (t136 | t137);
    t138 = (t62 + 4);
    t139 = (t94 + 4);
    t140 = *((unsigned int *)t62);
    t141 = (~(t140));
    t142 = *((unsigned int *)t138);
    t143 = (~(t142));
    t144 = *((unsigned int *)t94);
    t145 = (~(t144));
    t146 = *((unsigned int *)t139);
    t147 = (~(t146));
    t148 = (t141 & t143);
    t149 = (t145 & t147);
    t150 = (~(t148));
    t151 = (~(t149));
    t152 = *((unsigned int *)t130);
    *((unsigned int *)t130) = (t152 & t150);
    t153 = *((unsigned int *)t130);
    *((unsigned int *)t130) = (t153 & t151);
    t154 = *((unsigned int *)t124);
    *((unsigned int *)t124) = (t154 & t150);
    t155 = *((unsigned int *)t124);
    *((unsigned int *)t124) = (t155 & t151);
    goto LAB27;

LAB28:    *((unsigned int *)t156) = 1;
    goto LAB31;

LAB33:    t180 = *((unsigned int *)t156);
    t181 = *((unsigned int *)t177);
    *((unsigned int *)t156) = (t180 | t181);
    t182 = *((unsigned int *)t176);
    t183 = *((unsigned int *)t177);
    *((unsigned int *)t176) = (t182 | t183);
    goto LAB32;

LAB34:    t198 = *((unsigned int *)t186);
    t199 = *((unsigned int *)t192);
    *((unsigned int *)t186) = (t198 | t199);
    t200 = (t124 + 4);
    t201 = (t156 + 4);
    t202 = *((unsigned int *)t124);
    t203 = (~(t202));
    t204 = *((unsigned int *)t200);
    t205 = (~(t204));
    t206 = *((unsigned int *)t156);
    t207 = (~(t206));
    t208 = *((unsigned int *)t201);
    t209 = (~(t208));
    t210 = (t203 & t205);
    t211 = (t207 & t209);
    t212 = (~(t210));
    t213 = (~(t211));
    t214 = *((unsigned int *)t192);
    *((unsigned int *)t192) = (t214 & t212);
    t215 = *((unsigned int *)t192);
    *((unsigned int *)t192) = (t215 & t213);
    t216 = *((unsigned int *)t186);
    *((unsigned int *)t186) = (t216 & t212);
    t217 = *((unsigned int *)t186);
    *((unsigned int *)t186) = (t217 & t213);
    goto LAB36;

}

static void Cont_10_1(char *t0)
{
    char t6[8];
    char t22[8];
    char t36[8];
    char t43[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    int t67;
    int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;

LAB0:    t1 = (t0 + 3576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(10, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t22, 0, 8);
    t23 = (t6 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t23) != 0)
        goto LAB10;

LAB11:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB12;

LAB13:    memcpy(t43, t22, 8);

LAB14:    t75 = (t0 + 4320);
    t76 = (t75 + 56U);
    t77 = *((char **)t76);
    t78 = (t77 + 56U);
    t79 = *((char **)t78);
    memset(t79, 0, 8);
    t80 = 1U;
    t81 = t80;
    t82 = (t43 + 4);
    t83 = *((unsigned int *)t43);
    t80 = (t80 & t83);
    t84 = *((unsigned int *)t82);
    t81 = (t81 & t84);
    t85 = (t79 + 4);
    t86 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t86 | t80);
    t87 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t87 | t81);
    xsi_driver_vfirst_trans(t75, 0, 0);
    t88 = (t0 + 4160);
    *((int *)t88) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t22) = 1;
    goto LAB11;

LAB10:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB11;

LAB12:    t34 = (t0 + 1528U);
    t35 = *((char **)t34);
    memset(t36, 0, 8);
    t34 = (t35 + 4);
    t37 = *((unsigned int *)t34);
    t38 = (~(t37));
    t39 = *((unsigned int *)t35);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t34) != 0)
        goto LAB17;

LAB18:    t44 = *((unsigned int *)t22);
    t45 = *((unsigned int *)t36);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t47 = (t22 + 4);
    t48 = (t36 + 4);
    t49 = (t43 + 4);
    t50 = *((unsigned int *)t47);
    t51 = *((unsigned int *)t48);
    t52 = (t50 | t51);
    *((unsigned int *)t49) = t52;
    t53 = *((unsigned int *)t49);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB19;

LAB20:
LAB21:    goto LAB14;

LAB15:    *((unsigned int *)t36) = 1;
    goto LAB18;

LAB17:    t42 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB18;

LAB19:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t49);
    *((unsigned int *)t43) = (t55 | t56);
    t57 = (t22 + 4);
    t58 = (t36 + 4);
    t59 = *((unsigned int *)t22);
    t60 = (~(t59));
    t61 = *((unsigned int *)t57);
    t62 = (~(t61));
    t63 = *((unsigned int *)t36);
    t64 = (~(t63));
    t65 = *((unsigned int *)t58);
    t66 = (~(t65));
    t67 = (t60 & t62);
    t68 = (t64 & t66);
    t69 = (~(t67));
    t70 = (~(t68));
    t71 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t71 & t69);
    t72 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t72 & t70);
    t73 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t73 & t69);
    t74 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t74 & t70);
    goto LAB21;

}

static void Always_12_2(char *t0)
{
    char t13[8];
    char t18[8];
    char t25[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;

LAB0:    t1 = (t0 + 3824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12, ng0);
    t2 = (t0 + 4176);
    *((int *)t2) = 1;
    t3 = (t0 + 3856);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(13, ng0);

LAB5:    xsi_set_current_line(15, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(17, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t2) != 0)
        goto LAB11;

LAB12:    t5 = (t13 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = *((unsigned int *)t5);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB13;

LAB14:    memcpy(t25, t13, 8);

LAB15:    t53 = (t25 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t25);
    t57 = (t56 & t55);
    t58 = (t57 != 0);
    if (t58 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB26;

LAB27:
LAB28:
LAB25:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(16, ng0);
    t11 = (t0 + 1688U);
    t12 = *((char **)t11);
    t11 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 4, 0LL);
    goto LAB8;

LAB9:    *((unsigned int *)t13) = 1;
    goto LAB12;

LAB11:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB12;

LAB13:    t11 = (t0 + 1848U);
    t12 = *((char **)t11);
    memset(t18, 0, 8);
    t11 = (t12 + 4);
    t19 = *((unsigned int *)t11);
    t20 = (~(t19));
    t21 = *((unsigned int *)t12);
    t22 = (t21 & t20);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t11) != 0)
        goto LAB18;

LAB19:    t26 = *((unsigned int *)t13);
    t27 = *((unsigned int *)t18);
    t28 = (t26 | t27);
    *((unsigned int *)t25) = t28;
    t29 = (t13 + 4);
    t30 = (t18 + 4);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t29);
    t33 = *((unsigned int *)t30);
    t34 = (t32 | t33);
    *((unsigned int *)t31) = t34;
    t35 = *((unsigned int *)t31);
    t36 = (t35 != 0);
    if (t36 == 1)
        goto LAB20;

LAB21:
LAB22:    goto LAB15;

LAB16:    *((unsigned int *)t18) = 1;
    goto LAB19;

LAB18:    t24 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB19;

LAB20:    t37 = *((unsigned int *)t25);
    t38 = *((unsigned int *)t31);
    *((unsigned int *)t25) = (t37 | t38);
    t39 = (t13 + 4);
    t40 = (t18 + 4);
    t41 = *((unsigned int *)t39);
    t42 = (~(t41));
    t43 = *((unsigned int *)t13);
    t44 = (t43 & t42);
    t45 = *((unsigned int *)t40);
    t46 = (~(t45));
    t47 = *((unsigned int *)t18);
    t48 = (t47 & t46);
    t49 = (~(t44));
    t50 = (~(t48));
    t51 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t51 & t49);
    t52 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t52 & t50);
    goto LAB22;

LAB23:    xsi_set_current_line(18, ng0);
    t59 = ((char*)((ng2)));
    t60 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t60, t59, 0, 0, 4, 0LL);
    goto LAB25;

LAB26:    xsi_set_current_line(20, ng0);
    t4 = (t0 + 2408);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 32, t11, 4, t12, 32);
    t24 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t24, t13, 0, 0, 4, 0LL);
    goto LAB28;

}


extern void work_m_00000000002119813520_2802638043_init()
{
	static char *pe[] = {(void *)Cont_9_0,(void *)Cont_10_1,(void *)Always_12_2};
	xsi_register_didat("work_m_00000000002119813520_2802638043", "isim/timer_isim_beh.exe.sim/work/m_00000000002119813520_2802638043.didat");
	xsi_register_executes(pe);
}
