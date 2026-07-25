/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AA4C4
 * Mangled: _ZN5Caver24ParticleEmitterComponent10SetEmitterERKN5boost10shared_ptrINS_15ParticleEmitterEEE
 * Demangled: Caver::ParticleEmitterComponent::SetEmitter(boost::shared_ptr<Caver::ParticleEmitter> const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FCE40  Caver::ParticleEmitterComponent::PrepareEmitter(boost::shared_ptr<Caver::ParticleEmitter> const&)
 *
 * Referenced strings: 19
 *   insn=0x00000000002AA4CC string=0x00000000002AA4D0 ") @"
 *   insn=0x00000000002AA4D8 string=0x00000000002AA4DC "\n"
 *   insn=0x00000000002AA4D8 string=0x00000000002AA4E8 "t"
 *   insn=0x00000000002AA4DC string=0x00000000002AA4E0 "J"
 *   insn=0x00000000002AA4E0 string=0x00000000002AA4E4 "\n"
 *   insn=0x00000000002AA4E8 string=0x00000000002AA4EC "i"
 *   insn=0x00000000002AA4F0 string=0x00000000002AA524 "h"
 *   insn=0x00000000002AA4F4 string=0x00000000002AA4F8 ""
 *   insn=0x00000000002AA4FC string=0x00000000002AA500 "!"
 *   insn=0x00000000002AA508 string=0x00000000002AA50C "\t@"
 *   insn=0x00000000002AA514 string=0x00000000002AA518 ""
 *   insn=0x00000000002AA51C string=0x00000000002AA520 "@"
 *   insn=0x00000000002AA528 string=0x00000000002AA52C "ab"
 *   insn=0x00000000002AA52C string=0x00000000002AA530 "("
 *   insn=0x00000000002AA530 string=0x00000000002AA534 "h"
 *   insn=0x00000000002AA540 string=0x00000000002AA544 "?J"
 *   insn=0x00000000002AA544 string=0x00000000001FCE40 "0'"
 *   insn=0x00000000002AA54C string=0x00000000002AA550 "@"
 *   insn=0x00000000002AA554 string=0x00000000002AA558 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ParticleEmitterComponent::SetEmitter(__int64 a1, __int64 *a2)
{
  __int64 v2; // x8
  __int64 v3; // x9
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x8

  v3 = *a2;
  v2 = a2[1];
  if ( v2 )
    ++*(_QWORD *)(v2 + 8);
  v5 = *(_QWORD **)(a1 + 352);
  *(_QWORD *)(a1 + 344) = v3;
  *(_QWORD *)(a1 + 352) = v2;
  if ( !v5
    || (v6 = v5[1] - 1LL, (v5[1] = v6) != 0)
    || ((*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5), v7 = v5[2] - 1LL, (v5[2] = v7) != 0) )
  {
    if ( !*(_BYTE *)(a1 + 260) )
      return;
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
    if ( !*(_BYTE *)(a1 + 260) )
      return;
  }
  if ( *(_QWORD *)(a1 + 344) )
    Caver::ParticleEmitterComponent::PrepareEmitter();
}

