/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000219C18
 * Mangled: _ZN5Caver12BindingValue12ValueWithIntEiRKSs
 * Demangled: Caver::BindingValue::ValueWithInt(int,std::string const&)
 *
 * Callers: 1
 *   0x00000000001FFD40  Caver::BindingValue::ValueWithInt(int,std::string const&)
 *
 * Callees: 11
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7480  Caver::BindingValue::~BindingValue()
 *   0x00000000001F7F10  boost::detail::shared_count::shared_count<std::string>(std::string *)
 *   0x00000000001FB2C0  Caver::BindingValue::ValueWithInt(int)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x00000000002029C0  Caver::CollisionShapeComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 56
 *   insn=0x0000000000219C28 string=0x0000000000219C2C "V"
 *   insn=0x0000000000219C44 string=0x0000000000219C48 "`"
 *   insn=0x0000000000219C44 string=0x00000000001FB2C0 "0'"
 *   insn=0x0000000000219C48 string=0x0000000000219C4C " "
 *   insn=0x0000000000219C50 string=0x0000000000219C54 "cn"
 *   insn=0x0000000000219C54 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000219C58 string=0x0000000000219C5C "h&"
 *   insn=0x0000000000219C5C string=0x0000000000219C60 ""
 *   insn=0x0000000000219C64 string=0x0000000000219C68 " !"
 *   insn=0x0000000000219C6C string=0x0000000000219C70 "a"
 *   insn=0x0000000000219C7C string=0x00000000001F7F10 "0'"
 *   insn=0x0000000000219C88 string=0x0000000000219C8C "1"
 *   insn=0x0000000000219C8C string=0x0000000000219C90 "h"
 *   insn=0x0000000000219CA0 string=0x0000000000219CA4 "i"
 *   insn=0x0000000000219CA4 string=0x0000000000219CA8 "5"
 *   insn=0x0000000000219CA8 string=0x0000000000219CEC "`"
 *   insn=0x0000000000219CAC string=0x0000000000219CB0 ""
 *   insn=0x0000000000219CBC string=0x0000000000219CC0 "\t@"
 *   insn=0x0000000000219CCC string=0x0000000000219CD0 ""
 *   insn=0x0000000000219CDC string=0x0000000000219CE0 "@"
 *   insn=0x0000000000219CF0 string=0x0000000000219CF4 "mB"
 *   insn=0x0000000000219D04 string=0x0000000000219D1C "mq"
 *   insn=0x0000000000219D1C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000219D28 string=0x00000000001F7480 "0'"
 *   insn=0x0000000000219D44 string=0x0000000000219D48 "S"
 *   insn=0x0000000000219D48 string=0x0000000000219D4C "j"
 *   insn=0x0000000000219D4C string=0x0000000000219D50 "\t"
 *   insn=0x0000000000219D50 string=0x0000000000219D54 "?"
 *   insn=0x0000000000219D58 string=0x0000000000219D5C ""
 *   insn=0x0000000000219D5C string=0x0000000000219D60 "J"
 *   insn=0x0000000000219D5C string=0x0000000000219DBC "A"
 *   insn=0x0000000000219D60 string=0x0000000000219D68 "Iy"
 *   insn=0x0000000000219D68 string=0x0000000000219D6C ")"
 *   insn=0x0000000000219D6C string=0x0000000000219D70 " "
 *   insn=0x0000000000219D70 string=0x0000000000219D74 "A"
 *   insn=0x0000000000219D70 string=0x0000000000219D8C "A"
 *   insn=0x0000000000219D70 string=0x0000000000219DD4 "A"
 *   insn=0x0000000000219D70 string=0x0000000000219E04 "A"
 *   insn=0x0000000000219D70 string=0x0000000000219E1C "A"
 *   insn=0x0000000000219D74 string=0x0000000000583AB9 "pickup"
 *   insn=0x0000000000219D84 string=0x0000000000219D88 "*"
 *   insn=0x0000000000219D88 string=0x0000000000219E30 "h"
 *   insn=0x0000000000219D8C string=0x0000000000583AC9 "collectable"
 *   insn=0x0000000000219D9C string=0x0000000000219DA0 "$"
 *   insn=0x0000000000219DA4 string=0x000000000059680E "use"
 *   insn=0x0000000000219DBC string=0x0000000000583AEC "none"
 *   insn=0x0000000000219DC8 string=0x0000000000219DCC "{3"
 *   insn=0x0000000000219DD4 string=0x0000000000583AC0 "pushable"
 *   insn=0x0000000000219DE0 string=0x0000000000219DE4 "u3"
 *   insn=0x0000000000219DEC string=0x00000000005948C9 "portal"
 *   insn=0x0000000000219DF8 string=0x0000000000219DFC "o3"
 *   insn=0x0000000000219E04 string=0x0000000000583AD5 "blocksDamage"
 *   insn=0x0000000000219E10 string=0x0000000000219E14 "i3"
 *   insn=0x0000000000219E1C string=0x0000000000583AE2 "grabbable"
 *   insn=0x0000000000219E28 string=0x0000000000219E2C "c3"
 *   insn=0x0000000000219E3C string=0x0000000000219E50 " q"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::BindingValue::ValueWithInt@<X0>(
        Caver::BindingValue *a1@<X0>,
        __int64 a2@<X1>,
        __int64 *a3@<X8>)
{
  __int64 v5; // x0
  _QWORD *v6; // x21
  __int64 v7; // x8
  __int64 v8; // x8
  _QWORD *v10; // [xsp+30h] [xbp-38h]
  __int64 v11; // [xsp+38h] [xbp-30h]

  _ReadStatusReg(TPIDR_EL0);
  Caver::BindingValue::ValueWithInt(a3, a1, a2);
  v5 = a3[3];
  if ( !v5 )
  {
    v10 = (_QWORD *)operator new(8u);
    *v10 = &byte_6FD2F8;
    boost::detail::shared_count::shared_count<std::string>();
    boost::detail::sp_enable_shared_from_this();
    v6 = (_QWORD *)a3[4];
    a3[3] = (__int64)v10;
    a3[4] = v11;
    if ( v6 )
    {
      v7 = v6[1] - 1LL;
      v6[1] = v7;
      if ( !v7 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
        v8 = v6[2] - 1LL;
        v6[2] = v8;
        if ( !v8 )
          (*(void (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6);
      }
    }
    v5 = a3[3];
  }
  return sub_56A6A8(v5, a2);
}

