/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048B36C
 * Mangled: _ZN5Caver16RenderingContext17SetIdentityMatrixEv
 * Demangled: Caver::RenderingContext::SetIdentityMatrix(void)
 *
 * Callers: 1
 *   0x00000000001F7210  Caver::RenderingContext::SetIdentityMatrix(void)
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7F90  .glLoadIdentity
 *
 * Referenced strings: 26
 *   insn=0x000000000048B378 string=0x000000000048B37C "S"
 *   insn=0x000000000048B37C string=0x000000000048B380 "h"
 *   insn=0x000000000048B384 string=0x000000000048B388 ")eB"
 *   insn=0x000000000048B390 string=0x000000000048B394 ""
 *   insn=0x000000000048B394 string=0x000000000048B398 "!"
 *   insn=0x000000000048B398 string=0x000000000048B39C "#\t@"
 *   insn=0x000000000048B39C string=0x000000000048B3A0 "\t "
 *   insn=0x000000000048B3A4 string=0x000000000048B3A8 "J"
 *   insn=0x000000000048B3A8 string=0x000000000048B3AC "\t"
 *   insn=0x000000000048B3AC string=0x000000000048B3B0 ")"
 *   insn=0x000000000048B3B0 string=0x000000000048B3B4 ")"
 *   insn=0x000000000048B3B4 string=0x000000000048B3B8 "+"
 *   insn=0x000000000048B3CC string=0x000000000048B3D0 "\t"
 *   insn=0x000000000048B3CC string=0x000000000048B3DC "l"
 *   insn=0x000000000048B3D8 string=0x000000000048B41C "KE@"
 *   insn=0x000000000048B3E4 string=0x000000000048B3E8 "\t"
 *   insn=0x000000000048B3E8 string=0x000000000048B3EC "P"
 *   insn=0x000000000048B3EC string=0x000000000048B3F0 ")"
 *   insn=0x000000000048B40C string=0x000000000048B410 "a"
 *   insn=0x000000000048B418 string=0x000000000048B42C ""
 *   insn=0x000000000048B41C string=0x000000000048B420 "+E"
 *   insn=0x000000000048B420 string=0x000000000048B424 "?"
 *   insn=0x000000000048B434 string=0x000000000048B438 ""
 *   insn=0x000000000048B43C string=0x000000000048B444 "h"
 *   insn=0x000000000048B440 string=0x00000000001F7F90 "0'"
 *   insn=0x000000000048B464 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::RenderingContext::SetIdentityMatrix(__int64 this)
{
  __int64 v1; // x9
  unsigned __int64 v2; // x11
  _DWORD *v3; // x9
  __int128 *v4; // x10
  __int64 v5; // x9
  _OWORD *v6; // x13
  __int128 *v7; // x14
  __int64 v8; // x15
  __int128 v9; // q0
  __int128 v10; // q1
  int v11; // t1
  __int128 v12; // [xsp+0h] [xbp-60h] BYREF
  _OWORD v13[3]; // [xsp+10h] [xbp-50h] BYREF
  __int64 v14; // [xsp+48h] [xbp-18h]

  v14 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v1 = this + 136;
  if ( this + 196 > (unsigned __int64)(this + 136) )
    v1 = this + 196;
  v2 = ((unsigned __int64)(v1 + -133 - this) >> 2) + 1;
  v13[1] = xmmword_6E9F10;
  v13[2] = xmmword_6E9F20;
  v12 = Caver::Matrix4::identityMatrix;
  v13[0] = xmmword_6E9F00;
  if ( v2 >= 8 )
  {
    v5 = 4 * (v2 & 0x7FFFFFFFFFFFFFF8LL);
    v4 = (_OWORD *)((char *)&v13[-1] + v5);
    v6 = (_OWORD *)(this + 148);
    v3 = (_DWORD *)(this + v5 + 132);
    v7 = v13;
    v8 = v2 & 0x7FFFFFFFFFFFFFF8LL;
    do
    {
      v9 = *(v7 - 1);
      v10 = *v7;
      v8 -= 8;
      v7 += 2;
      *(v6 - 1) = v9;
      *v6 = v10;
      v6 += 2;
    }
    while ( v8 );
    if ( v2 == (v2 & 0x7FFFFFFFFFFFFFF8LL) )
      goto LABEL_9;
  }
  else
  {
    v3 = (_DWORD *)(this + 132);
    v4 = &v12;
  }
  do
  {
    v11 = *(_DWORD *)v4;
    v4 = (__int128 *)((char *)v4 + 4);
    *v3++ = v11;
  }
  while ( (unsigned __int64)v3 < this + 196 );
LABEL_9:
  if ( !*(_DWORD *)this )
    return glLoadIdentity();
  *(_BYTE *)(this + 128) = 1;
  return this;
}

