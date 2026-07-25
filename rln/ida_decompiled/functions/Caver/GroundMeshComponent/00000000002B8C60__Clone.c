/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B8C60
 * Mangled: _ZNK5Caver19GroundMeshComponent5CloneEv
 * Demangled: Caver::GroundMeshComponent::Clone(void)
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000002018A0  Caver::Proto::Component::Component(void)
 *   0x0000000000202380  Caver::Proto::Component::~Component()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 23
 *   insn=0x00000000002B8C70 string=0x00000000002B8C74 "U"
 *   insn=0x00000000002B8C84 string=0x00000000002B8C88 "V"
 *   insn=0x00000000002B8C88 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002B8C98 string=0x00000000002B8C9C "h!"
 *   insn=0x00000000002B8C9C string=0x00000000002B8CA0 ""
 *   insn=0x00000000002B8CA4 string=0x00000000002B8CA8 "i!"
 *   insn=0x00000000002B8CA8 string=0x00000000002B8CAC ")=B"
 *   insn=0x00000000002B8CAC string=0x00000000002B8CB0 "a"
 *   insn=0x00000000002B8CB0 string=0x00000000002B8CB4 "h"
 *   insn=0x00000000002B8CB8 string=0x00000000002B8CBC "("
 *   insn=0x00000000002B8CC0 string=0x00000000002B8CC4 "("
 *   insn=0x00000000002B8CD0 string=0x00000000002B8CD4 "`"
 *   insn=0x00000000002B8CD8 string=0x00000000002B8CDC ")A"
 *   insn=0x00000000002B8CE0 string=0x00000000002B8CE4 "i"
 *   insn=0x00000000002B8CF4 string=0x00000000002B8CF8 "`."
 *   insn=0x00000000002B8CFC string=0x00000000002B8D00 "h"
 *   insn=0x00000000002B8D00 string=0x00000000002B8D04 "`B"
 *   insn=0x00000000002B8D0C string=0x00000000002B8D10 ""
 *   insn=0x00000000002B8D1C string=0x00000000002B8D20 "h"
 *   insn=0x00000000002B8D20 string=0x00000000002B8D24 ""
 *   insn=0x00000000002B8D48 string=0x00000000002B8D64 "["
 *   insn=0x00000000002B8D64 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002B8D78 string=0x00000000002B8D7C "tU"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GroundMeshComponent::Clone(Caver::GroundMeshComponent *this)
{
  __int64 v2; // x19
  __int128 v3; // q0
  _BYTE v10[96]; // [xsp+8h] [xbp-88h] BYREF
  __int64 v11; // [xsp+68h] [xbp-28h]

  v11 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = operator new(0xD8u);
  *(_DWORD *)(v2 + 8) = 0;
  *(_QWORD *)(v2 + 32) = 0;
  *(_QWORD *)(v2 + 40) = 0;
  *(_BYTE *)(v2 + 48) = 0;
  *(_QWORD *)(v2 + 80) = 0;
  *(_QWORD *)(v2 + 56) = &byte_6FD2F8;
  *(_QWORD *)(v2 + 104) = 0;
  *(_QWORD *)(v2 + 112) = 0;
  *(_QWORD *)&v3 = &off_6C4A68;
  *((_QWORD *)&v3 + 1) = &off_6C4AA8;
  *(_QWORD *)(v2 + 72) = 0;
  *(_OWORD *)(v2 + 16) = v3;
  __asm { FMOV            V0.4S, #1.0 }
  *(_QWORD *)v2 = off_6C4950;
  *(_QWORD *)(v2 + 160) = 0;
  *(_QWORD *)(v2 + 168) = 0;
  *(_QWORD *)(v2 + 144) = 0;
  *(_QWORD *)(v2 + 152) = 0;
  *(_QWORD *)(v2 + 128) = 0;
  *(_QWORD *)(v2 + 136) = 0;
  *(_QWORD *)(v2 + 120) = 0;
  *(_OWORD *)(v2 + 176) = _Q0;
  *(_BYTE *)(v2 + 192) = 0;
  *(_QWORD *)(v2 + 88) = v2 + 72;
  *(_QWORD *)(v2 + 96) = v2 + 72;
  *(_OWORD *)(v2 + 196) = _Q0;
  Caver::Proto::Component::Component((Caver::Proto::Component *)v10);
  (*(void (__fastcall **)(Caver::GroundMeshComponent *, _BYTE *))(*(_QWORD *)this + 40LL))(this, v10);
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v2 + 32LL))(v2, v10);
  Caver::Proto::Component::~Component((Caver::Proto::Component *)v10);
  return v2;
}

