/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F16EC
 * Mangled: _ZN5Caver5Proto9GameState4SwapEPS1_
 * Demangled: Caver::Proto::GameState::Swap(Caver::Proto::GameState*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7EE0  google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
 *
 * Referenced strings: 42
 *   insn=0x00000000002F1704 string=0x00000000002F1708 "h\n@"
 *   insn=0x00000000002F1710 string=0x00000000002F1714 "ab"
 *   insn=0x00000000002F1718 string=0x00000000002F171C "i\n"
 *   insn=0x00000000002F1720 string=0x00000000002F1724 "h*@"
 *   insn=0x00000000002F1720 string=0x00000000001F7EE0 "0'"
 *   insn=0x00000000002F172C string=0x00000000002F1730 "a"
 *   insn=0x00000000002F1734 string=0x00000000002F1738 "i*"
 *   insn=0x00000000002F1738 string=0x00000000002F173C "h.@"
 *   insn=0x00000000002F1744 string=0x00000000002F1748 "i."
 *   insn=0x00000000002F1748 string=0x00000000002F174C "h2@"
 *   insn=0x00000000002F1754 string=0x00000000002F1758 "i2"
 *   insn=0x00000000002F1758 string=0x00000000002F175C "h6@"
 *   insn=0x00000000002F1764 string=0x00000000002F1768 "i6"
 *   insn=0x00000000002F1768 string=0x00000000002F176C "h:@"
 *   insn=0x00000000002F1774 string=0x00000000002F1778 "i:"
 *   insn=0x00000000002F1778 string=0x00000000002F177C "h>@"
 *   insn=0x00000000002F1784 string=0x00000000002F1788 "i>"
 *   insn=0x00000000002F178C string=0x00000000002F1790 "h^@"
 *   insn=0x00000000002F1798 string=0x00000000002F179C "a"
 *   insn=0x00000000002F17A0 string=0x00000000002F17A4 "i^"
 *   insn=0x00000000002F17A4 string=0x00000000002F17A8 "hb@"
 *   insn=0x00000000002F17B0 string=0x00000000002F17B4 "ib"
 *   insn=0x00000000002F17B4 string=0x00000000002F17B8 "h"C9"
 *   insn=0x00000000002F17C0 string=0x00000000002F17C4 "i""
 *   insn=0x00000000002F17C4 string=0x00000000002F17C8 "h&C9"
 *   insn=0x00000000002F17D0 string=0x00000000002F17D4 "i&"
 *   insn=0x00000000002F17D4 string=0x00000000002F17D8 "hj@"
 *   insn=0x00000000002F17E0 string=0x00000000002F17E4 "ij"
 *   insn=0x00000000002F17E4 string=0x00000000002F17E8 "hn@"
 *   insn=0x00000000002F17F0 string=0x00000000002F17F4 "in"
 *   insn=0x00000000002F17F8 string=0x00000000002F17FC "hbD9"
 *   insn=0x00000000002F1804 string=0x00000000002F1808 "ib"
 *   insn=0x00000000002F1808 string=0x00000000002F180C "hfD9"
 *   insn=0x00000000002F1814 string=0x00000000002F1818 "if"
 *   insn=0x00000000002F1818 string=0x00000000002F181C "hjD9"
 *   insn=0x00000000002F1824 string=0x00000000002F1828 "ij"
 *   insn=0x00000000002F1828 string=0x00000000002F182C "hnD9"
 *   insn=0x00000000002F1834 string=0x00000000002F1838 "in"
 *   insn=0x00000000002F1838 string=0x00000000002F183C "h"
 *   insn=0x00000000002F1844 string=0x00000000002F1848 "i"
 *   insn=0x00000000002F1848 string=0x00000000002F184C "h\n@"
 *   insn=0x00000000002F1854 string=0x00000000002F1858 "i\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Proto::GameState *__fastcall Caver::Proto::GameState::Swap(
        Caver::Proto::GameState *this,
        Caver::Proto::GameState *a2)
{
  Caver::Proto::GameState *v3; // x20
  __int64 v4; // x9
  __int64 v5; // x9
  __int64 v6; // x9
  __int64 v7; // x9
  __int64 v8; // x9
  __int64 v9; // x9
  __int64 v10; // x9
  __int64 v11; // x9
  __int64 v12; // x9
  __int64 v13; // x9
  __int64 v14; // x9
  char v15; // w9
  char v16; // w9
  char v17; // w9
  char v18; // w9
  int v19; // w9
  int v20; // w9

  v3 = this;
  if ( a2 != this )
  {
    v4 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = v4;
    google::protobuf::internal::RepeatedPtrFieldBase::Swap(
      (Caver::Proto::GameState *)((char *)this + 24),
      (Caver::Proto::GameState *)((char *)a2 + 24));
    v5 = *((_QWORD *)v3 + 10);
    *((_QWORD *)v3 + 10) = *((_QWORD *)a2 + 10);
    *((_QWORD *)a2 + 10) = v5;
    v6 = *((_QWORD *)v3 + 11);
    *((_QWORD *)v3 + 11) = *((_QWORD *)a2 + 11);
    *((_QWORD *)a2 + 11) = v6;
    v7 = *((_QWORD *)v3 + 12);
    *((_QWORD *)v3 + 12) = *((_QWORD *)a2 + 12);
    *((_QWORD *)a2 + 12) = v7;
    v8 = *((_QWORD *)v3 + 13);
    *((_QWORD *)v3 + 13) = *((_QWORD *)a2 + 13);
    *((_QWORD *)a2 + 13) = v8;
    v9 = *((_QWORD *)v3 + 14);
    *((_QWORD *)v3 + 14) = *((_QWORD *)a2 + 14);
    *((_QWORD *)a2 + 14) = v9;
    v10 = *((_QWORD *)v3 + 15);
    *((_QWORD *)v3 + 15) = *((_QWORD *)a2 + 15);
    *((_QWORD *)a2 + 15) = v10;
    google::protobuf::internal::RepeatedPtrFieldBase::Swap(
      (Caver::Proto::GameState *)((char *)v3 + 128),
      (Caver::Proto::GameState *)((char *)a2 + 128));
    v11 = *((_QWORD *)v3 + 23);
    *((_QWORD *)v3 + 23) = *((_QWORD *)a2 + 23);
    *((_QWORD *)a2 + 23) = v11;
    v12 = *((_QWORD *)v3 + 24);
    *((_QWORD *)v3 + 24) = *((_QWORD *)a2 + 24);
    *((_QWORD *)a2 + 24) = v12;
    LOBYTE(v12) = *((_BYTE *)v3 + 200);
    *((_BYTE *)v3 + 200) = *((_BYTE *)a2 + 200);
    *((_BYTE *)a2 + 200) = v12;
    LOBYTE(v12) = *((_BYTE *)v3 + 201);
    *((_BYTE *)v3 + 201) = *((_BYTE *)a2 + 201);
    *((_BYTE *)a2 + 201) = v12;
    v13 = *((_QWORD *)v3 + 26);
    *((_QWORD *)v3 + 26) = *((_QWORD *)a2 + 26);
    *((_QWORD *)a2 + 26) = v13;
    v14 = *((_QWORD *)v3 + 27);
    *((_QWORD *)v3 + 27) = *((_QWORD *)a2 + 27);
    *((_QWORD *)a2 + 27) = v14;
    this = (Caver::Proto::GameState *)google::protobuf::internal::RepeatedPtrFieldBase::Swap(
                                        (Caver::Proto::GameState *)((char *)v3 + 224),
                                        (Caver::Proto::GameState *)((char *)a2 + 224));
    v15 = *((_BYTE *)v3 + 280);
    *((_BYTE *)v3 + 280) = *((_BYTE *)a2 + 280);
    *((_BYTE *)a2 + 280) = v15;
    v16 = *((_BYTE *)v3 + 281);
    *((_BYTE *)v3 + 281) = *((_BYTE *)a2 + 281);
    *((_BYTE *)a2 + 281) = v16;
    v17 = *((_BYTE *)v3 + 282);
    *((_BYTE *)v3 + 282) = *((_BYTE *)a2 + 282);
    *((_BYTE *)a2 + 282) = v17;
    v18 = *((_BYTE *)v3 + 283);
    *((_BYTE *)v3 + 283) = *((_BYTE *)a2 + 283);
    *((_BYTE *)a2 + 283) = v18;
    v19 = *((_DWORD *)v3 + 71);
    *((_DWORD *)v3 + 71) = *((_DWORD *)a2 + 71);
    *((_DWORD *)a2 + 71) = v19;
    v20 = *((_DWORD *)v3 + 2);
    *((_DWORD *)v3 + 2) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v20;
  }
  return this;
}

