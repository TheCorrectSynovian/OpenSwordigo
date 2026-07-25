/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002147CC
 * Mangled: _ZN5Caver12BindingValueD2Ev
 * Demangled: Caver::BindingValue::~BindingValue()
 *
 * Callers: 2
 *   0x00000000001F7480  Caver::BindingValue::~BindingValue()
 *   0x0000000000214220  Caver::BoneControlledCollisionShapeComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *
 * Callees: 3
 *   0x00000000001F6DC0  Caver::BoneControlledCollisionShapeComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 25
 *   insn=0x00000000002147D8 string=0x00000000002147DC "t"
 *   insn=0x00000000002147DC string=0x00000000002147E0 "4"
 *   insn=0x00000000002147E0 string=0x0000000000214824 "s\n@"
 *   insn=0x00000000002147E4 string=0x00000000002147E8 ""
 *   insn=0x00000000002147F4 string=0x00000000002147F8 "\t@"
 *   insn=0x0000000000214804 string=0x0000000000214808 ""
 *   insn=0x0000000000214814 string=0x0000000000214818 "@"
 *   insn=0x0000000000214828 string=0x000000000021482C "h"
 *   insn=0x000000000021482C string=0x0000000000214830 ""
 *   insn=0x0000000000214830 string=0x0000000000214834 "h"
 *   insn=0x0000000000214834 string=0x0000000000214838 "!"
 *   insn=0x0000000000214838 string=0x000000000021483C "h"
 *   insn=0x0000000000214840 string=0x0000000000214844 "\t@"
 *   insn=0x0000000000214848 string=0x000000000021484C "h\n@"
 *   insn=0x000000000021484C string=0x0000000000214850 ""
 *   insn=0x0000000000214850 string=0x0000000000214854 "h\n"
 *   insn=0x0000000000214858 string=0x0000000000214868 "h"
 *   insn=0x0000000000214878 string=0x000000000021487C " "
 *   insn=0x0000000000214884 string=0x0000000000214888 "4"
 *   insn=0x000000000021488C string=0x0000000000214890 ""
 *   insn=0x000000000021489C string=0x00000000002148A0 "\t@"
 *   insn=0x00000000002148AC string=0x00000000002148B0 ""
 *   insn=0x00000000002148BC string=0x00000000002148C0 "@"
 *   insn=0x00000000002148D8 string=0x00000000002148DC "9"
 *   insn=0x00000000002148DC string=0x00000000001F6DC0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::BindingValue::~BindingValue(Caver::BindingValue *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8
  _QWORD *v5; // x19
  __int64 v6; // x8
  __int64 v7; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    v3 = v2[1] - 1LL;
    v2[1] = v3;
    if ( !v3 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
      v4 = v2[2] - 1LL;
      v2[2] = v4;
      if ( !v4 )
        (*(void (__fastcall **)(_QWORD *))(*v2 + 24LL))(v2);
    }
  }
  v5 = (_QWORD *)*((_QWORD *)this + 2);
  if ( v5 )
  {
    v6 = v5[1] - 1LL;
    v5[1] = v6;
    if ( !v6 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
      v7 = v5[2] - 1LL;
      v5[2] = v7;
      if ( !v7 )
        (*(void (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
    }
  }
}

