/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002404F0
 * Mangled: _ZNK5Caver18TransformComponent5CloneEv
 * Demangled: Caver::TransformComponent::Clone(void)
 *
 * Callers: 1
 *   0x00000000002404B8  Caver::TransformComponent::~TransformComponent()
 *
 * Callees: 3
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 40
 *   insn=0x0000000000240500 string=0x0000000000240504 "U"
 *   insn=0x0000000000240514 string=0x0000000000240518 "2"
 *   insn=0x0000000000240518 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000240520 string=0x0000000000240524 "(%"
 *   insn=0x0000000000240524 string=0x0000000000240528 "+%"
 *   insn=0x0000000000240528 string=0x000000000024052C ""
 *   insn=0x000000000024052C string=0x0000000000240530 "k"
 *   insn=0x0000000000240530 string=0x0000000000240534 ")%"
 *   insn=0x0000000000240534 string=0x0000000000240538 ")eB"
 *   insn=0x000000000024053C string=0x0000000000240540 "l"
 *   insn=0x0000000000240544 string=0x0000000000240548 " "
 *   insn=0x0000000000240548 string=0x000000000024054C ""@"
 *   insn=0x000000000024054C string=0x0000000000240550 "i"
 *   insn=0x0000000000240550 string=0x0000000000240554 "a"
 *   insn=0x0000000000240554 string=0x0000000000240558 "$"
 *   insn=0x0000000000240558 string=0x000000000024055C "i"
 *   insn=0x000000000024055C string=0x0000000000240560 "l"
 *   insn=0x0000000000240560 string=0x0000000000240564 "kA"
 *   insn=0x0000000000240564 string=0x0000000000240568 ""
 *   insn=0x0000000000240570 string=0x0000000000240574 "_"
 *   insn=0x0000000000240574 string=0x0000000000240578 "k"
 *   insn=0x000000000024057C string=0x0000000000240580 "?"
 *   insn=0x0000000000240580 string=0x0000000000240584 "k"
 *   insn=0x0000000000240584 string=0x0000000000240588 ","
 *   insn=0x000000000024058C string=0x0000000000240590 "j~"
 *   insn=0x0000000000240594 string=0x0000000000240598 "J"
 *   insn=0x0000000000240598 string=0x000000000024059C "K"
 *   insn=0x000000000024059C string=0x00000000002405A0 "h"
 *   insn=0x00000000002405A8 string=0x00000000002405AC "d"
 *   insn=0x00000000002405B4 string=0x00000000002405B8 "b"
 *   insn=0x00000000002405B8 string=0x00000000002405C4 "l"
 *   insn=0x00000000002405C0 string=0x0000000000240600 "KE@"
 *   insn=0x00000000002405C8 string=0x00000000002405CC "m"
 *   insn=0x00000000002405D0 string=0x00000000002405D4 ""
 *   insn=0x00000000002405F0 string=0x00000000002405F4 "a"
 *   insn=0x0000000000240600 string=0x0000000000240604 "E"
 *   insn=0x0000000000240614 string=0x0000000000240618 "h""
 *   insn=0x0000000000240618 string=0x000000000024061C "#"
 *   insn=0x000000000024062C string=0x0000000000240648 """
 *   insn=0x0000000000240648 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::TransformComponent::Clone(Caver::TransformComponent *this)
{
  __int64 v2; // x19
  __int128 v3; // q0
  __int128 v4; // q1
  __int128 v5; // q2
  __int128 v6; // q3
  __int128 v7; // q4
  __int64 v8; // x12
  __int64 v9; // x10
  unsigned __int64 v10; // x11
  _DWORD *v11; // x8
  __int128 *v12; // x10
  __int64 v13; // x15
  _OWORD *v14; // x13
  __int128 *v15; // x14
  __int64 v16; // x15
  __int128 v17; // q0
  __int128 v18; // q1
  int v19; // t1
  __int128 v21; // [xsp+0h] [xbp-70h] BYREF
  _OWORD v22[3]; // [xsp+10h] [xbp-60h] BYREF
  __int64 v23; // [xsp+48h] [xbp-28h]

  v23 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = operator new(0xB0u);
  *(_DWORD *)(v2 + 8) = 0;
  *(_QWORD *)&v7 = &off_6BC398;
  v3 = xmmword_6E9F10;
  v4 = xmmword_6E9F20;
  v5 = Caver::Matrix4::identityMatrix;
  v6 = xmmword_6E9F00;
  *((_QWORD *)&v7 + 1) = &off_6BC3D8;
  v8 = v2 + 116;
  *(_QWORD *)(v2 + 56) = &byte_6FD2F8;
  *(_QWORD *)(v2 + 32) = 0;
  *(_QWORD *)(v2 + 40) = 0;
  *(_BYTE *)(v2 + 48) = 0;
  *(_QWORD *)(v2 + 72) = 0;
  v9 = v2 + 72;
  *(_QWORD *)v2 = off_6BC280;
  if ( v2 + 176 > (unsigned __int64)(v2 + 116) )
    v8 = v2 + 176;
  *(_QWORD *)(v2 + 80) = 0;
  *(_QWORD *)(v2 + 88) = v9;
  *(_QWORD *)(v2 + 96) = v9;
  *(_QWORD *)(v2 + 104) = 0;
  v10 = ((unsigned __int64)(v8 + -113 - v2) >> 2) + 1;
  v11 = (_DWORD *)(v2 + 112);
  *(_OWORD *)(v2 + 16) = v7;
  v22[1] = v3;
  v22[2] = v4;
  v21 = v5;
  v22[0] = v6;
  if ( v10 < 8 )
  {
    v12 = &v21;
    do
    {
LABEL_8:
      v19 = *(_DWORD *)v12;
      v12 = (__int128 *)((char *)v12 + 4);
      *v11++ = v19;
    }
    while ( (unsigned __int64)v11 < v2 + 176 );
    goto LABEL_9;
  }
  v13 = 4 * (v10 & 0x7FFFFFFFFFFFFFF8LL);
  v14 = (_OWORD *)(v2 + 128);
  v12 = (_OWORD *)((char *)&v22[-1] + v13);
  v11 = (_DWORD *)((char *)v11 + v13);
  v15 = v22;
  v16 = v10 & 0x7FFFFFFFFFFFFFF8LL;
  do
  {
    v17 = *(v15 - 1);
    v18 = *v15;
    v16 -= 8;
    v15 += 2;
    *(v14 - 1) = v17;
    *v14 = v18;
    v14 += 2;
  }
  while ( v16 );
  if ( v10 != (v10 & 0x7FFFFFFFFFFFFFF8LL) )
    goto LABEL_8;
LABEL_9:
  *(_DWORD *)(v2 + 32) = *((_DWORD *)this + 8);
  sub_56A6A8(v2 + 56);
  return v2;
}

