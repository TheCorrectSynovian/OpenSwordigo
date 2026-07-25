/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C0B40
 * Mangled: _ZNK5Caver7Program21SaveToProtobufMessageEPNS_5Proto7ProgramE
 * Demangled: Caver::Program::SaveToProtobufMessage(Caver::Proto::Program *)
 *
 * Callers: 2
 *   0x00000000001F8790  Caver::Program::SaveToProtobufMessage(Caver::Proto::Program *)
 *   0x00000000004C06D4  Caver::Program::InitWithString(std::string const&,std::string *)
 *
 * Callees: 2
 *   0x00000000001F55E0  operator new(ulong)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 39
 *   insn=0x00000000004C0B58 string=0x00000000004C0B5C ""
 *   insn=0x00000000004C0B5C string=0x00000000004C0B60 "H"
 *   insn=0x00000000004C0B60 string=0x00000000004C0B64 ")"
 *   insn=0x00000000004C0B64 string=0x00000000004C0B68 "h*@"
 *   insn=0x00000000004C0B68 string=0x00000000004C0B6C "`\n@"
 *   insn=0x00000000004C0B6C string=0x00000000004C0B70 ")"
 *   insn=0x00000000004C0B70 string=0x00000000004C0B74 ""
 *   insn=0x00000000004C0B74 string=0x00000000004C0B78 "h*"
 *   insn=0x00000000004C0B88 string=0x00000000004C0B8C "("
 *   insn=0x00000000004C0B88 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004C0B8C string=0x00000000004C0B90 ""
 *   insn=0x00000000004C0B90 string=0x00000000004C0B94 "a"
 *   insn=0x00000000004C0B94 string=0x00000000004C0B98 ""
 *   insn=0x00000000004C0B98 string=0x00000000004C0B9C "`\n"
 *   insn=0x00000000004C0BA8 string=0x00000000004C0BAC "U"
 *   insn=0x00000000004C0BAC string=0x00000000004C0BB0 ")"
 *   insn=0x00000000004C0BB0 string=0x00000000004C0BB4 "h*@"
 *   insn=0x00000000004C0BB4 string=0x00000000004C0BB8 "`"
 *   insn=0x00000000004C0BB8 string=0x00000000004C0BBC ")mB"
 *   insn=0x00000000004C0BBC string=0x00000000004C0BC0 ""
 *   insn=0x00000000004C0BC0 string=0x00000000004C0BC4 "h*"
 *   insn=0x00000000004C0BD4 string=0x00000000004C0BD8 "("
 *   insn=0x00000000004C0BD8 string=0x00000000004C0BDC ""
 *   insn=0x00000000004C0BDC string=0x00000000004C0BE0 "a"
 *   insn=0x00000000004C0BE0 string=0x00000000004C0BE4 ""
 *   insn=0x00000000004C0BE4 string=0x00000000004C0BE8 "`"
 *   insn=0x00000000004C0BF4 string=0x00000000004C0BF8 "T"
 *   insn=0x00000000004C0BF8 string=0x00000000004C0BFC ")"
 *   insn=0x00000000004C0BFC string=0x00000000004C0C00 "h*@"
 *   insn=0x00000000004C0C00 string=0x00000000004C0C04 "`"
 *   insn=0x00000000004C0C04 string=0x00000000004C0C08 ")9@"
 *   insn=0x00000000004C0C08 string=0x00000000004C0C0C ""
 *   insn=0x00000000004C0C0C string=0x00000000004C0C10 "h*"
 *   insn=0x00000000004C0C1C string=0x00000000004C0C20 "p"
 *   insn=0x00000000004C0C20 string=0x00000000004C0C24 "("
 *   insn=0x00000000004C0C24 string=0x00000000004C0C28 ""
 *   insn=0x00000000004C0C28 string=0x00000000004C0C2C "a"
 *   insn=0x00000000004C0C2C string=0x00000000004C0C30 ""
 *   insn=0x00000000004C0C30 string=0x00000000004C0C34 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::Program::SaveToProtobufMessage(_QWORD *this, Caver::Proto::Program *a2)
{
  _QWORD *v2; // x20
  __int64 *v4; // x0
  __int64 *v5; // x0
  __int64 *v6; // x0

  v2 = this;
  if ( *(_QWORD *)(*this - 24LL) )
  {
    v4 = (__int64 *)*((_QWORD *)a2 + 2);
    *((_DWORD *)a2 + 10) |= 1u;
    if ( v4 == &Caver::Proto::Program::_default_name_ )
    {
      v4 = (__int64 *)operator new(8u);
      *v4 = (__int64)&byte_6FD2F8;
      *((_QWORD *)a2 + 2) = v4;
    }
    this = (_QWORD *)sub_56A6A8(v4);
  }
  if ( v2[1] )
  {
    v5 = (__int64 *)*((_QWORD *)a2 + 3);
    *((_DWORD *)a2 + 10) |= 2u;
    if ( v5 == &Caver::Proto::Program::_default_string_ )
    {
      v5 = (__int64 *)operator new(8u);
      *v5 = (__int64)&byte_6FD2F8;
      *((_QWORD *)a2 + 3) = v5;
    }
    this = (_QWORD *)sub_56A6A8(v5);
  }
  if ( v2[3] )
  {
    v6 = (__int64 *)*((_QWORD *)a2 + 4);
    *((_DWORD *)a2 + 10) |= 4u;
    if ( v6 == &Caver::Proto::Program::_default_bytes_ )
    {
      v6 = (__int64 *)operator new(8u);
      *v6 = (__int64)&byte_6FD2F8;
      *((_QWORD *)a2 + 4) = v6;
    }
    return (_QWORD *)sub_56A6A8(v6);
  }
  return this;
}

