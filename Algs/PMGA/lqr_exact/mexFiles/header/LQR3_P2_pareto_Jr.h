#ifndef LQR3_P2_pareto_Jr_H
#define LQR3_P2_pareto_Jr_H

double LQR3_P2_pareto_Jr(double* tv, int tdim, double* param, int pdim) {

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

double t4 = r8*t1;
double t5 = r9*t2;
double t6 = r7+t4+t5;
double t7 = exp(t6);
double t8 = t7+1.0;
double t9 = 1.0/t8;
double t10 = 1.0/(t8*t8);
double t11 = t9*1.8E1;
double t42 = t10*9.0;
double t12 = t11-t42+1.0;
double t13 = r2*t1;
double t14 = r3*t2;
double t15 = r1+t13+t14;
double t16 = exp(t15);
double t17 = t16+1.0;
double t18 = 1.0/t17;
double t19 = 1.0/(t17*t17);
double t20 = t18*1.8E1;
double t22 = t19*9.0;
double t21 = t20-t22+1.0;
double t23 = 1.0/t21;
double t24 = t18*t23*2.18E2;
double t25 = t19*(1.0/1.0E1);
double t26 = t25+9.0/1.0E1;
double t27 = t20-1.8E1;
double t28 = 1.0/(t21*t21);
double t29 = t26*t27*t28*1.09E3;
double t30 = t24+t29;
double t31 = fabs(t30);
double t32 = r5*t1;
double t33 = r6*t2;
double t34 = r4+t32+t33;
double t35 = exp(t34);
double t36 = t35+1.0;
double t37 = 1.0/t36;
double t38 = 1.0/(t36*t36);
double t39 = t37*1.8E1;
double t59 = t38*9.0;
double t40 = t39-t59+1.0;
double t60 = 1.0/t40;
double t61 = t37*t60*1.962E3;
double t62 = t38*(9.0/1.0E1);
double t63 = t62+1.0/1.0E1;
double t64 = t39-1.8E1;
double t65 = 1.0/(t40*t40);
double t66 = t63*t64*t65*1.09E3;
double t67 = t61+t66;
double t41 = fabs(t67);
double t43 = 1.0/t12;
double t44 = t9*t43*1.962E3;
double t45 = t10*(9.0/1.0E1);
double t46 = t45+1.0/1.0E1;
double t47 = t11-1.8E1;
double t48 = 1.0/(t12*t12);
double t49 = t46*t47*t48*1.09E3;
double t50 = t44+t49;
double t51 = fabs(t50);
double t85 = t9*t43*2.18E2;
double t86 = t10*(1.0/1.0E1);
double t87 = t86+9.0/1.0E1;
double t88 = t47*t48*t87*1.09E3;
double t89 = t85+t88;
double t52 = fabs(t89);
double t53 = t18*t23*1.962E3;
double t54 = t19*(9.0/1.0E1);
double t55 = t54+1.0/1.0E1;
double t56 = t27*t28*t55*1.09E3;
double t57 = t53+t56;
double t58 = fabs(t57);
double t68 = t41*t41;
double t69 = t37*t60*2.18E2;
double t70 = t38*(1.0/1.0E1);
double t71 = t70+9.0/1.0E1;
double t72 = t64*t65*t71*1.09E3;
double t73 = t69+t72;
double t74 = fabs(t73);
double t75 = t58*t58;
double t76 = t51*t51;
double t77 = t31*t31;
double t78 = t68+t76+t77;
double t79 = 1.0/sqrt(t78);
double t80 = t30*t79;
double t81 = t74*t74;
double t82 = t75+t76+t81;
double t83 = 1.0/sqrt(t82);
double t84 = t67*t79;
double t90 = t52*t52;
double t91 = t68+t75+t90;
double t92 = 1.0/sqrt(t91);
double t144 = t57*t83;
double t93 = t80-t144;
double t142 = t57*t92;
double t94 = t80-t142;
double t95 = t50*t79;
double t145 = t67*t92;
double t96 = t84-t145;
double t150 = t50*t83;
double t97 = t95-t150;
double t143 = t73*t83;
double t98 = t84-t143;
double t149 = t89*t92;
double t99 = t95-t149;
double t100 = r8*t7*t10*t50;
double t101 = r2*t16*t19*t57;
double t102 = r5*t35*t38*t67;
double t103 = r5*t35*t38*t73;
double t104 = t100+t101+t103;
double t105 = r2*t16*t19*t30;
double t106 = t100+t102+t105;
double t107 = r8*t7*t10*t89;
double t108 = t101+t102+t107;
double t109 = r9*t7*t10*t50;
double t110 = r3*t16*t19*t57;
double t111 = r6*t35*t38*t67;
double t112 = r6*t35*t38*t73;
double t113 = t109+t110+t112;
double t114 = r3*t16*t19*t30;
double t115 = t109+t111+t114;
double t116 = r9*t7*t10*t89;
double t117 = t110+t111+t116;
double t118 = t30*t106;
double t119 = t57*t104;
double t120 = t57*t108;
double t121 = t118+t119+t120;
double t122 = t73*t104;
double t123 = t67*t106;
double t124 = t67*t108;
double t125 = t122+t123+t124;
double t126 = t89*t108;
double t127 = t50*t106;
double t128 = t50*t104;
double t129 = t126+t127+t128;
double t130 = t30*t115;
double t131 = t57*t113;
double t132 = t57*t117;
double t133 = t130+t131+t132;
double t134 = t73*t113;
double t135 = t67*t115;
double t136 = t67*t117;
double t137 = t134+t135+t136;
double t138 = t89*t117;
double t139 = t50*t115;
double t140 = t50*t113;
double t141 = t138+t139+t140;
double t146 = t93*t96;
double t147 = t146-t94*t98;
double t148 = fabs(t147);
double t151 = t94*t97;
double t152 = t151-t93*t99;
double t153 = fabs(t152);
double t154 = t96*t97;
double t155 = fabs(-t154+(t84-t143)*(t95-t149));
double t0 = -fabs(-t30*t79*(t154-t98*t99)+t50*t79*t147+t67*t79*t152)*sqrt((r8*t7*t10*t129+r2*t16*t19*t121+r5*t35*t38*t125)*(r9*t7*t10*t141+r3*t16*t19*t133+r6*t35*t38*t137)-(r9*t7*t10*t129+r3*t16*t19*t121+r6*t35*t38*t125)*(r8*t7*t10*t141+r2*t16*t19*t133+r5*t35*t38*t137))*1.0/sqrt(t148*t148+t153*t153+t155*t155);

return t0;
}

#endif