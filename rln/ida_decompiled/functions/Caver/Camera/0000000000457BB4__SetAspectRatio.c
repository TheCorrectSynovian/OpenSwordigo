/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000457BB4
 * Mangled: _ZN5Caver6Camera14SetAspectRatioEf
 * Demangled: Caver::Camera::SetAspectRatio(float)
 *
 * Callers: 1
 *   0x00000000001F5DC0  Caver::Camera::SetAspectRatio(float)
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FDAB0  Caver::Matrix4::PerspectiveFov(float,float,float,float)
 *   0x0000000000202F30  Caver::Matrix4::InverseEx(void)
 *
 * Referenced strings: 50
 *   insn=0x0000000000457BCC string=0x0000000000457BD0 "T"
 *   insn=0x0000000000457BD8 string=0x0000000000457BDC ""
 *   insn=0x0000000000457BE0 string=0x0000000000457BE4 "h"
 *   insn=0x0000000000457BE8 string=0x0000000000457BEC "h\t"
 *   insn=0x0000000000457BE8 string=0x0000000000457C60 "h"
 *   insn=0x0000000000457BEC string=0x0000000000457BF0 "i"
 *   insn=0x0000000000457BEC string=0x0000000000583734 "o"
 *   insn=0x0000000000457BF4 string=0x0000000000457BF8 " ! "
 *   insn=0x0000000000457BF8 string=0x0000000000457BFC "-"
 *   insn=0x0000000000457BFC string=0x0000000000457C00 "j._-"
 *   insn=0x0000000000457C04 string=0x0000000000457C08 " "
 *   insn=0x0000000000457C0C string=0x0000000000457C10 "B"
 *   insn=0x0000000000457C10 string=0x0000000000457C14 "c"
 *   insn=0x0000000000457C20 string=0x0000000000457C24 "h"
 *   insn=0x0000000000457C20 string=0x00000000001FDAB0 "0'"
 *   insn=0x0000000000457C24 string=0x0000000000457C28 "i"
 *   insn=0x0000000000457C30 string=0x0000000000457C34 "\t"
 *   insn=0x0000000000457C34 string=0x0000000000457C38 "J"
 *   insn=0x0000000000457C38 string=0x0000000000457C3C ")"
 *   insn=0x0000000000457C3C string=0x0000000000457C40 ")"
 *   insn=0x0000000000457C40 string=0x0000000000457C44 "+"
 *   insn=0x0000000000457C48 string=0x0000000000457C4C "`"
 *   insn=0x0000000000457C50 string=0x0000000000457C90 "l"
 *   insn=0x0000000000457C5C string=0x0000000000457CD0 "+E@"
 *   insn=0x0000000000457C70 string=0x0000000000457D80 "Ty"
 *   insn=0x0000000000457C98 string=0x0000000000457C9C "j"
 *   insn=0x0000000000457C9C string=0x0000000000457CA0 "m"
 *   insn=0x0000000000457CA0 string=0x0000000000457CA4 "J"
 *   insn=0x0000000000457CC0 string=0x0000000000457CC4 "a"
 *   insn=0x0000000000457CD0 string=0x0000000000457CD4 "KE"
 *   insn=0x0000000000457CD4 string=0x0000000000457CD8 "_"
 *   insn=0x0000000000457CE8 string=0x0000000000457CEC "h"
 *   insn=0x0000000000457CEC string=0x0000000000457CF0 "i"
 *   insn=0x0000000000457CF8 string=0x0000000000457CFC "\t"
 *   insn=0x0000000000457CFC string=0x0000000000457D00 "J"
 *   insn=0x0000000000457D00 string=0x0000000000457D04 ")"
 *   insn=0x0000000000457D04 string=0x0000000000457D08 ")"
 *   insn=0x0000000000457D08 string=0x0000000000457D0C "+"
 *   insn=0x0000000000457D14 string=0x0000000000457D18 "i"
 *   insn=0x0000000000457D14 string=0x0000000000457D24 "l"
 *   insn=0x0000000000457D20 string=0x0000000000457D64 "KE@"
 *   insn=0x0000000000457D2C string=0x0000000000457D30 "i"
 *   insn=0x0000000000457D30 string=0x0000000000457D34 "mB"
 *   insn=0x0000000000457D34 string=0x0000000000457D38 ")"
 *   insn=0x0000000000457D54 string=0x0000000000457D58 "a"
 *   insn=0x0000000000457D60 string=0x0000000000457D74 "h&"
 *   insn=0x0000000000457D64 string=0x0000000000457D68 "+E"
 *   insn=0x0000000000457D68 string=0x0000000000457D6C "?"
 *   insn=0x0000000000457D74 string=0x0000000000457D78 "j."
 *   insn=0x0000000000457D80 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall Caver::Camera::SetAspectRatio(__int64 *this, float a2)
{
  __int64 *v2; // x19
  float v4; // s9
  float v5; // s10
  float v6; // s11
  __int64 *v7; // x9
  unsigned __int64 v8; // x11
  __int64 *v9; // x9
  _DWORD *v10; // x10
  __int64 v11; // x10
  _OWORD *v12; // x13
  __int128 *v13; // x14
  __int64 v14; // x15
  __int128 v15; // q0
  __int128 v16; // q1
  int v17; // t1
  __int64 *v18; // x9
  unsigned __int64 v19; // x11
  _DWORD *v20; // x9
  __int64 *v21; // x10
  __int64 v22; // x9
  _OWORD *v23; // x13
  __int128 *v24; // x14
  __int64 v25; // x15
  __int128 v26; // q0
  __int128 v27; // q1
  int v28; // t1
  __int64 v29[2]; // [xsp+8h] [xbp-C8h] BYREF
  __int64 v30; // [xsp+18h] [xbp-B8h] BYREF
  __int64 v31[2]; // [xsp+48h] [xbp-88h] BYREF
  _QWORD v32[7]; // [xsp+58h] [xbp-78h] BYREF

  v2 = this;
  v32[6] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *((_BYTE *)this + 236) || (v4 = *((float *)this + 61), v4 <= 0.001) )
  {
    *((float *)this + 60) = a2;
    return this;
  }
  v5 = *((float *)this + 62);
  v6 = *((float *)this + 63);
  *((_BYTE *)this + 236) = 0;
  Caver::Matrix4::PerspectiveFov(v29, (Caver::Matrix4 *)this, v4, a2, v5, v6);
  v7 = v2 + 14;
  if ( (__int64 *)((char *)v2 + 172) > v2 + 14 )
    v7 = (__int64 *)((char *)v2 + 172);
  v8 = (((unsigned __int64)v7 - 109 - (unsigned __int64)v2) >> 2) + 1;
  if ( v8 < 8 )
  {
    v9 = v29;
    v10 = (_DWORD *)v2 + 27;
    do
    {
LABEL_11:
      v17 = *(_DWORD *)v9;
      v9 = (__int64 *)((char *)v9 + 4);
      *v10++ = v17;
    }
    while ( v10 < (_DWORD *)v2 + 43 );
    goto LABEL_12;
  }
  v11 = 4 * (v8 & 0x7FFFFFFFFFFFFFF8LL);
  v9 = (__int64 *)((char *)v29 + v11);
  v12 = (_OWORD *)((char *)v2 + 124);
  v10 = (_DWORD *)((char *)v2 + v11 + 108);
  v13 = (__int128 *)&v30;
  v14 = v8 & 0x7FFFFFFFFFFFFFF8LL;
  do
  {
    v15 = *(v13 - 1);
    v16 = *v13;
    v14 -= 8;
    v13 += 2;
    *(v12 - 1) = v15;
    *v12 = v16;
    v12 += 2;
  }
  while ( v14 );
  if ( v8 != (v8 & 0x7FFFFFFFFFFFFFF8LL) )
    goto LABEL_11;
LABEL_12:
  this = Caver::Matrix4::InverseEx(v31, (Caver::Matrix4 *)((char *)v2 + 108));
  v18 = (__int64 *)((char *)v2 + 260);
  if ( v2 + 40 > (__int64 *)((char *)v2 + 260) )
    v18 = v2 + 40;
  v19 = (((unsigned __int64)v18 - 257 - (unsigned __int64)v2) >> 2) + 1;
  if ( v19 >= 8 )
  {
    v22 = 4 * (v19 & 0x7FFFFFFFFFFFFFF8LL);
    v21 = (__int64 *)((char *)v31 + v22);
    v23 = v2 + 34;
    v20 = (_DWORD *)((char *)v2 + v22 + 256);
    v24 = (__int128 *)v32;
    v25 = v19 & 0x7FFFFFFFFFFFFFF8LL;
    do
    {
      v26 = *(v24 - 1);
      v27 = *v24;
      v25 -= 8;
      v24 += 2;
      *(v23 - 1) = v26;
      *v23 = v27;
      v23 += 2;
    }
    while ( v25 );
    if ( v19 == (v19 & 0x7FFFFFFFFFFFFFF8LL) )
      goto LABEL_20;
  }
  else
  {
    v20 = v2 + 32;
    v21 = v31;
  }
  do
  {
    v28 = *(_DWORD *)v21;
    v21 = (__int64 *)((char *)v21 + 4);
    *v20++ = v28;
  }
  while ( v20 < (_DWORD *)v2 + 80 );
LABEL_20:
  *((float *)v2 + 60) = a2;
  *((float *)v2 + 61) = v4;
  *((float *)v2 + 62) = v5;
  *((float *)v2 + 63) = v6;
  return this;
}

