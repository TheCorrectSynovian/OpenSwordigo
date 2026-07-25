/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000327A3C
 * Mangled: _ZN5Caver5Proto32StaticMonsterControllerComponent4SwapEPS1_
 * Demangled: Caver::Proto::StaticMonsterControllerComponent::Swap(Caver::Proto::StaticMonsterControllerComponent*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F62D0  .__stack_chk_fail
 *
 * Referenced strings: 35
 *   insn=0x0000000000327A44 string=0x0000000000327A48 "H"
 *   insn=0x0000000000327A48 string=0x0000000000327A4C "\t"
 *   insn=0x0000000000327A4C string=0x0000000000327A50 "?"
 *   insn=0x0000000000327A58 string=0x0000000000327A5C ")"
 *   insn=0x0000000000327A58 string=0x0000000000327AD8 ""
 *   insn=0x0000000000327A5C string=0x0000000000327A60 "\n"
 *   insn=0x0000000000327A60 string=0x0000000000327A64 "\t"
 *   insn=0x0000000000327A64 string=0x0000000000327A68 "*"
 *   insn=0x0000000000327A6C string=0x0000000000327A70 "\t(A"
 *   insn=0x0000000000327A74 string=0x0000000000327A78 "+@"
 *   insn=0x0000000000327A78 string=0x0000000000327A7C ""
 *   insn=0x0000000000327A7C string=0x0000000000327A80 "+"
 *   insn=0x0000000000327A80 string=0x0000000000327A84 ""
 *   insn=0x0000000000327A84 string=0x0000000000327A88 " "
 *   insn=0x0000000000327A8C string=0x0000000000327A90 ")("
 *   insn=0x0000000000327A94 string=0x0000000000327A98 "*"
 *   insn=0x0000000000327A98 string=0x0000000000327A9C " "
 *   insn=0x0000000000327A9C string=0x0000000000327AA0 "@"
 *   insn=0x0000000000327AA4 string=0x0000000000327AA8 ""
 *   insn=0x0000000000327AA8 string=0x0000000000327AAC "@"
 *   insn=0x0000000000327AAC string=0x0000000000327AB0 "?"
 *   insn=0x0000000000327AAC string=0x0000000000327AF4 ""
 *   insn=0x0000000000327AB4 string=0x0000000000327AB8 ")0@"
 *   insn=0x0000000000327AB4 string=0x0000000000327B04 "*"
 *   insn=0x0000000000327AB8 string=0x0000000000327ABC "\n0@"
 *   insn=0x0000000000327ABC string=0x0000000000327AC0 "\t0"
 *   insn=0x0000000000327AC0 string=0x0000000000327AC4 "*0"
 *   insn=0x0000000000327AC4 string=0x0000000000327AC8 ")@"
 *   insn=0x0000000000327AC8 string=0x0000000000327ACC "\n@"
 *   insn=0x0000000000327ACC string=0x0000000000327AD0 "\t"
 *   insn=0x0000000000327AD0 string=0x0000000000327AD4 "*"
 *   insn=0x0000000000327AE0 string=0x0000000000327AE4 "A"
 *   insn=0x0000000000327AF4 string=0x0000000000327AF8 ")@"
 *   insn=0x0000000000327AF8 string=0x0000000000327AFC "?"
 *   insn=0x0000000000327B0C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::StaticMonsterControllerComponent::Swap(
        __int64 this,
        Caver::Proto::StaticMonsterControllerComponent *a2)
{
  int v2; // w10
  __int64 v3; // x9
  __int64 v4; // x10
  __int64 v5; // x11
  int v6; // w10
  int v7; // w10
  __int128 v8; // [xsp+0h] [xbp-20h]

  _ReadStatusReg(TPIDR_EL0);
  if ( a2 != (Caver::Proto::StaticMonsterControllerComponent *)this )
  {
    v2 = *(_DWORD *)(this + 12);
    *(_DWORD *)(this + 12) = *((_DWORD *)a2 + 3);
    *((_DWORD *)a2 + 3) = v2;
    v3 = *(_QWORD *)(this + 16);
    v4 = *(_QWORD *)(this + 24);
    v8 = *(_OWORD *)(this + 32);
    *(_QWORD *)(this + 16) = *((_QWORD *)a2 + 2);
    *(_QWORD *)(this + 24) = *((_QWORD *)a2 + 3);
    *(_OWORD *)(this + 32) = *((_OWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = v3;
    *((_QWORD *)a2 + 3) = v4;
    *((_OWORD *)a2 + 2) = v8;
    v5 = this + 32;
    if ( *(Caver::Proto::StaticMonsterControllerComponent **)(this + 16) == (Caver::Proto::StaticMonsterControllerComponent *)((char *)a2 + 32) )
    {
      *(_QWORD *)(this + 16) = v5;
      if ( *((_QWORD *)a2 + 2) != v5 )
        goto LABEL_4;
    }
    else if ( v3 != v5 )
    {
LABEL_4:
      v6 = *(_DWORD *)(this + 48);
      *(_DWORD *)(this + 48) = *((_DWORD *)a2 + 12);
      *((_DWORD *)a2 + 12) = v6;
      v7 = *(_DWORD *)(this + 8);
      *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
      *((_DWORD *)a2 + 2) = v7;
      return this;
    }
    *((_QWORD *)a2 + 2) = (char *)a2 + 32;
    goto LABEL_4;
  }
  return this;
}

