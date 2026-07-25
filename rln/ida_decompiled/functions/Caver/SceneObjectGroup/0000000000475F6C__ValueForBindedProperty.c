/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000475F6C
 * Mangled: _ZN5Caver16SceneObjectGroup22ValueForBindedPropertyEi
 * Demangled: Caver::SceneObjectGroup::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x00000000001F52F0  Caver::SceneObjectGroup::ValueForBindedProperty(int)
 *
 * Callees: 9
 *   0x00000000001F52F0  Caver::SceneObjectGroup::ValueForBindedProperty(int)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA5F0  Caver::BindingValue::ValueWithProgram(Caver::Program const&)
 *   0x00000000001FE4F0  Caver::BindingValue::ValueWithBool(bool)
 *   0x00000000001FFB70  Caver::Program::~Program()
 *   0x0000000000200540  Caver::BindingValue::ValueWithString(std::string const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 26
 *   insn=0x0000000000475F7C string=0x0000000000475F80 "U"
 *   insn=0x0000000000475F88 string=0x0000000000475F8C "?"
 *   insn=0x0000000000475F90 string=0x0000000000475F94 "("
 *   insn=0x0000000000475F94 string=0x0000000000475F98 "\t\t"
 *   insn=0x0000000000475F98 string=0x0000000000595EA8 ""
 *   insn=0x0000000000475F9C string=0x0000000000475FA0 ")"
 *   insn=0x0000000000475FA0 string=0x0000000000475FA4 "(y"
 *   insn=0x0000000000475FA4 string=0x0000000000475FA8 ""
 *   insn=0x0000000000475FB4 string=0x0000000000475FB8 "b)"
 *   insn=0x0000000000475FB8 string=0x0000000000475FBC "."
 *   insn=0x0000000000475FC0 string=0x0000000000475FC4 "4"
 *   insn=0x0000000000475FC4 string=0x0000000000476048 "h"
 *   insn=0x0000000000475FCC string=0x0000000000475FD0 "V"
 *   insn=0x0000000000475FE4 string=0x0000000000475FE8 "\t"
 *   insn=0x0000000000475FE8 string=0x0000000000475FEC ")"
 *   insn=0x0000000000475FEC string=0x0000000000475FF0 "\t"
 *   insn=0x0000000000476004 string=0x0000000000476008 "\t"
 *   insn=0x0000000000476008 string=0x000000000047600C ")"
 *   insn=0x000000000047600C string=0x0000000000476010 "\t"
 *   insn=0x000000000047602C string=0x0000000000476030 "0!"
 *   insn=0x0000000000476048 string=0x000000000047604C ""
 *   insn=0x0000000000476054 string=0x0000000000476058 "a"
 *   insn=0x0000000000476064 string=0x0000000000476068 "b"
 *   insn=0x0000000000476068 string=0x00000000001FA5F0 "0'"
 *   insn=0x0000000000476098 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004760B8 string=0x00000000001F52F0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::SceneObjectGroup::ValueForBindedProperty(
        Caver::SceneObjectGroup *this@<X0>,
        const Caver::Program *a2@<X1>,
        __int64 a3@<X8>)
{
  _QWORD *v3; // x20
  __int64 v4; // x8
  __int64 v5; // x8
  Caver::BindingValue *v6; // x0
  char *v7; // [xsp+0h] [xbp-50h] BYREF
  __int64 v8; // [xsp+8h] [xbp-48h]
  __int64 v9; // [xsp+10h] [xbp-40h]
  __int64 v10; // [xsp+18h] [xbp-38h]
  __int64 v11; // [xsp+20h] [xbp-30h]
  __int64 v12; // [xsp+28h] [xbp-28h]

  v12 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  switch ( (int)a2 )
  {
    case 0:
      Caver::BindingValue::ValueWithString();
      return;
    case 1:
      v6 = (Caver::BindingValue *)*((unsigned __int8 *)this + 72);
      goto LABEL_11;
    case 2:
      v6 = (Caver::BindingValue *)*((unsigned __int8 *)this + 73);
      goto LABEL_11;
    case 3:
      v6 = (Caver::BindingValue *)*((unsigned __int8 *)this + 75);
LABEL_11:
      Caver::BindingValue::ValueWithBool(v6, (bool)a2);
      break;
    case 4:
      v3 = (_QWORD *)*((_QWORD *)this + 5);
      if ( v3 )
      {
        sub_56A528(&v7, v3);
        v8 = v3[1];
        v4 = v3[2];
        v9 = v4;
        if ( v4 )
          ++*(_QWORD *)(v4 + 8);
        v10 = v3[3];
        v5 = v3[4];
        v11 = v5;
        if ( v5 )
          ++*(_QWORD *)(v5 + 8);
      }
      else
      {
        v10 = 0;
        v11 = 0;
        v9 = 0;
        v7 = &byte_6FD2F8;
        v8 = 0;
      }
      Caver::BindingValue::ValueWithProgram((Caver::BindingValue *)&v7, a2);
      Caver::Program::~Program((Caver::Program *)&v7);
      break;
    default:
      *(_DWORD *)a3 = 0;
      *(_QWORD *)(a3 + 24) = 0;
      *(_QWORD *)(a3 + 32) = 0;
      *(_QWORD *)(a3 + 8) = 0;
      *(_QWORD *)(a3 + 16) = 0;
      break;
  }
}

