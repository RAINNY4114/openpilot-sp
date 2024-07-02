#pragma once
#include "rednose/helpers/ekf.h"
extern "C" {
void live_update_4(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_9(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_10(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_12(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_35(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_32(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_13(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_14(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_33(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_H(double *in_vec, double *out_4560678933589658828);
void live_err_fun(double *nom_x, double *delta_x, double *out_471793651499693523);
void live_inv_err_fun(double *nom_x, double *true_x, double *out_1719726747839638382);
void live_H_mod_fun(double *state, double *out_1250948241143158783);
void live_f_fun(double *state, double dt, double *out_1791973218091364340);
void live_F_fun(double *state, double dt, double *out_2062045344691758704);
void live_h_4(double *state, double *unused, double *out_2790997712369079794);
void live_H_4(double *state, double *unused, double *out_6397982063377780991);
void live_h_9(double *state, double *unused, double *out_1291120831611768004);
void live_H_9(double *state, double *unused, double *out_4761543075067323155);
void live_h_10(double *state, double *unused, double *out_2666382030110761537);
void live_H_10(double *state, double *unused, double *out_4566025595306240);
void live_h_12(double *state, double *unused, double *out_3397890896216398141);
void live_H_12(double *state, double *unused, double *out_16723686335047995);
void live_h_35(double *state, double *unused, double *out_984671968806845659);
void live_H_35(double *state, double *unused, double *out_4283742569974795121);
void live_h_32(double *state, double *unused, double *out_8414330623719703372);
void live_H_32(double *state, double *unused, double *out_5545944883078479297);
void live_h_13(double *state, double *unused, double *out_1291540423108301105);
void live_H_13(double *state, double *unused, double *out_1730188185352971532);
void live_h_14(double *state, double *unused, double *out_1291120831611768004);
void live_H_14(double *state, double *unused, double *out_4761543075067323155);
void live_h_33(double *state, double *unused, double *out_1041815788004938797);
void live_H_33(double *state, double *unused, double *out_5912843723298919308);
void live_predict(double *in_x, double *in_P, double *in_Q, double dt);
}