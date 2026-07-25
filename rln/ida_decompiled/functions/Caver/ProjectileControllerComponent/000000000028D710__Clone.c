/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028D710
 * Mangled: _ZNK5Caver29ProjectileControllerComponent5CloneEv
 * Demangled: Caver::ProjectileControllerComponent::Clone(void)
 *
 * Callers: 1
 *   0x000000000028D5F8  Caver::ProjectileControllerComponent::~ProjectileControllerComponent()
 *
 * Callees: 2
 *   0x00000000001F55E0  operator new(ulong)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 14
 *   insn=0x000000000028D724 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000028D738 string=0x000000000028D73C ""
 *   insn=0x000000000028D740 string=0x000000000028D744 "JYD"
 *   insn=0x000000000028D748 string=0x000000000028D74C "a"
 *   insn=0x000000000028D74C string=0x000000000028D750 ""
 *   insn=0x000000000028D750 string=0x000000000028D754 "H"
 *   insn=0x000000000028D758 string=0x000000000028D75C "( "
 *   insn=0x000000000028D75C string=0x000000000028D760 "?"
 *   insn=0x000000000028D764 string=0x000000000028D768 "H"
 *   insn=0x000000000028D768 string=0x000000000028D76C "KA"
 *   insn=0x000000000028D784 string=0x000000000028D788 "h"@"
 *   insn=0x000000000028D788 string=0x000000000028D78C "a"
 *   insn=0x000000000028D794 string=0x000000000028D798 "h"
 *   insn=0x000000000028D7A4 string=0x000000000028D7A8 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProjectileControllerComponent::Clone(Caver::ProjectileControllerComponent *this)
{
  __int64 v2; // x20
  __int128 v3; // q0
  __int64 result; // x0

  v2 = operator new(0x80u);
  *(_DWORD *)(v2 + 8) = 0;
  *(_BYTE *)(v2 + 48) = 0;
  *(_QWORD *)(v2 + 32) = 0;
  *(_QWORD *)(v2 + 40) = 0;
  *(_QWORD *)(v2 + 56) = &byte_6FD2F8;
  *(_QWORD *)&v3 = &off_6C0FA8;
  *(_QWORD *)(v2 + 72) = 0;
  *(_WORD *)(v2 + 112) = 257;
  *((_QWORD *)&v3 + 1) = &off_6C0FE8;
  *(_QWORD *)v2 = off_6C0E90;
  *(_QWORD *)(v2 + 96) = v2 + 72;
  *(_QWORD *)(v2 + 104) = 0;
  *(_QWORD *)(v2 + 80) = 0;
  *(_QWORD *)(v2 + 88) = v2 + 72;
  *(_QWORD *)(v2 + 120) = 0;
  *(_OWORD *)(v2 + 16) = v3;
  *(_DWORD *)(v2 + 32) = *((_DWORD *)this + 8);
  sub_56A6A8(v2 + 56);
  result = v2;
  *(_BYTE *)(v2 + 112) = *((_BYTE *)this + 112);
  *(_BYTE *)(v2 + 113) = *((_BYTE *)this + 113);
  return result;
}

