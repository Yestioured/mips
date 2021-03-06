#ifndef LQR3_P2_pareto_Djr6_H
#define LQR3_P2_pareto_Djr6_H

double LQR3_P2_pareto_Djr6(double* tv, int tdim, double* param, int pdim) {

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
double t238 = t94*t98;
double t147 = t146-t238;
double t148 = fabs(t147);
double t151 = t94*t97;
double t240 = t93*t99;
double t152 = t151-t240;
double t153 = fabs(t152);
double t154 = t96*t97;
double t242 = (t84-t143)*(t95-t149);
double t243 = -t154+t242;
double t155 = fabs(t243);
double t156 = r3*t16*t19*t121;
double t157 = r6*t35*t38*t125;
double t158 = r9*t7*t10*t129;
double t159 = t156+t157+t158;
double t160 = 1.0/(t36*t36*t36);
double t162 = t2*t35*t38*1.8E1;
double t163 = t2*t35*t160*1.8E1;
double t161 = t162-t163;
double t164 = 1.0/(t40*t40*t40);
double t165 = t2*t35*t38*t60*1.962E3;
double t166 = t2*t35*t38*t63*t65*1.962E4;
double t167 = t2*t35*t64*t65*t160*1.962E3;
double t173 = t37*t65*t161*1.962E3;
double t174 = t63*t64*t161*t164*2.18E3;
double t168 = t165+t166+t167-t173-t174;
double t169 = t2*t35*t38*t60*2.18E2;
double t170 = t2*t35*t38*t65*t71*1.962E4;
double t171 = t2*t35*t64*t65*t160*2.18E2;
double t181 = t37*t65*t161*2.18E2;
double t182 = t64*t71*t161*t164*2.18E3;
double t172 = t169+t170+t171-t181-t182;
double t175 = r4*2.0;
double t176 = r5*t1*2.0;
double t177 = r6*t2*2.0;
double t178 = t175+t176+t177;
double t179 = exp(t178);
double t180 = t35*t38*t73;
double t183 = r6*t2*t35*t38*t73;
double t190 = r6*t35*t38*t172;
double t191 = r6*t2*t73*t160*t179*2.0;
double t184 = t180+t183-t190-t191;
double t185 = t35*t38*t67;
double t186 = r6*t2*t35*t38*t67;
double t188 = r6*t35*t38*t168;
double t189 = r6*t2*t67*t160*t179*2.0;
double t187 = t185+t186-t188-t189;
double t192 = r3*t16*t19*t133;
double t193 = r6*t35*t38*t137;
double t194 = r9*t7*t10*t141;
double t195 = t192+t193+t194;
double t196 = r5*t35*t38*t168;
double t197 = r5*t2*t67*t160*t179*2.0;
double t202 = r5*t2*t35*t38*t67;
double t198 = t196+t197-t202;
double t199 = r5*t35*t38*t172;
double t200 = r5*t2*t73*t160*t179*2.0;
double t203 = r5*t2*t35*t38*t73;
double t201 = t199+t200-t203;
double t204 = r2*t16*t19*t121;
double t205 = r5*t35*t38*t125;
double t206 = r8*t7*t10*t129;
double t207 = t204+t205+t206;
double t208 = t113*t172;
double t209 = t115*t168;
double t210 = t117*t168;
double t211 = t208+t209+t210-t67*t187*2.0-t73*t184;
double t212 = t57*t184;
double t213 = t30*t187;
double t214 = t57*t187;
double t215 = t212+t213+t214;
double t216 = t50*t184;
double t217 = t89*t187;
double t218 = t50*t187;
double t219 = t216+t217+t218;
double t220 = r2*t16*t19*t133;
double t221 = r5*t35*t38*t137;
double t222 = r8*t7*t10*t141;
double t223 = t220+t221+t222;
double t224 = t57*t201;
double t225 = t30*t198;
double t226 = t57*t198;
double t227 = t224+t225+t226;
double t228 = t50*t201;
double t229 = t89*t198;
double t230 = t50*t198;
double t231 = t228+t229+t230;
double t232 = t73*t201;
double t233 = t67*t198*2.0;
double t234 = t104*t172;
double t235 = t106*t168;
double t236 = t108*t168;
double t237 = t232+t233+t234+t235+t236;
double t239 = t50*t79*t147;
double t241 = t67*t79*t152;
double t244 = t195*t207;
double t268 = t159*t223;
double t245 = t244-t268;
double t246 = t148*t148;
double t247 = t153*t153;
double t248 = t155*t155;
double t249 = t246+t247+t248;
double t250 = (t73/fabs(t73));
double t251 = 1.0/pow(t82,3.0/2.0);
double t252 = (t67/fabs(t67));
double t253 = 1.0/pow(t78,3.0/2.0);
double t254 = t41*t50*t168*t252*t253;
double t255 = t30*t41*t168*t252*t253;
double t256 = 1.0/pow(t91,3.0/2.0);
double t271 = t57*t74*t172*t250*t251;
double t257 = t255-t271;
double t272 = t41*t57*t168*t252*t256;
double t258 = t255-t272;
double t259 = t79*t168;
double t276 = t50*t74*t172*t250*t251;
double t260 = t254-t276;
double t261 = t73*t74*t172*t250*t251;
double t263 = t41*t67*t168*t252*t253;
double t274 = t83*t172;
double t262 = t259+t261-t263-t274;
double t264 = t41*t67*t168*t252*t256;
double t278 = t41*t89*t168*t252*t256;
double t265 = t254-t278;
double t266 = t30*t79*t243;
double t267 = t239+t241+t266;
double t269 = sqrt(t245);
double t270 = 1.0/sqrt(t249);
double t273 = t258*(t84-t143);
double t280 = t92*t168;
double t275 = t259-t263+t264-t280;
double t277 = t96*t260;
double t279 = t99*t262;
double t281 = t277+t279-t98*t265-t97*t275;
double t282 = t94*t260;
double t283 = t97*t258;
double t284 = t282+t283-t99*t257-t93*t265;
double t0 = 1.0/pow(t249,3.0/2.0)*t269*fabs(t267)*(t148*((t147/fabs(t147)))*(t273+t93*(t259+t264-t92*t168-t41*t67*t168*t252*t253)-t96*t257-t94*t262)*2.0-t153*t284*((t152/fabs(t152)))*2.0+t155*t281*((t243/fabs(t243)))*2.0)*(-1.0/2.0)-1.0/sqrt(t245)*t270*fabs(t239+t241-t30*t79*(t154-t98*t99))*(t207*(t35*t38*t137+r9*t7*t10*t219+r3*t16*t19*t215-r6*t35*t38*t211+r6*t2*t35*t38*t137-r6*t2*t137*t160*t179*2.0)+t223*(-t35*t38*t125+r9*t7*t10*t231+r3*t16*t19*t227+r6*t35*t38*t237-r6*t2*t35*t38*t125+r6*t2*t125*t160*t179*2.0)-t159*(r8*t7*t10*t219+r2*t16*t19*t215-r5*t35*t38*t211+r5*t2*t35*t38*t137-r5*t2*t137*t160*t179*2.0)-t195*(r8*t7*t10*t231+r2*t16*t19*t227+r5*t35*t38*t237-r5*t2*t35*t38*t125+r5*t2*t125*t160*t179*2.0))*(1.0/2.0)-t269*t270*((t267/fabs(t267)))*(-t30*t79*t281-t79*t152*t168+t67*t79*t284-t50*t79*(t273-t96*t257-t94*t262+t93*t275)+t41*t50*t147*t168*t252*t253+t41*t67*t152*t168*t252*t253+t30*t41*t168*t243*t252*t253);

return t0;
}

#endif