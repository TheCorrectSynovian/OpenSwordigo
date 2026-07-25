/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000045CFD4
 * Mangled: _ZN5Caver13ObjectLibrary7ProcessEPNS_22SceneProcessingContextE
 * Demangled: Caver::ObjectLibrary::Process(Caver::SceneProcessingContext *)
 *
 * Callers: 1
 *   0x00000000001FDB80  Caver::ObjectLibrary::Process(Caver::SceneProcessingContext *)
 *
 * Callees: 16
 *   0x00000000001F3780  std::map<std::string,Caver::ObjectLibrary::ObjectTemplateInfo,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::operator[](std::string const&)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8D10  boost::shared_ptr<Caver::Proto::ObjectTemplate>::shared_ptr<Caver::Proto::ObjectTemplate>(Caver::Proto::ObjectTemplate *)
 *   0x00000000001F90D0  Caver::Proto::ObjectTemplate::ObjectTemplate(void)
 *   0x00000000001FB8C0  Caver::ObjectTemplate::ObjectTemplate(void)
 *   0x00000000001FF0C0  Caver::ObjectTemplate::Process(void)
 *   0x00000000001FF540  std::_Rb_tree<std::string,std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::find(std::string const&)
 *   0x0000000000201380  Caver::ObjectLibrary::TemplateForName(std::string const&,bool)
 *   0x0000000000202310  Caver::ObjectTemplate::LoadFromProtobufMessage(Caver::Proto::ObjectTemplate const&)
 *   0x0000000000202390  Caver::ObjectTemplate::SaveToProtobufMessage(Caver::Proto::ObjectTemplate *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000045D638  Caver::ObjectLibrary::RemoveTemplate(Caver::ObjectTemplate *)
 *   0x000000000054C640  sub_54C640
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 146
 *   insn=0x000000000045CFE8 string=0x000000000045CFEC "V"
 *   insn=0x000000000045CFF4 string=0x000000000045CFF8 "wB"
 *   insn=0x000000000045CFFC string=0x000000000045D000 "t"
 *   insn=0x000000000045D01C string=0x000000000045D020 "`"
 *   insn=0x000000000045D03C string=0x000000000045D040 " "
 *   insn=0x000000000045D040 string=0x000000000045D044 "u"
 *   insn=0x000000000045D048 string=0x000000000045D04C ""
 *   insn=0x000000000045D05C string=0x000000000045D060 ""
 *   insn=0x000000000045D094 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000045D098 string=0x000000000045D09C "5"
 *   insn=0x000000000045D0A0 string=0x000000000045D0A4 ""
 *   insn=0x000000000045D0B0 string=0x000000000045D0B4 ""
 *   insn=0x000000000045D0E4 string=0x000000000045D0E8 "X"
 *   insn=0x000000000045D0E8 string=0x000000000045D0EC "\t"
 *   insn=0x000000000045D104 string=0x000000000045D108 "i"
 *   insn=0x000000000045D10C string=0x000000000045D110 "H"
 *   insn=0x000000000045D110 string=0x000000000045D230 ""
 *   insn=0x000000000045D118 string=0x000000000045D11C "\t"
 *   insn=0x000000000045D12C string=0x000000000045D140 "w"
 *   insn=0x000000000045D130 string=0x000000000045D134 "h"
 *   insn=0x000000000045D134 string=0x000000000045D138 "h"
 *   insn=0x000000000045D138 string=0x000000000045D13C ":"
 *   insn=0x000000000045D13C string=0x000000000045D224 "\t\t@"
 *   insn=0x000000000045D14C string=0x000000000045D150 "?"
 *   insn=0x000000000045D150 string=0x000000000045D154 "@"
 *   insn=0x000000000045D158 string=0x000000000045D15C " "
 *   insn=0x000000000045D174 string=0x000000000045D184 "7"
 *   insn=0x000000000045D178 string=0x000000000045D17C ""
 *   insn=0x000000000045D188 string=0x000000000045D18C ""
 *   insn=0x000000000045D198 string=0x000000000045D19C ""
 *   insn=0x000000000045D1A8 string=0x000000000045D1AC "9C"
 *   insn=0x000000000045D1AC string=0x000000000045D1B0 "_"
 *   insn=0x000000000045D1B4 string=0x000000000045D1B8 "!"
 *   insn=0x000000000045D1B8 string=0x000000000045D1BC "2"
 *   insn=0x000000000045D1C0 string=0x000000000045D1C4 "a"
 *   insn=0x000000000045D1C4 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000045D1CC string=0x00000000001FB8C0 "0'"
 *   insn=0x000000000045D1D0 string=0x000000000045D1D4 ""
 *   insn=0x000000000045D1E0 string=0x000000000045D1E4 " "
 *   insn=0x000000000045D1E4 string=0x000000000045D1E8 "@"
 *   insn=0x000000000045D1E8 string=0x000000000045D1EC ""
 *   insn=0x000000000045D1EC string=0x000000000045D1F0 ""
 *   insn=0x000000000045D1F4 string=0x000000000045D1F8 ""
 *   insn=0x000000000045D1F8 string=0x000000000045D1FC ""
 *   insn=0x000000000045D20C string=0x000000000045D210 "@"
 *   insn=0x000000000045D218 string=0x000000000045D21C "h"
 *   insn=0x000000000045D224 string=0x000000000045D228 ")"
 *   insn=0x000000000045D228 string=0x000000000045D22C "\t\t"
 *   insn=0x000000000045D23C string=0x000000000045D2AC "\td"
 *   insn=0x000000000045D264 string=0x000000000045D268 ""
 *   insn=0x000000000045D274 string=0x000000000045D278 ""
 *   insn=0x000000000045D284 string=0x000000000045D288 "u"
 *   insn=0x000000000045D288 string=0x000000000045D28C "5"
 *   insn=0x000000000045D29C string=0x000000000045D2A0 ""
 *   insn=0x000000000045D2C8 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000045D2CC string=0x000000000045D2D0 "}"
 *   insn=0x000000000045D2DC string=0x000000000045D2E0 ""
 *   insn=0x000000000045D2E4 string=0x000000000045D2E8 "!"
 *   insn=0x000000000045D2EC string=0x000000000045D2F0 ""
 *   insn=0x000000000045D304 string=0x000000000045D308 "7"
 *   insn=0x000000000045D30C string=0x000000000045D310 ""
 *   insn=0x000000000045D31C string=0x000000000045D320 ""
 *   insn=0x000000000045D32C string=0x000000000045D330 "e"
 *   insn=0x000000000045D350 string=0x000000000045D354 "Z"
 *   insn=0x000000000045D354 string=0x000000000045D358 "H"
 *   insn=0x000000000045D370 string=0x000000000045D374 ""
 *   insn=0x000000000045D38C string=0x000000000045D390 "Po"
 *   insn=0x000000000045D390 string=0x00000000001F90D0 "0'"
 *   insn=0x000000000045D39C string=0x000000000045D3A0 "\n"
 *   insn=0x000000000045D3A0 string=0x00000000001F8D10 "0'"
 *   insn=0x000000000045D3C4 string=0x00000000001F3780 "P'"
 *   insn=0x000000000045D3CC string=0x000000000045D3D0 "h"
 *   insn=0x000000000045D3D0 string=0x000000000045D3D4 ""
 *   insn=0x000000000045D3D4 string=0x000000000045D3D8 "h"
 *   insn=0x000000000045D3E0 string=0x000000000045D3E4 "9"
 *   insn=0x000000000045D3E4 string=0x000000000045D3E8 "(@"
 *   insn=0x000000000045D3E8 string=0x000000000045D3EC ""
 *   insn=0x000000000045D3EC string=0x000000000045D3F0 "("
 *   insn=0x000000000045D3F4 string=0x000000000045D3F8 "("
 *   insn=0x000000000045D3F8 string=0x000000000045D3FC "\t@"
 *   insn=0x000000000045D404 string=0x000000000045D408 "(@"
 *   insn=0x000000000045D408 string=0x000000000045D40C ""
 *   insn=0x000000000045D40C string=0x000000000045D410 "("
 *   insn=0x000000000045D414 string=0x000000000045D418 "("
 *   insn=0x000000000045D418 string=0x000000000045D41C "@"
 *   insn=0x000000000045D42C string=0x000000000045D430 ""
 *   insn=0x000000000045D440 string=0x000000000045D444 "@"
 *   insn=0x000000000045D444 string=0x000000000045D448 ""
 *   insn=0x000000000045D448 string=0x000000000045D44C ""
 *   insn=0x000000000045D450 string=0x000000000045D454 ""
 *   insn=0x000000000045D454 string=0x000000000045D458 ""
 *   insn=0x000000000045D464 string=0x000000000045D468 "4"
 *   insn=0x000000000045D468 string=0x000000000045D48C "3"
 *   insn=0x000000000045D46C string=0x000000000045D470 ""
 *   insn=0x000000000045D47C string=0x000000000045D480 ""
 *   insn=0x000000000045D48C string=0x000000000045D490 "h"
 *   insn=0x000000000045D48C string=0x000000000045D4D0 "H"
 *   insn=0x000000000045D490 string=0x000000000045D494 ""
 *   insn=0x000000000045D494 string=0x000000000045D498 "h"
 *   insn=0x000000000045D49C string=0x000000000045D4A0 "h"
 *   insn=0x000000000045D4A4 string=0x000000000045D4A8 "\t@"
 *   insn=0x000000000045D4AC string=0x000000000045D4B0 "h\n@"
 *   insn=0x000000000045D4B0 string=0x000000000045D4B4 ""
 *   insn=0x000000000045D4B4 string=0x000000000045D4B8 "h\n"
 *   insn=0x000000000045D4BC string=0x000000000045D4C0 "h"
 *   insn=0x000000000045D4C4 string=0x000000000045D4C8 "@"
 *   insn=0x000000000045D4DC string=0x000000000045D4FC "uc"
 *   insn=0x000000000045D504 string=0x000000000045D508 "h"
 *   insn=0x000000000045D508 string=0x000000000045D50C ""
 *   insn=0x000000000045D50C string=0x000000000045D510 "h"
 *   insn=0x000000000045D514 string=0x000000000045D518 "h"
 *   insn=0x000000000045D518 string=0x000000000045D51C "\t@"
 *   insn=0x000000000045D524 string=0x000000000045D528 "h\n@"
 *   insn=0x000000000045D528 string=0x000000000045D52C ""
 *   insn=0x000000000045D52C string=0x000000000045D530 "h\n"
 *   insn=0x000000000045D534 string=0x000000000045D538 "h"
 *   insn=0x000000000045D538 string=0x000000000045D53C "@"
 *   insn=0x000000000045D544 string=0x000000000045D548 "#"
 *   insn=0x000000000045D554 string=0x000000000045D558 "Vg"
 *   insn=0x000000000045D560 string=0x000000000045D564 ""
 *   insn=0x000000000045D564 string=0x000000000045D590 "3"
 *   insn=0x000000000045D568 string=0x000000000045D56C "4"
 *   insn=0x000000000045D570 string=0x000000000045D574 ""
 *   insn=0x000000000045D580 string=0x000000000045D584 ""
 *   insn=0x000000000045D590 string=0x000000000045D594 "h"
 *   insn=0x000000000045D594 string=0x000000000045D598 ""
 *   insn=0x000000000045D598 string=0x000000000045D59C "h"
 *   insn=0x000000000045D5A0 string=0x000000000045D5A4 "h"
 *   insn=0x000000000045D5A4 string=0x000000000045D5A8 "\t@"
 *   insn=0x000000000045D5B0 string=0x000000000045D5B4 "h\n@"
 *   insn=0x000000000045D5B4 string=0x000000000045D5B8 ""
 *   insn=0x000000000045D5B8 string=0x000000000045D5BC "h\n"
 *   insn=0x000000000045D5C0 string=0x000000000045D5C4 "h"
 *   insn=0x000000000045D5C4 string=0x000000000045D5C8 "@"
 *   insn=0x000000000045D5E0 string=0x000000000045D5E4 "h"
 *   insn=0x000000000045D5E4 string=0x000000000045D5E8 ""
 *   insn=0x000000000045D5E8 string=0x000000000045D5EC "h"
 *   insn=0x000000000045D5F0 string=0x000000000045D5F4 "h"
 *   insn=0x000000000045D5F4 string=0x000000000045D5F8 "\t@"
 *   insn=0x000000000045D600 string=0x000000000045D604 "h\n@"
 *   insn=0x000000000045D604 string=0x000000000045D608 ""
 *   insn=0x000000000045D608 string=0x000000000045D60C "h\n"
 *   insn=0x000000000045D610 string=0x000000000045D614 "h"
 *   insn=0x000000000045D614 string=0x000000000045D618 "@"
 *   insn=0x000000000045D630 string=0x000000000045D634 "F"
 *   insn=0x000000000045D634 string=0x000000000045D638 "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ObjectLibrary::Process(__int64 result)
{
  __int64 v1; // x23
  __int64 v2; // x20
  int v3; // w8
  Caver::ObjectTemplate *v4; // [xsp+C8h] [xbp-40h]

  v1 = result + 16;
  _ReadStatusReg(TPIDR_EL0);
  v2 = *(_QWORD *)(result + 32);
  if ( v2 != result + 16 )
  {
    do
    {
      Caver::ObjectLibrary::TemplateForName();
      Caver::ObjectTemplate::Process(v4);
      if ( v4 )
      {
        v3 = *((_DWORD *)v4 + 2) - 1;
        *((_DWORD *)v4 + 2) = v3;
        if ( !v3 )
          (*(void (__fastcall **)())(*(_QWORD *)v4 + 8LL))();
      }
      result = sub_54C640(v2);
      v2 = result;
    }
    while ( result != v1 );
  }
  return result;
}

