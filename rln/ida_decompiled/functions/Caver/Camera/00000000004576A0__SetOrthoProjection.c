/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004576A0
 * Mangled: _ZN5Caver6Camera18SetOrthoProjectionEffff
 * Demangled: Caver::Camera::SetOrthoProjection(float,float,float,float)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000200F10  Caver::Matrix4::Ortho(float,float,float,float,float,float)
 *   0x0000000000202F30  Caver::Matrix4::InverseEx(void)
 *
 * Referenced strings: 47
 *   insn=0x00000000004576B8 string=0x00000000004576BC "T"
 *   insn=0x00000000004576C0 string=0x00000000004576C4 "h"
 *   insn=0x00000000004576C4 string=0x00000000004576C8 "I"
 *   insn=0x00000000004576C8 string=0x00000000004576CC "*"
 *   insn=0x00000000004576CC string=0x00000000004576D0 ""
 *   insn=0x00000000004576E4 string=0x00000000004576E8 "`\t#"
 *   insn=0x00000000004576E8 string=0x00000000004576EC "A\t""
 *   insn=0x00000000004576EC string=0x00000000004576F0 "b\t""
 *   insn=0x00000000004576F0 string=0x00000000004576F4 "h"
 *   insn=0x00000000004576F4 string=0x00000000004576F8 "C\t#"
 *   insn=0x00000000004576FC string=0x0000000000457700 "$"
 *   insn=0x000000000045770C string=0x0000000000457710 "h"
 *   insn=0x0000000000457710 string=0x0000000000457714 "i"
 *   insn=0x000000000045771C string=0x0000000000457720 "\t"
 *   insn=0x0000000000457720 string=0x0000000000457724 "J"
 *   insn=0x0000000000457724 string=0x0000000000457728 ")"
 *   insn=0x0000000000457728 string=0x000000000045772C ")"
 *   insn=0x000000000045772C string=0x0000000000457730 "+"
 *   insn=0x0000000000457734 string=0x0000000000457738 "`"
 *   insn=0x000000000045773C string=0x000000000045774C "l"
 *   insn=0x0000000000457748 string=0x000000000045778C "+E@"
 *   insn=0x0000000000457754 string=0x0000000000457758 "j"
 *   insn=0x0000000000457758 string=0x000000000045775C "m"
 *   insn=0x000000000045775C string=0x0000000000457760 "J"
 *   insn=0x000000000045777C string=0x0000000000457780 "a"
 *   insn=0x000000000045778C string=0x0000000000457790 "KE"
 *   insn=0x0000000000457790 string=0x0000000000457794 "_"
 *   insn=0x00000000004577A4 string=0x00000000004577A8 "h"
 *   insn=0x00000000004577A8 string=0x00000000004577AC "i"
 *   insn=0x00000000004577B4 string=0x00000000004577B8 "\t"
 *   insn=0x00000000004577B8 string=0x00000000004577BC "J"
 *   insn=0x00000000004577BC string=0x00000000004577C0 ")"
 *   insn=0x00000000004577C0 string=0x00000000004577C4 ")"
 *   insn=0x00000000004577C4 string=0x00000000004577C8 "+"
 *   insn=0x00000000004577D0 string=0x00000000004577D4 "i"
 *   insn=0x00000000004577D0 string=0x00000000004577E0 "l"
 *   insn=0x00000000004577DC string=0x0000000000457820 "KE@"
 *   insn=0x00000000004577E8 string=0x00000000004577EC "i"
 *   insn=0x00000000004577EC string=0x00000000004577F0 "mB"
 *   insn=0x00000000004577F0 string=0x00000000004577F4 ")"
 *   insn=0x0000000000457810 string=0x0000000000457814 "a"
 *   insn=0x000000000045781C string=0x0000000000457830 "`"
 *   insn=0x0000000000457820 string=0x0000000000457824 "+E"
 *   insn=0x0000000000457824 string=0x0000000000457828 "?"
 *   insn=0x0000000000457834 string=0x0000000000457838 "i""
 *   insn=0x0000000000457838 string=0x000000000045783C "`"
 *   insn=0x000000000045786C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall Caver::Camera::SetOrthoProjection(Caver::Camera *this, float a2, float a3, float a4, float a5)
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
  *((_BYTE *)this + 236) = 1;
  Caver::Matrix4::Ortho(v33, this, a2 * -0.5, a3 * 0.5, a2 * 0.5, a3 * -0.5, a4, a5);
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
  *((_DWORD *)this + 61) = 0;
  *((float *)this + 62) = a4;
  *((float *)this + 63) = a5;
  *((float *)this + 60) = a2 / a3;
  return result;
}

