/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031F1EC
 * Mangled: _ZN5Caver5Proto24ParticleEmitterComponent4SwapEPS1_
 * Demangled: Caver::Proto::ParticleEmitterComponent::Swap(Caver::Proto::ParticleEmitterComponent*)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7EE0  google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
 *
 * Referenced strings: 35
 *   insn=0x000000000031F1FC string=0x000000000031F200 "U"
 *   insn=0x000000000031F214 string=0x000000000031F218 "`"
 *   insn=0x000000000031F218 string=0x000000000031F21C "h"
 *   insn=0x000000000031F224 string=0x000000000031F228 "i"
 *   insn=0x000000000031F228 string=0x000000000031F22C "h"
 *   insn=0x000000000031F234 string=0x000000000031F238 "i"
 *   insn=0x000000000031F238 string=0x000000000031F23C "hR@9"
 *   insn=0x000000000031F244 string=0x000000000031F248 "iR"
 *   insn=0x000000000031F248 string=0x000000000031F24C "h"
 *   insn=0x000000000031F254 string=0x000000000031F258 "i"
 *   insn=0x000000000031F258 string=0x000000000031F25C "hr@9"
 *   insn=0x000000000031F264 string=0x000000000031F268 "ir"
 *   insn=0x000000000031F274 string=0x000000000031F278 "j"
 *   insn=0x000000000031F27C string=0x000000000031F280 "j"
 *   insn=0x000000000031F284 string=0x000000000031F288 "`"
 *   insn=0x000000000031F28C string=0x000000000031F290 "h&"
 *   insn=0x000000000031F294 string=0x000000000031F298 "i"
 *   insn=0x000000000031F298 string=0x000000000031F29C "`"
 *   insn=0x000000000031F2A0 string=0x000000000031F2A4 "_"
 *   insn=0x000000000031F2B0 string=0x000000000031F2B4 " "
 *   insn=0x000000000031F2B4 string=0x000000000031F338 "i"
 *   insn=0x000000000031F2B8 string=0x000000000031F2BC "a"
 *   insn=0x000000000031F2BC string=0x000000000031F2C0 "c"
 *   insn=0x000000000031F2C0 string=0x000000000031F2C4 "h>@"
 *   insn=0x000000000031F2C0 string=0x00000000001F7EE0 "0'"
 *   insn=0x000000000031F2CC string=0x000000000031F2D0 "i>"
 *   insn=0x000000000031F2D0 string=0x000000000031F2D4 "hB@"
 *   insn=0x000000000031F2DC string=0x000000000031F2E0 "iB"
 *   insn=0x000000000031F2E0 string=0x000000000031F2E4 "h"
 *   insn=0x000000000031F2EC string=0x000000000031F2F0 "i"
 *   insn=0x000000000031F2F0 string=0x000000000031F2F4 "h\n@"
 *   insn=0x000000000031F2FC string=0x000000000031F300 "i\n"
 *   insn=0x000000000031F328 string=0x000000000031F32C "h"
 *   insn=0x000000000031F330 string=0x000000000031F334 "!"
 *   insn=0x000000000031F340 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ParticleEmitterComponent::Swap(
        __int64 this,
        Caver::Proto::ParticleEmitterComponent *a2)
{
  __int64 v3; // x20
  int v4; // w9
  int v5; // w9
  int v6; // w9
  __int64 v7; // x8
  __int64 v8; // x9
  __int64 v9; // x10
  __int64 v10; // x9
  __int64 v11; // x9
  __int128 v12; // [xsp+0h] [xbp-40h]

  v3 = this;
  _ReadStatusReg(TPIDR_EL0);
  if ( a2 != (Caver::Proto::ParticleEmitterComponent *)this )
  {
    v4 = *(_DWORD *)(this + 12);
    *(_DWORD *)(this + 12) = *((_DWORD *)a2 + 3);
    *((_DWORD *)a2 + 3) = v4;
    v5 = *(_DWORD *)(this + 16);
    *(_DWORD *)(this + 16) = *((_DWORD *)a2 + 4);
    *((_DWORD *)a2 + 4) = v5;
    LOBYTE(v5) = *(_BYTE *)(this + 20);
    *(_BYTE *)(this + 20) = *((_BYTE *)a2 + 20);
    *((_BYTE *)a2 + 20) = v5;
    v6 = *(_DWORD *)(this + 24);
    *(_DWORD *)(this + 24) = *((_DWORD *)a2 + 6);
    *((_DWORD *)a2 + 6) = v6;
    LOBYTE(v6) = *(_BYTE *)(this + 28);
    *(_BYTE *)(this + 28) = *((_BYTE *)a2 + 28);
    *((_BYTE *)a2 + 28) = v6;
    v7 = *(_QWORD *)(this + 32);
    v8 = *(_QWORD *)(this + 40);
    v12 = *(_OWORD *)(this + 48);
    *(_QWORD *)(this + 32) = *((_QWORD *)a2 + 4);
    *(_QWORD *)(this + 40) = *((_QWORD *)a2 + 5);
    *(_OWORD *)(this + 48) = *((_OWORD *)a2 + 3);
    *((_QWORD *)a2 + 4) = v7;
    *((_QWORD *)a2 + 5) = v8;
    *((_OWORD *)a2 + 3) = v12;
    v9 = this + 48;
    if ( *(Caver::Proto::ParticleEmitterComponent **)(this + 32) == (Caver::Proto::ParticleEmitterComponent *)((char *)a2 + 48) )
    {
      *(_QWORD *)(this + 32) = v9;
      if ( *((_QWORD *)a2 + 4) != v9 )
        goto LABEL_4;
    }
    else if ( v7 != v9 )
    {
LABEL_4:
      this = google::protobuf::internal::RepeatedPtrFieldBase::Swap(
               (google::protobuf::internal::RepeatedPtrFieldBase *)(this + 64),
               (Caver::Proto::ParticleEmitterComponent *)((char *)a2 + 64));
      v10 = *(_QWORD *)(v3 + 120);
      *(_QWORD *)(v3 + 120) = *((_QWORD *)a2 + 15);
      *((_QWORD *)a2 + 15) = v10;
      v11 = *(_QWORD *)(v3 + 128);
      *(_QWORD *)(v3 + 128) = *((_QWORD *)a2 + 16);
      *((_QWORD *)a2 + 16) = v11;
      LODWORD(v11) = *(_DWORD *)(v3 + 136);
      *(_DWORD *)(v3 + 136) = *((_DWORD *)a2 + 34);
      *((_DWORD *)a2 + 34) = v11;
      LODWORD(v11) = *(_DWORD *)(v3 + 8);
      *(_DWORD *)(v3 + 8) = *((_DWORD *)a2 + 2);
      *((_DWORD *)a2 + 2) = v11;
      return this;
    }
    *((_QWORD *)a2 + 4) = (char *)a2 + 48;
    goto LABEL_4;
  }
  return this;
}

