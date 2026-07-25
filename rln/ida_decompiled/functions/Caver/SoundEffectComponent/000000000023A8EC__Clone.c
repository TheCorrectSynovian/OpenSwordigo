/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023A8EC
 * Mangled: _ZNK5Caver20SoundEffectComponent5CloneEv
 * Demangled: Caver::SoundEffectComponent::Clone(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F55E0  operator new(ulong)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 20
 *   insn=0x000000000023A900 string=0x000000000023A904 "7"
 *   insn=0x000000000023A904 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000023A914 string=0x000000000023A918 "H%"
 *   insn=0x000000000023A918 string=0x000000000023A91C ""
 *   insn=0x000000000023A91C string=0x000000000023A920 "J%"
 *   insn=0x000000000023A920 string=0x000000000023A924 "JiB"
 *   insn=0x000000000023A928 string=0x000000000023A92C "a"
 *   insn=0x000000000023A92C string=0x000000000023A930 ""
 *   insn=0x000000000023A930 string=0x000000000023A934 "L"
 *   insn=0x000000000023A934 string=0x000000000023A938 "?"
 *   insn=0x000000000023A938 string=0x000000000023A93C "KA"
 *   insn=0x000000000023A944 string=0x000000000023A948 "I"
 *   insn=0x000000000023A94C string=0x000000000023A950 "KA"
 *   insn=0x000000000023A954 string=0x000000000023A958 " "
 *   insn=0x000000000023A97C string=0x000000000023A980 "h"@"
 *   insn=0x000000000023A980 string=0x000000000023A984 "a"
 *   insn=0x000000000023A988 string=0x000000000023A98C "G"
 *   insn=0x000000000023A98C string=0x000000000023A990 "a"
 *   insn=0x000000000023A994 string=0x000000000023A998 "D"
 *   insn=0x000000000023A998 string=0x000000000023A99C "hB@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SoundEffectComponent::Clone(Caver::SoundEffectComponent *this)
{
  __int64 v2; // x20
  __int128 v3; // q0
  __int64 result; // x0

  v2 = operator new(0x98u);
  *(_DWORD *)(v2 + 8) = 0;
  *(_QWORD *)(v2 + 32) = 0;
  *(_QWORD *)(v2 + 40) = 0;
  *(_BYTE *)(v2 + 48) = 0;
  *(_QWORD *)(v2 + 56) = &byte_6FD2F8;
  *(_QWORD *)(v2 + 72) = 0;
  *(_QWORD *)&v3 = &off_6BB8E0;
  *(_QWORD *)(v2 + 88) = v2 + 72;
  *(_QWORD *)(v2 + 96) = v2 + 72;
  *(_QWORD *)v2 = off_6BB7C0;
  *((_QWORD *)&v3 + 1) = &off_6BB920;
  *(_QWORD *)(v2 + 104) = 0;
  *(_QWORD *)(v2 + 112) = &off_6BB940;
  *(_QWORD *)(v2 + 80) = 0;
  *(_OWORD *)(v2 + 16) = v3;
  *(_QWORD *)(v2 + 120) = &byte_6FD2F8;
  *(_DWORD *)(v2 + 128) = 1065353216;
  *(_QWORD *)(v2 + 132) = 0;
  *(_DWORD *)(v2 + 148) = 0;
  *(_QWORD *)(v2 + 140) = 0;
  *(_DWORD *)(v2 + 32) = *((_DWORD *)this + 8);
  sub_56A6A8(v2 + 56);
  sub_56A6A8(v2 + 120);
  result = v2;
  *(_QWORD *)(v2 + 128) = *((_QWORD *)this + 16);
  return result;
}

