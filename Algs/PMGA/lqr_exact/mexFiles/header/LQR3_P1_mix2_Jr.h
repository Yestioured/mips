#ifndef LQR3_P1_mix2_Jr_H
#define LQR3_P1_mix2_Jr_H

double LQR3_P1_mix2_Jr(double* tv, int tdim, double* param, int pdim) {

double t1 = tv[0], t2 = tv[1];

double r1 = param[0];
double r2 = param[1];
double r3 = param[2];
double r4 = param[3];
double r5 = param[4];
double r6 = param[5];
double r7 = param[6];
double r8 = param[7];
double r9 = param[8];

double t4 = r4-3.338299811;
double t5 = t1*t4;
double t6 = r5*t2;
double t7 = t1*t1;
double t8 = t2*t2;
double t11 = r4*t7;
double t12 = r5*t8;
double t13 = r6*t1*t2;
double t9 = t5+t6-t11-t12-t13+1.151035476;
double t10 = exp(t9);
double t14 = t10+1.0;
double t15 = 1.0/t14;
double t16 = 1.0/(t14*t14);
double t17 = t15*1.8E1;
double t19 = t16*9.0;
double t18 = t17-t19+1.0;
double t20 = 1.0/t18;
double t21 = t15*t20*2.18E2;
double t22 = t16*(1.0/1.0E1);
double t23 = t22+9.0/1.0E1;
double t24 = t17-1.8E1;
double t25 = 1.0/(t18*t18);
double t26 = t23*t24*t25*1.09E3;
double t27 = t21+t26;
double t28 = r7+3.338299811;
double t29 = t1*t28;
double t30 = r8+3.338299811;
double t31 = t2*t30;
double t34 = r7*t7;
double t35 = r8*t8;
double t36 = r9*t1*t2;
double t32 = t29+t31-t34-t35-t36-2.187264336;
double t33 = exp(t32);
double t37 = t33+1.0;
double t38 = 1.0/t37;
double t39 = 1.0/(t37*t37);
double t40 = t38*1.8E1;
double t63 = t39*9.0;
double t41 = t40-t63+1.0;
double t42 = r2-3.338299811;
double t43 = t2*t42;
double t44 = r1*t1;
double t47 = r1*t7;
double t48 = r2*t8;
double t49 = r3*t1*t2;
double t45 = t43+t44-t47-t48-t49+1.151035476;
double t46 = exp(t45);
double t50 = t46+1.0;
double t51 = 1.0/t50;
double t52 = 1.0/(t50*t50);
double t53 = t51*1.8E1;
double t68 = t52*9.0;
double t54 = t53-t68+1.0;
double t55 = t15*t20*1.962E3;
double t56 = t16*(9.0/1.0E1);
double t57 = t56+1.0/1.0E1;
double t58 = t24*t25*t57*1.09E3;
double t59 = t55+t58;
double t60 = r4*t1*2.0;
double t61 = r6*t2;
double t62 = -r4+t60+t61+3.338299811;
double t64 = 1.0/t41;
double t65 = t40-1.8E1;
double t66 = 1.0/(t41*t41);
double t87 = r7*t1*2.0;
double t88 = r9*t2;
double t67 = r7-t87-t88+3.338299811;
double t69 = 1.0/t54;
double t70 = t51*t69*1.962E3;
double t71 = t52*(9.0/1.0E1);
double t72 = t71+1.0/1.0E1;
double t73 = t53-1.8E1;
double t74 = 1.0/(t54*t54);
double t75 = t72*t73*t74*1.09E3;
double t76 = t70+t75;
double t77 = r1*t1*2.0;
double t78 = r3*t2;
double t79 = -r1+t77+t78;
double t80 = t46*t52*t76*t79;
double t81 = t10*t16*t59*t62;
double t82 = t38*t64*1.962E3;
double t83 = t39*(9.0/1.0E1);
double t84 = t83+1.0/1.0E1;
double t85 = t65*t66*t84*1.09E3;
double t86 = t82+t85;
double t89 = t38*t64*2.18E2;
double t90 = t39*(1.0/1.0E1);
double t91 = t90+9.0/1.0E1;
double t92 = t65*t66*t91*1.09E3;
double t93 = t89+t92;
double t105 = t33*t39*t67*t93;
double t94 = t80+t81-t105;
double t95 = t10*t16*t27*t62;
double t97 = t33*t39*t67*t86;
double t96 = t80+t95-t97;
double t98 = t51*t69*2.18E2;
double t99 = t52*(1.0/1.0E1);
double t100 = t99+9.0/1.0E1;
double t101 = t73*t74*t100*1.09E3;
double t102 = t98+t101;
double t103 = t46*t52*t79*t102;
double t104 = t81-t97+t103;
double t106 = r2*t2*2.0;
double t107 = r3*t1;
double t108 = -r2+t106+t107+3.338299811;
double t115 = r8*t2*2.0;
double t116 = r9*t1;
double t109 = r8-t115-t116+3.338299811;
double t110 = r5*t2*2.0;
double t111 = r6*t1;
double t112 = -r5+t110+t111;
double t113 = t10*t16*t59*t112;
double t114 = t46*t52*t76*t108;
double t123 = t33*t39*t93*t109;
double t117 = t113+t114-t123;
double t118 = t46*t52*t102*t108;
double t120 = t33*t39*t86*t109;
double t119 = t113+t118-t120;
double t121 = t10*t16*t27*t112;
double t122 = t114-t120+t121;
double t124 = t102*t104;
double t125 = t76*t96;
double t126 = t76*t94;
double t127 = t124+t125+t126;
double t128 = t93*t94;
double t129 = t86*t96;
double t130 = t86*t104;
double t131 = t128+t129+t130;
double t132 = t27*t96;
double t133 = t59*t94;
double t134 = t27*t122;
double t135 = t59*t119;
double t136 = t59*t117;
double t137 = t134+t135+t136;
double t138 = t93*t117;
double t139 = t86*t119;
double t140 = t86*t122;
double t141 = t138+t139+t140;
double t142 = t102*t119;
double t143 = t76*t117;
double t145 = t64*t84*1.09E3;
double t148 = t20*t57*1.09E3;
double t150 = t69*t100*1.09E3;
double t151 = t145+t148+t150+1.9E1;
double t144 = fabs(t151/AUp1-1.0);
double t147 = t69*t72*1.09E3;
double t153 = t20*t23*1.09E3;
double t154 = t145+t147+t153+1.9E1;
double t146 = fabs(t154/AUp2-1.0);
double t156 = t64*t91*1.09E3;
double t157 = t147+t148+t156+1.9E1;
double t149 = fabs(t157/AUp3-1.0);
double t152 = fabs(t151/Up1-1.0);
double t155 = fabs(t154/Up2-1.0);
double t158 = fabs(t157/Up3-1.0);
double t159 = t59*t104;
double t160 = t132+t133+t159;
double t161 = t76*t122;
double t162 = t142+t143+t161;
double t0 = -(beta2-(beta1*(t144*t144+t146*t146+t149*t149))/(t152*t152+t155*t155+t158*t158))*sqrt((t10*t16*t62*t160-t33*t39*t67*t131+t46*t52*t79*t127)*(t10*t16*t112*t137-t33*t39*t109*t141+t46*t52*t108*t162)-(t10*t16*t62*t137-t33*t39*t67*t141+t46*t52*t79*t162)*(t10*t16*t112*t160-t33*t39*t109*t131+t46*t52*t108*t127));

return t0;
}

#endif