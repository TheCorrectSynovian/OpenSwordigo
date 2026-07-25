/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000306CF0
 * Mangled: _ZN5Caver5Proto22GroundPolygonComponent4SwapEPS1_
 * Demangled: Caver::Proto::GroundPolygonComponent::Swap(Caver::Proto::GroundPolygonComponent*)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7EE0  google::protobuf::internal::RepeatedPtrFieldBase::Swap(google::protobuf::internal::RepeatedPtrFieldBase*)
 *
 * Referenced strings: 21
 *   insn=0x0000000000306D08 string=0x0000000000306D0C "h\n@"
 *   insn=0x0000000000306D14 string=0x0000000000306D18 "ab"
 *   insn=0x0000000000306D1C string=0x0000000000306D20 "i\n"
 *   insn=0x0000000000306D20 string=0x0000000000306D24 "o"
 *   insn=0x0000000000306D24 string=0x0000000000306D28 "h*@"
 *   insn=0x0000000000306D24 string=0x00000000001F7EE0 "0'"
 *   insn=0x0000000000306D30 string=0x0000000000306D34 "i*"
 *   insn=0x0000000000306D34 string=0x0000000000306D38 "hbA9"
 *   insn=0x0000000000306D40 string=0x0000000000306D44 "ib"
 *   insn=0x0000000000306D44 string=0x0000000000306D48 "h^@"
 *   insn=0x0000000000306D50 string=0x0000000000306D54 "i^"
 *   insn=0x0000000000306D54 string=0x0000000000306D58 "hb@"
 *   insn=0x0000000000306D60 string=0x0000000000306D64 "ib"
 *   insn=0x0000000000306D64 string=0x0000000000306D68 "hf@"
 *   insn=0x0000000000306D70 string=0x0000000000306D74 "if"
 *   insn=0x0000000000306D74 string=0x0000000000306D78 "h"
 *   insn=0x0000000000306D80 string=0x0000000000306D84 "i"
 *   insn=0x0000000000306D84 string=0x0000000000306D88 "hn@"
 *   insn=0x0000000000306D90 string=0x0000000000306D94 "in"
 *   insn=0x0000000000306D94 string=0x0000000000306D98 "h\n@"
 *   insn=0x0000000000306DA0 string=0x0000000000306DA4 "i\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Proto::GroundPolygonComponent *__fastcall Caver::Proto::GroundPolygonComponent::Swap(
        Caver::Proto::GroundPolygonComponent *this,
        Caver::Proto::GroundPolygonComponent *a2)
{
  Caver::Proto::GroundPolygonComponent *v3; // x20
  __int64 v4; // x9
  __int64 v5; // x9

  v3 = this;
  if ( a2 != this )
  {
    v4 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = v4;
    this = (Caver::Proto::GroundPolygonComponent *)google::protobuf::internal::RepeatedPtrFieldBase::Swap(
                                                     (Caver::Proto::GroundPolygonComponent *)((char *)this + 24),
                                                     (Caver::Proto::GroundPolygonComponent *)((char *)a2 + 24));
    v5 = *((_QWORD *)v3 + 10);
    *((_QWORD *)v3 + 10) = *((_QWORD *)a2 + 10);
    *((_QWORD *)a2 + 10) = v5;
    LOBYTE(v5) = *((_BYTE *)v3 + 88);
    *((_BYTE *)v3 + 88) = *((_BYTE *)a2 + 88);
    *((_BYTE *)a2 + 88) = v5;
    LODWORD(v5) = *((_DWORD *)v3 + 23);
    *((_DWORD *)v3 + 23) = *((_DWORD *)a2 + 23);
    *((_DWORD *)a2 + 23) = v5;
    LODWORD(v5) = *((_DWORD *)v3 + 24);
    *((_DWORD *)v3 + 24) = *((_DWORD *)a2 + 24);
    *((_DWORD *)a2 + 24) = v5;
    LODWORD(v5) = *((_DWORD *)v3 + 25);
    *((_DWORD *)v3 + 25) = *((_DWORD *)a2 + 25);
    *((_DWORD *)a2 + 25) = v5;
    LOBYTE(v5) = *((_BYTE *)v3 + 104);
    *((_BYTE *)v3 + 104) = *((_BYTE *)a2 + 104);
    *((_BYTE *)a2 + 104) = v5;
    LODWORD(v5) = *((_DWORD *)v3 + 27);
    *((_DWORD *)v3 + 27) = *((_DWORD *)a2 + 27);
    *((_DWORD *)a2 + 27) = v5;
    LODWORD(v5) = *((_DWORD *)v3 + 2);
    *((_DWORD *)v3 + 2) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v5;
  }
  return this;
}

