/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000236D68
 * Mangled: _ZN5Caver14ShapeComponent17InitWithComponentEPKS0_
 * Demangled: Caver::ShapeComponent::InitWithComponent(Caver::ShapeComponent const*)
 *
 * Callers: 1
 *   0x00000000001F3920  Caver::ShapeComponent::InitWithComponent(Caver::ShapeComponent const*)
 *
 * Callees: 1
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 5
 *   insn=0x0000000000236D74 string=0x0000000000236D78 "h"@"
 *   insn=0x0000000000236D7C string=0x0000000000236D80 "a"
 *   insn=0x0000000000236D88 string=0x0000000000236D8C "G"
 *   insn=0x0000000000236D94 string=0x0000000000236D98 "a"
 *   insn=0x0000000000236DA4 string=0x0000000000236DA8 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ShapeComponent::InitWithComponent(
        Caver::ShapeComponent *this,
        const Caver::ShapeComponent *a2)
{
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  sub_56A6A8((char *)this + 56);
  return (*(__int64 (__fastcall **)(Caver::ShapeComponent *, char *))(*(_QWORD *)this + 280LL))(this, (char *)a2 + 112);
}

