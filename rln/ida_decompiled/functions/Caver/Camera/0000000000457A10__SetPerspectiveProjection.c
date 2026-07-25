/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000457A10
 * Mangled: _ZN5Caver6Camera24SetPerspectiveProjectionEffff
 * Demangled: Caver::Camera::SetPerspectiveProjection(float,float,float,float)
 *
 * Callers: 1
 *   0x0000000000200550  Caver::Camera::SetPerspectiveProjection(float,float,float,float)
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FDAB0  Caver::Matrix4::PerspectiveFov(float,float,float,float)
 *   0x0000000000202F30  Caver::Matrix4::InverseEx(void)
 *
 * Referenced strings: 41
 *   insn=0x0000000000457A28 string=0x0000000000457A2C "T"
 *   insn=0x0000000000457A34 string=0x0000000000457A38 "h"
 *   insn=0x0000000000457A38 string=0x0000000000457A3C "I"
 *   insn=0x0000000000457A44 string=0x0000000000457A48 "*"
 *   insn=0x0000000000457A48 string=0x0000000000457A4C ""
 *   insn=0x0000000000457A58 string=0x0000000000457A5C "h"
 *   insn=0x0000000000457A58 string=0x00000000001FDAB0 "0'"
 *   insn=0x0000000000457A5C string=0x0000000000457A60 "i"
 *   insn=0x0000000000457A68 string=0x0000000000457A6C "\t"
 *   insn=0x0000000000457A6C string=0x0000000000457A70 "J"
 *   insn=0x0000000000457A70 string=0x0000000000457A74 ")"
 *   insn=0x0000000000457A74 string=0x0000000000457A78 ")"
 *   insn=0x0000000000457A78 string=0x0000000000457A7C "+"
 *   insn=0x0000000000457A80 string=0x0000000000457A84 "`"
 *   insn=0x0000000000457A88 string=0x0000000000457A98 "l"
 *   insn=0x0000000000457A94 string=0x0000000000457AD8 "+E@"
 *   insn=0x0000000000457AA0 string=0x0000000000457AA4 "j"
 *   insn=0x0000000000457AA4 string=0x0000000000457AA8 "m"
 *   insn=0x0000000000457AA8 string=0x0000000000457AAC "J"
 *   insn=0x0000000000457AC8 string=0x0000000000457ACC "a"
 *   insn=0x0000000000457AD8 string=0x0000000000457ADC "KE"
 *   insn=0x0000000000457ADC string=0x0000000000457AE0 "_"
 *   insn=0x0000000000457AF0 string=0x0000000000457AF4 "h"
 *   insn=0x0000000000457AF4 string=0x0000000000457AF8 "i"
 *   insn=0x0000000000457B00 string=0x0000000000457B04 "\t"
 *   insn=0x0000000000457B04 string=0x0000000000457B08 "J"
 *   insn=0x0000000000457B08 string=0x0000000000457B0C ")"
 *   insn=0x0000000000457B0C string=0x0000000000457B10 ")"
 *   insn=0x0000000000457B10 string=0x0000000000457B14 "+"
 *   insn=0x0000000000457B1C string=0x0000000000457B20 "i"
 *   insn=0x0000000000457B1C string=0x0000000000457B2C "l"
 *   insn=0x0000000000457B28 string=0x0000000000457B6C "KE@"
 *   insn=0x0000000000457B34 string=0x0000000000457B38 "i"
 *   insn=0x0000000000457B38 string=0x0000000000457B3C "mB"
 *   insn=0x0000000000457B3C string=0x0000000000457B40 ")"
 *   insn=0x0000000000457B5C string=0x0000000000457B60 "a"
 *   insn=0x0000000000457B68 string=0x0000000000457B7C "j."
 *   insn=0x0000000000457B6C string=0x0000000000457B70 "+E"
 *   insn=0x0000000000457B70 string=0x0000000000457B74 "?"
 *   insn=0x0000000000457B7C string=0x0000000000457B80 "i""
 *   insn=0x0000000000457BB0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall Caver::Camera::SetPerspectiveProjection(
        Caver::Camera *this,
        float a2,
        float a3,
        float a4,
        float a5)
{
  char *v10; // x9
  unsigned __int64 v11; // x11
  __int64 *v12; // x9
  char *v13; // x10
  __int64 v14; // x10
  _OWORD *v15; // x13
  __int128 *v16; // x14
  __int64 v17; // x15
  __int128 v18; // q0
  __int128 v19; // q1
  int v20; // t1
  __int64 *result; // x0
  char *v22; // x9
  unsigned __int64 v23; // x11
  char *v24; // x9
  __int64 *v25; // x10
  __int64 v26; // x9
  _OWORD *v27; // x13
  __int128 *v28; // x14
  __int64 v29; // x15
  __int128 v30; // q0
  __int128 v31; // q1
  int v32; // t1
  __int64 v33[2]; // [xsp+8h] [xbp-C8h] BYREF
  __int64 v34; // [xsp+18h] [xbp-B8h] BYREF
  __int64 v35[2]; // [xsp+48h] [xbp-88h] BYREF
  _QWORD v36[7]; // [xsp+58h] [xbp-78h] BYREF

  v36[6] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *((_BYTE *)this + 236) = 0;
  Caver::Matrix4::PerspectiveFov(v33, this, a2, a3, a4, a5);
  v10 = (char *)this + 112;
  if ( (char *)this + 172 > (char *)this + 112 )
    v10 = (char *)this + 172;
  v11 = ((unsigned __int64)&v10[-109LL - (_QWORD)this] >> 2) + 1;
  if ( v11 < 8 )
  {
    v12 = v33;
    v13 = (char *)this + 108;
    do
    {
LABEL_8:
      v20 = *(_DWORD *)v12;
      v12 = (__int64 *)((char *)v12 + 4);
      *(_DWORD *)v13 = v20;
      v13 += 4;
    }
    while ( v13 < (char *)this + 172 );
    goto LABEL_9;
  }
  v14 = 4 * (v11 & 0x7FFFFFFFFFFFFFF8LL);
  v12 = (__int64 *)((char *)v33 + v14);
  v15 = (_OWORD *)((char *)this + 124);
  v13 = (char *)this + v14 + 108;
  v16 = (__int128 *)&v34;
  v17 = v11 & 0x7FFFFFFFFFFFFFF8LL;
  do
  {
    v18 = *(v16 - 1);
    v19 = *v16;
    v17 -= 8;
    v16 += 2;
    *(v15 - 1) = v18;
    *v15 = v19;
    v15 += 2;
  }
  while ( v17 );
  if ( v11 != (v11 & 0x7FFFFFFFFFFFFFF8LL) )
    goto LABEL_8;
LABEL_9:
  result = Caver::Matrix4::InverseEx(v35, (Caver::Camera *)((char *)this + 108));
  v22 = (char *)this + 260;
  if ( (char *)this + 320 > (char *)this + 260 )
    v22 = (char *)this + 320;
  v23 = ((unsigned __int64)&v22[-257LL - (_QWORD)this] >> 2) + 1;
  if ( v23 < 8 )
  {
    v24 = (char *)this + 256;
    v25 = v35;
    do
    {
LABEL_16:
      v32 = *(_DWORD *)v25;
      v25 = (__int64 *)((char *)v25 + 4);
      *(_DWORD *)v24 = v32;
      v24 += 4;
    }
    while ( v24 < (char *)this + 320 );
    goto LABEL_17;
  }
  v26 = 4 * (v23 & 0x7FFFFFFFFFFFFFF8LL);
  v25 = (__int64 *)((char *)v35 + v26);
  v27 = (_OWORD *)((char *)this + 272);
  v24 = (char *)this + v26 + 256;
  v28 = (__int128 *)v36;
  v29 = v23 & 0x7FFFFFFFFFFFFFF8LL;
  do
  {
    v30 = *(v28 - 1);
    v31 = *v28;
    v29 -= 8;
    v28 += 2;
    *(v27 - 1) = v30;
    *v27 = v31;
    v27 += 2;
  }
  while ( v29 );
  if ( v23 != (v23 & 0x7FFFFFFFFFFFFFF8LL) )
    goto LABEL_16;
LABEL_17:
  *((float *)this + 60) = a3;
  *((float *)this + 61) = a2;
  *((float *)this + 62) = a4;
  *((float *)this + 63) = a5;
  return result;
}

