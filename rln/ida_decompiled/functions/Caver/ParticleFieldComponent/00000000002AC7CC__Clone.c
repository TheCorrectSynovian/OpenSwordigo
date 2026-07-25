/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AC7CC
 * Mangled: _ZNK5Caver22ParticleFieldComponent5CloneEv
 * Demangled: Caver::ParticleFieldComponent::Clone(void)
 *
 * Callers: 1
 *   0x00000000002AC794  Caver::ParticleFieldComponent::~ParticleFieldComponent()
 *
 * Callees: 2
 *   0x00000000001F55E0  operator new(ulong)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 11
 *   insn=0x00000000002AC7E0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002AC7F4 string=0x00000000002AC7F8 ""
 *   insn=0x00000000002AC7FC string=0x00000000002AC800 "J"
 *   insn=0x00000000002AC804 string=0x00000000002AC808 "a"
 *   insn=0x00000000002AC808 string=0x00000000002AC80C ""
 *   insn=0x00000000002AC80C string=0x00000000002AC810 "H"
 *   insn=0x00000000002AC814 string=0x00000000002AC818 "H"
 *   insn=0x00000000002AC818 string=0x00000000002AC81C "KA"
 *   insn=0x00000000002AC81C string=0x00000000002AC820 "?"
 *   insn=0x00000000002AC834 string=0x00000000002AC838 "h"@"
 *   insn=0x00000000002AC838 string=0x00000000002AC83C "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ParticleFieldComponent::Clone(Caver::ParticleFieldComponent *this)
{
  __int64 v2; // x20
  __int128 v3; // q0

  v2 = operator new(0x78u);
  *(_DWORD *)(v2 + 8) = 0;
  *(_BYTE *)(v2 + 48) = 0;
  *(_QWORD *)(v2 + 32) = 0;
  *(_QWORD *)(v2 + 40) = 0;
  *(_QWORD *)(v2 + 56) = &byte_6FD2F8;
  *(_QWORD *)&v3 = &off_6C3908;
  *(_QWORD *)(v2 + 72) = 0;
  *((_QWORD *)&v3 + 1) = &off_6C3948;
  *(_QWORD *)v2 = off_6C37F0;
  *(_QWORD *)(v2 + 96) = v2 + 72;
  *(_QWORD *)(v2 + 104) = 0;
  *(_QWORD *)(v2 + 80) = 0;
  *(_QWORD *)(v2 + 88) = v2 + 72;
  *(_OWORD *)(v2 + 16) = v3;
  *(_DWORD *)(v2 + 32) = *((_DWORD *)this + 8);
  sub_56A6A8(v2 + 56);
  return v2;
}

