/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002EBDC8
 * Mangled: _ZN5Caver5Proto13PlayerProfile4SwapEPS1_
 * Demangled: Caver::Proto::PlayerProfile::Swap(Caver::Proto::PlayerProfile*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7EE0  google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
 *
 * Referenced strings: 28
 *   insn=0x00000000002EBDE0 string=0x00000000002EBDE4 "h\n@"
 *   insn=0x00000000002EBDEC string=0x00000000002EBDF0 "a"
 *   insn=0x00000000002EBDF4 string=0x00000000002EBDF8 "i\n"
 *   insn=0x00000000002EBDF8 string=0x00000000002EBDFC "h"
 *   insn=0x00000000002EBE04 string=0x00000000002EBE08 "i"
 *   insn=0x00000000002EBE08 string=0x00000000002EBE0C "h"
 *   insn=0x00000000002EBE14 string=0x00000000002EBE18 "i"
 *   insn=0x00000000002EBE18 string=0x00000000002EBE1C "h"
 *   insn=0x00000000002EBE24 string=0x00000000002EBE28 "i"
 *   insn=0x00000000002EBE28 string=0x00000000002EBE2C "`"
 *   insn=0x00000000002EBE34 string=0x00000000002EBE38 "h&"
 *   insn=0x00000000002EBE38 string=0x00000000002EBE3C "j"@"
 *   insn=0x00000000002EBE44 string=0x00000000002EBE48 "h""
 *   insn=0x00000000002EBE48 string=0x00000000002EBE4C "i&@"
 *   insn=0x00000000002EBE54 string=0x00000000002EBE58 "h&"
 *   insn=0x00000000002EBE58 string=0x00000000002EBE5C "i*@"
 *   insn=0x00000000002EBE64 string=0x00000000002EBE68 "h*"
 *   insn=0x00000000002EBE68 string=0x00000000002EBE6C "i.@"
 *   insn=0x00000000002EBE74 string=0x00000000002EBE78 "h."
 *   insn=0x00000000002EBE7C string=0x00000000002EBE80 "hbB9"
 *   insn=0x00000000002EBE7C string=0x00000000001F7EE0 "0'"
 *   insn=0x00000000002EBE88 string=0x00000000002EBE8C "ib"
 *   insn=0x00000000002EBE8C string=0x00000000002EBE90 "hR@"
 *   insn=0x00000000002EBE98 string=0x00000000002EBE9C "iR"
 *   insn=0x00000000002EBE9C string=0x00000000002EBEA0 "h"
 *   insn=0x00000000002EBEA8 string=0x00000000002EBEAC "i"
 *   insn=0x00000000002EBEAC string=0x00000000002EBEB0 "h\n@"
 *   insn=0x00000000002EBEB8 string=0x00000000002EBEBC "i\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Proto::PlayerProfile *__fastcall Caver::Proto::PlayerProfile::Swap(
        Caver::Proto::PlayerProfile *this,
        Caver::Proto::PlayerProfile *a2)
{
  Caver::Proto::PlayerProfile *v3; // x20
  __int64 v4; // x9
  __int64 v5; // x9
  __int64 v6; // x9
  __int64 v7; // x9
  __int64 v8; // x8
  __int64 v9; // x9
  __int64 v10; // x8
  __int64 v11; // x8
  __int64 v12; // x8
  __int64 v13; // x8
  char v14; // w9
  __int64 v15; // x9

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
    v7 = *((_QWORD *)this + 5);
    *((_QWORD *)this + 5) = *((_QWORD *)a2 + 5);
    *((_QWORD *)a2 + 5) = v7;
    v8 = *((_QWORD *)this + 6);
    v9 = *((_QWORD *)this + 7);
    *((_OWORD *)this + 3) = *((_OWORD *)a2 + 3);
    *((_QWORD *)a2 + 6) = v8;
    *((_QWORD *)a2 + 7) = v9;
    v10 = *((_QWORD *)this + 8);
    *((_QWORD *)this + 8) = *((_QWORD *)a2 + 8);
    *((_QWORD *)a2 + 8) = v10;
    v11 = *((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = *((_QWORD *)a2 + 9);
    *((_QWORD *)a2 + 9) = v11;
    v12 = *((_QWORD *)this + 10);
    *((_QWORD *)this + 10) = *((_QWORD *)a2 + 10);
    *((_QWORD *)a2 + 10) = v12;
    v13 = *((_QWORD *)this + 11);
    *((_QWORD *)this + 11) = *((_QWORD *)a2 + 11);
    *((_QWORD *)a2 + 11) = v13;
    this = (Caver::Proto::PlayerProfile *)google::protobuf::internal::RepeatedPtrFieldBase::Swap(
                                            (Caver::Proto::PlayerProfile *)((char *)this + 96),
                                            (Caver::Proto::PlayerProfile *)((char *)a2 + 96));
    v14 = *((_BYTE *)v3 + 152);
    *((_BYTE *)v3 + 152) = *((_BYTE *)a2 + 152);
    *((_BYTE *)a2 + 152) = v14;
    v15 = *((_QWORD *)v3 + 20);
    *((_QWORD *)v3 + 20) = *((_QWORD *)a2 + 20);
    *((_QWORD *)a2 + 20) = v15;
    LODWORD(v15) = *((_DWORD *)v3 + 42);
    *((_DWORD *)v3 + 42) = *((_DWORD *)a2 + 42);
    *((_DWORD *)a2 + 42) = v15;
    LODWORD(v15) = *((_DWORD *)v3 + 2);
    *((_DWORD *)v3 + 2) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v15;
  }
  return this;
}

