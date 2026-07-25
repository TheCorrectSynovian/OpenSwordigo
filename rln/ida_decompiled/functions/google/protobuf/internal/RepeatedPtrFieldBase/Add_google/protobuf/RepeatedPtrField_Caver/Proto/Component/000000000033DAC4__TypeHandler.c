/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033DAC4
 * Mangled: _ZN6google8protobuf8internal20RepeatedPtrFieldBase3AddINS0_16RepeatedPtrFieldIN5Caver5Proto9ComponentEE11TypeHandlerEEEPNT_4TypeEv
 * Demangled: google::protobuf::internal::RepeatedPtrFieldBase::Add<google::protobuf::RepeatedPtrField<Caver::Proto::Component>::TypeHandler>(void)
 *
 * Callers: 1
 *   0x00000000001FDEF0  google::protobuf::internal::RepeatedPtrFieldBase::Add<google::protobuf::RepeatedPtrField<Caver::Proto::Component>::TypeHandler>(void)
 *
 * Callees: 8
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000001FDF90  google::protobuf::internal::ExtensionSet::ExtensionSet(void)
 *   0x00000000001FEB80  Caver::Proto::SceneObjectGroup::MergeFrom(Caver::Proto::SceneObjectGroup const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 51
 *   insn=0x000000000033DAD0 string=0x000000000033DAD4 "i"A))}@"
 *   insn=0x000000000033DAD4 string=0x000000000033DAD8 ")}@"
 *   insn=0x000000000033DAD8 string=0x000000000033DADC "?"
 *   insn=0x000000000033DAE0 string=0x000000000033DAE4 "h"
 *   insn=0x000000000033DAE0 string=0x000000000033DAF8 "i"
 *   insn=0x000000000033DAE4 string=0x000000000033DAE8 "*"
 *   insn=0x000000000033DAE8 string=0x000000000033DAEC "j\n"
 *   insn=0x000000000033DAF0 string=0x000000000033DAF4 " "
 *   insn=0x000000000033DB00 string=0x000000000033DB14 ""
 *   insn=0x000000000033DB0C string=0x000000000033DB10 "h"
 *   insn=0x000000000033DB0C string=0x00000000001FAD20 "0'"
 *   insn=0x000000000033DB18 string=0x000000000033DB1C "h"
 *   insn=0x000000000033DB20 string=0x000000000033DB24 "H"
 *   insn=0x000000000033DB20 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000033DB24 string=0x000000000033DB28 ""
 *   insn=0x000000000033DB2C string=0x000000000033DB30 "A"
 *   insn=0x000000000033DB30 string=0x000000000033DB34 ""
 *   insn=0x000000000033DB38 string=0x00000000001FDF90 "0'"
 *   insn=0x000000000033DB3C string=0x000000000033DB40 "H"
 *   insn=0x000000000033DB40 string=0x000000000033DB44 ""
 *   insn=0x000000000033DB48 string=0x000000000033DB4C "I"
 *   insn=0x000000000033DB4C string=0x000000000033DB50 ")"
 *   insn=0x000000000033DB5C string=0x000000000033DB60 "h\n"
 *   insn=0x000000000033DB60 string=0x000000000033DB64 "i"
 *   insn=0x000000000033DB64 string=0x000000000033DB68 "\n"
 *   insn=0x000000000033DB68 string=0x000000000033DB6C "j\n"
 *   insn=0x000000000033DB6C string=0x000000000033DB70 "4y("
 *   insn=0x000000000033DB8C string=0x00000000001F7600 "0'"
 *   insn=0x000000000033DB94 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000033DB98 string=0x000000000033DB9C "J"
 *   insn=0x000000000033DBC4 string=0x000000000033DBC8 "i\n@"
 *   insn=0x000000000033DBC8 string=0x000000000033DBCC "!"
 *   insn=0x000000000033DBCC string=0x000000000033DBD0 "T"
 *   insn=0x000000000033DBD0 string=0x000000000033DBD4 "h\n@"
 *   insn=0x000000000033DBD8 string=0x000000000033DBDC "K"
 *   insn=0x000000000033DBDC string=0x000000000033DBE0 "H"
 *   insn=0x000000000033DBE0 string=0x000000000033DBE4 ""
 *   insn=0x000000000033DBE4 string=0x000000000033DBE8 "Y"
 *   insn=0x000000000033DBE8 string=0x000000000033DBEC "9"
 *   insn=0x000000000033DBF8 string=0x000000000033DBFC "i"
 *   insn=0x000000000033DC00 string=0x000000000033DC04 "5yv"
 *   insn=0x000000000033DC04 string=0x000000000033DC08 "_"
 *   insn=0x000000000033DC10 string=0x000000000033DC14 "J"
 *   insn=0x000000000033DC14 string=0x000000000033DC18 "I"
 *   insn=0x000000000033DC30 string=0x000000000033DC44 ""
 *   insn=0x000000000033DC38 string=0x000000000033DC3C "9"
 *   insn=0x000000000033DC4C string=0x000000000033DC50 "d"
 *   insn=0x000000000033DC50 string=0x000000000033DC54 ""
 *   insn=0x000000000033DC58 string=0x000000000033DC5C ""
 *   insn=0x000000000033DC7C string=0x000000000033DC80 "I"
 *   insn=0x000000000033DC90 string=0x000000000033DC94 "h\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::RepeatedPtrFieldBase::Add<google::protobuf::RepeatedPtrField<Caver::Proto::Component>::TypeHandler>(
        google::protobuf::internal::RepeatedPtrFieldBase *this)
{
  int v2; // w8
  __int64 v3; // x9
  __int64 v4; // x8
  __int64 v5; // x20
  __int64 v6; // x8
  __int64 v7; // x9

  v2 = *((_DWORD *)this + 3);
  v3 = *((int *)this + 2);
  if ( (int)v3 >= v2 )
  {
    if ( v2 == *((_DWORD *)this + 4) )
    {
      google::protobuf::internal::RepeatedPtrFieldBase::Reserve(this, v2 + 1);
      v2 = *((_DWORD *)this + 3);
    }
    *((_DWORD *)this + 3) = v2 + 1;
    v5 = operator new(0x60u);
    *(_QWORD *)v5 = off_6C7290;
    google::protobuf::internal::ExtensionSet::ExtensionSet((google::protobuf::internal::ExtensionSet *)(v5 + 8));
    *(_DWORD *)(v5 + 56) = 0;
    *(_QWORD *)(v5 + 72) = 0;
    *(_DWORD *)(v5 + 88) = 0;
    *(_QWORD *)(v5 + 64) = &Caver::Proto::Component::_default_class_name_;
    *(_QWORD *)(v5 + 80) = &Caver::Proto::Component::_default_label_;
    v6 = *((int *)this + 2);
    v7 = *(_QWORD *)this;
    *((_DWORD *)this + 2) = v6 + 1;
    *(_QWORD *)(v7 + 8 * v6) = v5;
  }
  else
  {
    v4 = *(_QWORD *)this;
    *((_DWORD *)this + 2) = v3 + 1;
    return *(_QWORD *)(v4 + 8 * v3);
  }
  return v5;
}

