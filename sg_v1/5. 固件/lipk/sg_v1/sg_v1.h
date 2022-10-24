#pragma once

#include "quantum.h"

#define LAYOUT( \
        K00,   K01,   K02,   K03,   K04,   K05,   K06,   K07,   K08,   K09,   K0A,   K0B,   K0C,   K0D,   K0E,   K0F, \
        K10,   K11,   K12,   K13,   K14,   K15,   K16,   K17,   K18,   K19,   K1A,   K1B,   K1C,          K1E,   K1F, \
        K20,          K22,   K23,   K24,   K25,   K26,   K27,   K28,   K29,   K2A,   K2B,   K2C,   K2D,   K2E,   K2F, \
        K30,          K32,   K33,   K34,   K35,   K36,   K37,   K38,   K39,   K3A,   K3B,   K3C,   K3D,          K3F, \
               K41,   K42,   K43,   K44,   K45,   K46,   K47,   K48,   K49,   K4A,   K4B,          K4D,   K4E,   K4F, \
        K50,   K51,   K52,   K53,                        K57,                        K5B,   K5C,   K5D,   K5E,   K5F \
) \
{ \
    {   K00,   K01,   K02,   K03,   K04,   K05,   K06,   K07,   K08,   K09,   K0A,   K0B,   K0C,   K0D,   K0E,   K0F }, \
    {   K10,   K11,   K12,   K13,   K14,   K15,   K16,   K17,   K18,   K19,   K1A,   K1B,   K1C, KC_NO,   K1E,   K1F }, \
    {   K20, KC_NO,   K22,   K23,   K24,   K25,   K26,   K27,   K28,   K29,   K2A,   K2B,   K2C,   K2D,   K2E,   K2F }, \
    {   K30, KC_NO,   K32,   K33,   K34,   K35,   K36,   K37,   K38,   K39,   K3A,   K3B,   K3C,   K3D, KC_NO,   K3F }, \
    { KC_NO,   K41,   K42,   K43,   K44,   K45,   K46,   K47,   K48,   K49,   K4A,   K4B, KC_NO,   K4D,   K4E,   K4F }, \
    {   K50,   K51,   K52,   K53, KC_NO, KC_NO,  KC_NO,  K57, KC_NO, KC_NO, KC_NO,   K5B,   K5C,   K5D,   K5E,   K5F }, \
}
