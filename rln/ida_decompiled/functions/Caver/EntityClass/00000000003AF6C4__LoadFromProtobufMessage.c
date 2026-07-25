/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003AF6C4
 * Mangled: _ZN5Caver11EntityClass23LoadFromProtobufMessageERKNS_5Proto11EntityClassE
 * Demangled: Caver::EntityClass::LoadFromProtobufMessage(Caver::Proto::EntityClass const&)
 *
 * Callers: 1
 *   0x00000000001FDC80  Caver::EntityClass::LoadFromProtobufMessage(Caver::Proto::EntityClass const&)
 *
 * Callees: 1
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 7
 *   insn=0x00000000003AF6D0 string=0x00000000003AF6D4 "a\n@"
 *   insn=0x00000000003AF6DC string=0x00000000003AF6E0 "a"
 *   insn=0x00000000003AF6E8 string=0x00000000003AF6EC "h"
 *   insn=0x00000000003AF6F0 string=0x00000000003AF6F4 "h"
 *   insn=0x00000000003AF6F8 string=0x00000000003AF6FC "h"
 *   insn=0x00000000003AF700 string=0x00000000003AF704 "h"
 *   insn=0x00000000003AF708 string=0x00000000003AF70C "hBB"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::EntityClass::LoadFromProtobufMessage(
        Caver::EntityClass *this,
        const Caver::Proto::EntityClass *a2)
{
  __int64 result; // x0

  sub_56A6A8(this);
  result = sub_56A6A8((char *)this + 8);
  *((_BYTE *)this + 16) = *((_BYTE *)a2 + 32);
  *((_BYTE *)this + 17) = *((_BYTE *)a2 + 33);
  *((_BYTE *)this + 18) = *((_BYTE *)a2 + 34);
  *((_BYTE *)this + 19) = *((_BYTE *)a2 + 35);
  *(_QWORD *)((char *)this + 20) = *(_QWORD *)((char *)a2 + 36);
  return result;
}

