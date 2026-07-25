/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B112C
 * Mangled: _ZNK5Caver10Quaternion6LengthEv
 * Demangled: Caver::Quaternion::Length(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FD530  .sqrtf
 *
 * Referenced strings: 7
 *   insn=0x00000000004B1134 string=0x00000000004B1138 "!!"
 *   insn=0x00000000004B1138 string=0x00000000004B113C "B""
 *   insn=0x00000000004B1144 string=0x00000000004B1148 "a#"
 *   insn=0x00000000004B114C string=0x00000000004B1150 " "
 *   insn=0x00000000004B1160 string=0x00000000004B1164 " "
 *   insn=0x00000000004B1168 string=0x00000000001FD530 "0'"
 *   insn=0x00000000004B1170 string=0x00000000004B1174 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::Quaternion::Length(Caver::Quaternion *this)
{
  return 1.0
       / sqrtf(
           (float)((float)((float)(*(float *)this * *(float *)this)
                         + (float)(*((float *)this + 1) * *((float *)this + 1)))
                 + (float)(*((float *)this + 2) * *((float *)this + 2)))
         + (float)(*((float *)this + 3) * *((float *)this + 3)));
}

