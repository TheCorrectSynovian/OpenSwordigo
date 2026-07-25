/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F4B54
 * Mangled: _ZN5Caver5Proto14CharacterState4SwapEPS1_
 * Demangled: Caver::Proto::CharacterState::Swap(Caver::Proto::CharacterState*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7EE0  google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
 *
 * Referenced strings: 35
 *   insn=0x00000000002F4B6C string=0x00000000002F4B70 "h"
 *   insn=0x00000000002F4B78 string=0x00000000002F4B7C "a"
 *   insn=0x00000000002F4B80 string=0x00000000002F4B84 "i"
 *   insn=0x00000000002F4B84 string=0x00000000002F4B88 "h"
 *   insn=0x00000000002F4B90 string=0x00000000002F4B94 "i"
 *   insn=0x00000000002F4B94 string=0x00000000002F4B98 "h"
 *   insn=0x00000000002F4BA0 string=0x00000000002F4BA4 "i"
 *   insn=0x00000000002F4BA4 string=0x00000000002F4BA8 "h"
 *   insn=0x00000000002F4BB0 string=0x00000000002F4BB4 "i"
 *   insn=0x00000000002F4BB4 string=0x00000000002F4BB8 "h"
 *   insn=0x00000000002F4BC0 string=0x00000000002F4BC4 "i"
 *   insn=0x00000000002F4BC8 string=0x00000000002F4BCC "h.@"
 *   insn=0x00000000002F4BC8 string=0x00000000001F7EE0 "0'"
 *   insn=0x00000000002F4BD4 string=0x00000000002F4BD8 "a"
 *   insn=0x00000000002F4BDC string=0x00000000002F4BE0 "i."
 *   insn=0x00000000002F4BE0 string=0x00000000002F4BE4 "h2@"
 *   insn=0x00000000002F4BEC string=0x00000000002F4BF0 "i2"
 *   insn=0x00000000002F4BF4 string=0x00000000002F4BF8 "hR@"
 *   insn=0x00000000002F4C00 string=0x00000000002F4C04 "iR"
 *   insn=0x00000000002F4C04 string=0x00000000002F4C08 "hV@"
 *   insn=0x00000000002F4C10 string=0x00000000002F4C14 "iV"
 *   insn=0x00000000002F4C14 string=0x00000000002F4C18 "hZ@"
 *   insn=0x00000000002F4C20 string=0x00000000002F4C24 "iZ"
 *   insn=0x00000000002F4C24 string=0x00000000002F4C28 "h^@"
 *   insn=0x00000000002F4C30 string=0x00000000002F4C34 "i^"
 *   insn=0x00000000002F4C34 string=0x00000000002F4C38 "h"
 *   insn=0x00000000002F4C40 string=0x00000000002F4C44 "i"
 *   insn=0x00000000002F4C44 string=0x00000000002F4C48 "h"
 *   insn=0x00000000002F4C50 string=0x00000000002F4C54 "i"
 *   insn=0x00000000002F4C54 string=0x00000000002F4C58 "h"
 *   insn=0x00000000002F4C60 string=0x00000000002F4C64 "i"
 *   insn=0x00000000002F4C64 string=0x00000000002F4C68 "h"
 *   insn=0x00000000002F4C70 string=0x00000000002F4C74 "i"
 *   insn=0x00000000002F4C74 string=0x00000000002F4C78 "h\n@"
 *   insn=0x00000000002F4C80 string=0x00000000002F4C84 "i\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Proto::CharacterState *__fastcall Caver::Proto::CharacterState::Swap(
        Caver::Proto::CharacterState *this,
        Caver::Proto::CharacterState *a2)
{
  Caver::Proto::CharacterState *v3; // x20
  int v4; // w9
  int v5; // w9
  int v6; // w9
  int v7; // w9
  int v8; // w9
  __int64 v9; // x9
  __int64 v10; // x9
  __int64 v11; // x9
  __int64 v12; // x9
  __int64 v13; // x9
  __int64 v14; // x9

  v3 = this;
  if ( a2 != this )
  {
    v4 = *((_DWORD *)this + 3);
    *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
    *((_DWORD *)a2 + 3) = v4;
    v5 = *((_DWORD *)this + 4);
    *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
    *((_DWORD *)a2 + 4) = v5;
    v6 = *((_DWORD *)this + 5);
    *((_DWORD *)this + 5) = *((_DWORD *)a2 + 5);
    *((_DWORD *)a2 + 5) = v6;
    v7 = *((_DWORD *)this + 6);
    *((_DWORD *)this + 6) = *((_DWORD *)a2 + 6);
    *((_DWORD *)a2 + 6) = v7;
    v8 = *((_DWORD *)this + 7);
    *((_DWORD *)this + 7) = *((_DWORD *)a2 + 7);
    *((_DWORD *)a2 + 7) = v8;
    google::protobuf::internal::RepeatedPtrFieldBase::Swap(
      (Caver::Proto::CharacterState *)((char *)this + 32),
      (Caver::Proto::CharacterState *)((char *)a2 + 32));
    v9 = *((_QWORD *)v3 + 11);
    *((_QWORD *)v3 + 11) = *((_QWORD *)a2 + 11);
    *((_QWORD *)a2 + 11) = v9;
    v10 = *((_QWORD *)v3 + 12);
    *((_QWORD *)v3 + 12) = *((_QWORD *)a2 + 12);
    *((_QWORD *)a2 + 12) = v10;
    this = (Caver::Proto::CharacterState *)google::protobuf::internal::RepeatedPtrFieldBase::Swap(
                                             (Caver::Proto::CharacterState *)((char *)v3 + 104),
                                             (Caver::Proto::CharacterState *)((char *)a2 + 104));
    v11 = *((_QWORD *)v3 + 20);
    *((_QWORD *)v3 + 20) = *((_QWORD *)a2 + 20);
    *((_QWORD *)a2 + 20) = v11;
    v12 = *((_QWORD *)v3 + 21);
    *((_QWORD *)v3 + 21) = *((_QWORD *)a2 + 21);
    *((_QWORD *)a2 + 21) = v12;
    v13 = *((_QWORD *)v3 + 22);
    *((_QWORD *)v3 + 22) = *((_QWORD *)a2 + 22);
    *((_QWORD *)a2 + 22) = v13;
    v14 = *((_QWORD *)v3 + 23);
    *((_QWORD *)v3 + 23) = *((_QWORD *)a2 + 23);
    *((_QWORD *)a2 + 23) = v14;
    LODWORD(v14) = *((_DWORD *)v3 + 48);
    *((_DWORD *)v3 + 48) = *((_DWORD *)a2 + 48);
    *((_DWORD *)a2 + 48) = v14;
    LODWORD(v14) = *((_DWORD *)v3 + 49);
    *((_DWORD *)v3 + 49) = *((_DWORD *)a2 + 49);
    *((_DWORD *)a2 + 49) = v14;
    LODWORD(v14) = *((_DWORD *)v3 + 50);
    *((_DWORD *)v3 + 50) = *((_DWORD *)a2 + 50);
    *((_DWORD *)a2 + 50) = v14;
    LODWORD(v14) = *((_DWORD *)v3 + 51);
    *((_DWORD *)v3 + 51) = *((_DWORD *)a2 + 51);
    *((_DWORD *)a2 + 51) = v14;
    LODWORD(v14) = *((_DWORD *)v3 + 2);
    *((_DWORD *)v3 + 2) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v14;
  }
  return this;
}

