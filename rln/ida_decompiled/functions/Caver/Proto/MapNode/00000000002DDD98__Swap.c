/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DDD98
 * Mangled: _ZN5Caver5Proto7MapNode4SwapEPS1_
 * Demangled: Caver::Proto::MapNode::Swap(Caver::Proto::MapNode*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7EE0  google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
 *
 * Referenced strings: 27
 *   insn=0x00000000002DDDB0 string=0x00000000002DDDB4 "h\n@"
 *   insn=0x00000000002DDDBC string=0x00000000002DDDC0 "a"
 *   insn=0x00000000002DDDC4 string=0x00000000002DDDC8 "i\n"
 *   insn=0x00000000002DDDC8 string=0x00000000002DDDCC "h"
 *   insn=0x00000000002DDDD4 string=0x00000000002DDDD8 "i"
 *   insn=0x00000000002DDDD8 string=0x00000000002DDDDC "h"
 *   insn=0x00000000002DDDE4 string=0x00000000002DDDE8 "i"
 *   insn=0x00000000002DDDE8 string=0x00000000002DDDEC "=h"
 *   insn=0x00000000002DDDEC string=0x00000000002DDDF0 "hb@"
 *   insn=0x00000000002DDDEC string=0x00000000001F7EE0 "0'"
 *   insn=0x00000000002DDDF8 string=0x00000000002DDDFC "ib"
 *   insn=0x00000000002DDDFC string=0x00000000002DDE00 "h"
 *   insn=0x00000000002DDE08 string=0x00000000002DDE0C "i"
 *   insn=0x00000000002DDE0C string=0x00000000002DDE10 "hj@"
 *   insn=0x00000000002DDE18 string=0x00000000002DDE1C "ij"
 *   insn=0x00000000002DDE1C string=0x00000000002DDE20 "h:@"
 *   insn=0x00000000002DDE28 string=0x00000000002DDE2C "i:"
 *   insn=0x00000000002DDE2C string=0x00000000002DDE30 "h"
 *   insn=0x00000000002DDE38 string=0x00000000002DDE3C "i"
 *   insn=0x00000000002DDE3C string=0x00000000002DDE40 "h~@"
 *   insn=0x00000000002DDE48 string=0x00000000002DDE4C "i~"
 *   insn=0x00000000002DDE4C string=0x00000000002DDE50 "h"
 *   insn=0x00000000002DDE58 string=0x00000000002DDE5C "i"
 *   insn=0x00000000002DDE5C string=0x00000000002DDE60 "h"
 *   insn=0x00000000002DDE68 string=0x00000000002DDE6C "i"
 *   insn=0x00000000002DDE6C string=0x00000000002DDE70 "h\n@"
 *   insn=0x00000000002DDE78 string=0x00000000002DDE7C "i\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Proto::MapNode *__fastcall Caver::Proto::MapNode::Swap(Caver::Proto::MapNode *this, Caver::Proto::MapNode *a2)
{
  Caver::Proto::MapNode *v3; // x20
  __int64 v4; // x9
  __int64 v5; // x9
  __int64 v6; // x9
  int v7; // w9
  int v8; // w9
  __int64 v9; // x9

  v3 = this;
  if ( a2 != this )
  {
    v4 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = v4;
    v5 = *((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = *((_QWORD *)a2 + 3);
    *((_QWORD *)a2 + 3) = v5;
    v6 = *((_QWORD *)this + 4);
    *((_QWORD *)this + 4) = *((_QWORD *)a2 + 4);
    *((_QWORD *)a2 + 4) = v6;
    this = (Caver::Proto::MapNode *)google::protobuf::internal::RepeatedPtrFieldBase::Swap(
                                      (Caver::Proto::MapNode *)((char *)this + 40),
                                      (Caver::Proto::MapNode *)((char *)a2 + 40));
    v7 = *((_DWORD *)v3 + 24);
    *((_DWORD *)v3 + 24) = *((_DWORD *)a2 + 24);
    *((_DWORD *)a2 + 24) = v7;
    LOBYTE(v7) = *((_BYTE *)v3 + 100);
    *((_BYTE *)v3 + 100) = *((_BYTE *)a2 + 100);
    *((_BYTE *)a2 + 100) = v7;
    v8 = *((_DWORD *)v3 + 26);
    *((_DWORD *)v3 + 26) = *((_DWORD *)a2 + 26);
    *((_DWORD *)a2 + 26) = v8;
    v9 = *((_QWORD *)v3 + 14);
    *((_QWORD *)v3 + 14) = *((_QWORD *)a2 + 14);
    *((_QWORD *)a2 + 14) = v9;
    LOBYTE(v9) = *((_BYTE *)v3 + 120);
    *((_BYTE *)v3 + 120) = *((_BYTE *)a2 + 120);
    *((_BYTE *)a2 + 120) = v9;
    LODWORD(v9) = *((_DWORD *)v3 + 31);
    *((_DWORD *)v3 + 31) = *((_DWORD *)a2 + 31);
    *((_DWORD *)a2 + 31) = v9;
    LOBYTE(v9) = *((_BYTE *)v3 + 128);
    *((_BYTE *)v3 + 128) = *((_BYTE *)a2 + 128);
    *((_BYTE *)a2 + 128) = v9;
    LODWORD(v9) = *((_DWORD *)v3 + 33);
    *((_DWORD *)v3 + 33) = *((_DWORD *)a2 + 33);
    *((_DWORD *)a2 + 33) = v9;
    LODWORD(v9) = *((_DWORD *)v3 + 2);
    *((_DWORD *)v3 + 2) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v9;
  }
  return this;
}

