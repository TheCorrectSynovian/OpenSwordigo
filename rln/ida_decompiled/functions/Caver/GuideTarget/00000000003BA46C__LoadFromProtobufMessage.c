/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003BA46C
 * Mangled: _ZN5Caver11GuideTarget23LoadFromProtobufMessageERKNS_5Proto11GuideTargetE
 * Demangled: Caver::GuideTarget::LoadFromProtobufMessage(Caver::Proto::GuideTarget const&)
 *
 * Callers: 1
 *   0x00000000001FC880  Caver::GuideTarget::LoadFromProtobufMessage(Caver::Proto::GuideTarget const&)
 *
 * Callees: 13
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F65F0  Caver::Proto::GuideTarget_LevelObject::GuideTarget_LevelObject(Caver::Proto::GuideTarget_LevelObject const&)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F9170  Caver::Proto::GuideTarget_LevelObject::~GuideTarget_LevelObject()
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000001FE720  std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::operator[](std::string const&)
 *   0x0000000000203350  Caver::Proto::GuideTarget_LevelObject::GuideTarget_LevelObject(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003BA84C  Caver::Item::Item(void)
 *   0x000000000054C6A0  sub_54C6A0
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 116
 *   insn=0x00000000003BA480 string=0x00000000003BA484 "V"
 *   insn=0x00000000003BA494 string=0x00000000003BA498 "h"
 *   insn=0x00000000003BA498 string=0x00000000003BA49C "\t"
 *   insn=0x00000000003BA49C string=0x00000000003BA4A0 "?"
 *   insn=0x00000000003BA4A0 string=0x00000000003BA4A4 "H"
 *   insn=0x00000000003BA4A4 string=0x00000000003BA4AC "a\n@"
 *   insn=0x00000000003BA4B0 string=0x00000000003BA4B4 "}"
 *   insn=0x00000000003BA4B4 string=0x00000000003BA4B8 "a"
 *   insn=0x00000000003BA4BC string=0x00000000003BA4C0 "z"
 *   insn=0x00000000003BA4C0 string=0x00000000003BA4C4 "a"
 *   insn=0x00000000003BA4C8 string=0x00000000003BA4CC "w"
 *   insn=0x00000000003BA4CC string=0x00000000003BA4D0 "a"
 *   insn=0x00000000003BA4D4 string=0x00000000003BA4D8 "t"
 *   insn=0x00000000003BA4D8 string=0x00000000003BA4DC "h"
 *   insn=0x00000000003BA4E0 string=0x00000000003BA4E4 "hB@"
 *   insn=0x00000000003BA4E8 string=0x00000000003BA4EC "K"
 *   insn=0x00000000003BA4F4 string=0x00000000003BA4F8 "h"
 *   insn=0x00000000003BA500 string=0x00000000003BA504 ";"
 *   insn=0x00000000003BA504 string=0x00000000001F65F0 "0'"
 *   insn=0x00000000003BA514 string=0x00000000003BA518 "d"
 *   insn=0x00000000003BA520 string=0x00000000003BA524 "hB"
 *   insn=0x00000000003BA520 string=0x00000000001F9170 "0'"
 *   insn=0x00000000003BA52C string=0x00000000003BA530 "K"
 *   insn=0x00000000003BA540 string=0x00000000003BA55C "]"
 *   insn=0x00000000003BA55C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003BA570 string=0x00000000003BA574 "vO"
 *   insn=0x00000000003BA59C string=0x00000000003BA5A0 "hr@"
 *   insn=0x00000000003BA5A0 string=0x00000000003BA5A4 "*"
 *   insn=0x00000000003BA5A4 string=0x00000000003BA5A8 "_"
 *   insn=0x00000000003BA5AC string=0x00000000003BA5B0 ""
 *   insn=0x00000000003BA5AC string=0x00000000003BA5BC "I"
 *   insn=0x00000000003BA5B0 string=0x00000000003BA5B4 "hr"
 *   insn=0x00000000003BA5B4 string=0x00000000003BA5B8 "i"
 *   insn=0x00000000003BA5BC string=0x00000000003BA5C0 "`\n@"
 *   insn=0x00000000003BA5C0 string=0x00000000003BA5C4 ")"
 *   insn=0x00000000003BA5C8 string=0x00000000003BA5CC ""
 *   insn=0x00000000003BA5CC string=0x00000000003BA5D0 "hr"
 *   insn=0x00000000003BA5E0 string=0x00000000003BA5E4 "H"
 *   insn=0x00000000003BA5E0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003BA5E4 string=0x00000000003BA5E8 ""
 *   insn=0x00000000003BA5E8 string=0x00000000003BA5EC "a"
 *   insn=0x00000000003BA5EC string=0x00000000003BA5F0 ""
 *   insn=0x00000000003BA5F0 string=0x00000000003BA5F4 "`\n"
 *   insn=0x00000000003BA5F8 string=0x00000000003BA5FC "+"
 *   insn=0x00000000003BA5FC string=0x00000000003BA600 "i"
 *   insn=0x00000000003BA600 string=0x00000000003BA604 "hr@"
 *   insn=0x00000000003BA604 string=0x00000000003BA608 "`"
 *   insn=0x00000000003BA608 string=0x00000000003BA60C ")"
 *   insn=0x00000000003BA610 string=0x00000000003BA614 ""
 *   insn=0x00000000003BA614 string=0x00000000003BA618 "hr"
 *   insn=0x00000000003BA628 string=0x00000000003BA62C "H"
 *   insn=0x00000000003BA62C string=0x00000000003BA630 ""
 *   insn=0x00000000003BA630 string=0x00000000003BA634 "a"
 *   insn=0x00000000003BA634 string=0x00000000003BA638 ""
 *   insn=0x00000000003BA638 string=0x00000000003BA63C "`"
 *   insn=0x00000000003BA644 string=0x00000000003BA648 "i"
 *   insn=0x00000000003BA648 string=0x00000000003BA64C "hr@"
 *   insn=0x00000000003BA64C string=0x00000000003BA650 "`"
 *   insn=0x00000000003BA650 string=0x00000000003BA654 ")"
 *   insn=0x00000000003BA658 string=0x00000000003BA65C ""
 *   insn=0x00000000003BA65C string=0x00000000003BA660 "hr"
 *   insn=0x00000000003BA670 string=0x00000000003BA674 "H"
 *   insn=0x00000000003BA674 string=0x00000000003BA678 ""
 *   insn=0x00000000003BA678 string=0x00000000003BA67C "a"
 *   insn=0x00000000003BA67C string=0x00000000003BA680 ""
 *   insn=0x00000000003BA680 string=0x00000000003BA684 "`"
 *   insn=0x00000000003BA688 string=0x00000000003BA68C ""
 *   insn=0x00000000003BA694 string=0x00000000003BA698 ""
 *   insn=0x00000000003BA698 string=0x00000000003BA69C "H"
 *   insn=0x00000000003BA69C string=0x00000000003BA6A0 "I"
 *   insn=0x00000000003BA6A0 string=0x00000000003BA6A4 "hr@"
 *   insn=0x00000000003BA6A4 string=0x00000000003BA6A8 "`"
 *   insn=0x00000000003BA6A8 string=0x00000000003BA6AC ")"
 *   insn=0x00000000003BA6AC string=0x00000000003BA6B0 ""
 *   insn=0x00000000003BA6B0 string=0x00000000003BA6B4 "hr"
 *   insn=0x00000000003BA6C4 string=0x00000000003BA6C8 "H"
 *   insn=0x00000000003BA6C8 string=0x00000000003BA6CC ""
 *   insn=0x00000000003BA6CC string=0x00000000003BA6D0 "a"
 *   insn=0x00000000003BA6D0 string=0x00000000003BA6D4 ""
 *   insn=0x00000000003BA6D4 string=0x00000000003BA6D8 "`"
 *   insn=0x00000000003BA6E8 string=0x00000000003BA6EC "hr@"
 *   insn=0x00000000003BA6F0 string=0x00000000003BA6F4 "i"
 *   insn=0x00000000003BA6F4 string=0x00000000003BA6F8 ""
 *   insn=0x00000000003BA6F8 string=0x00000000003BA6FC "hr"
 *   insn=0x00000000003BA70C string=0x00000000003BA710 "y"
 *   insn=0x00000000003BA710 string=0x00000000003BA714 "Z"
 *   insn=0x00000000003BA714 string=0x00000000003BA718 "9"
 *   insn=0x00000000003BA718 string=0x00000000003BA71C "Z"
 *   insn=0x00000000003BA71C string=0x00000000003BA720 "|"
 *   insn=0x00000000003BA724 string=0x00000000003BA728 "t"
 *   insn=0x00000000003BA728 string=0x00000000003BA72C "[c"
 *   insn=0x00000000003BA72C string=0x00000000003BA730 "i"H))}@"
 *   insn=0x00000000003BA730 string=0x00000000003BA734 ")}@"
 *   insn=0x00000000003BA734 string=0x00000000003BA738 "?"
 *   insn=0x00000000003BA73C string=0x00000000003BA740 "h"
 *   insn=0x00000000003BA73C string=0x00000000003BA754 "iJ@"
 *   insn=0x00000000003BA740 string=0x00000000003BA744 "*"
 *   insn=0x00000000003BA744 string=0x00000000003BA748 "jB"
 *   insn=0x00000000003BA75C string=0x00000000003BA770 ""
 *   insn=0x00000000003BA764 string=0x00000000003BA768 "n"
 *   insn=0x00000000003BA768 string=0x00000000003BA76C "hF@"
 *   insn=0x00000000003BA768 string=0x00000000001FAD20 "0'"
 *   insn=0x00000000003BA774 string=0x00000000003BA778 "hF"
 *   insn=0x00000000003BA784 string=0x00000000003BA788 "hB"
 *   insn=0x00000000003BA788 string=0x00000000003BA78C "i"
 *   insn=0x00000000003BA78C string=0x00000000003BA790 "\n"
 *   insn=0x00000000003BA790 string=0x00000000003BA794 "jB"
 *   insn=0x00000000003BA794 string=0x00000000003BA798 "6y("
 *   insn=0x00000000003BA7A4 string=0x00000000003BA7A8 ""
 *   insn=0x00000000003BA7BC string=0x00000000003BA7C0 ""
 *   insn=0x00000000003BA7D8 string=0x00000000003BA7DC ""
 *   insn=0x00000000003BA7EC string=0x00000000003BA7F0 "|"
 *   insn=0x00000000003BA7F0 string=0x00000000003BA7F4 "Hc"
 *   insn=0x00000000003BA7F4 string=0x00000000003BA7F8 ""
 *   insn=0x00000000003BA840 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003BA848 string=0x00000000003BA84C "H"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GuideTarget::LoadFromProtobufMessage(
        Caver::GuideTarget *this,
        const Caver::Proto::GuideTarget *a2)
{
  int v4; // w8
  __int64 v5; // x23
  __int64 v6; // x0
  _QWORD v7[6]; // [xsp+60h] [xbp-60h] BYREF

  v7[5] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *((_DWORD *)a2 + 3);
  if ( (unsigned int)(v4 - 1) <= 3 )
    *(_DWORD *)this = v4;
  sub_56A6A8((char *)this + 8);
  sub_56A6A8((char *)this + 16);
  sub_56A6A8((char *)this + 24);
  sub_56A6A8((char *)this + 32);
  *((_BYTE *)this + 40) = *((_BYTE *)a2 + 48);
  if ( *((int *)a2 + 16) >= 1 )
  {
    v5 = 0;
    do
    {
      Caver::Proto::GuideTarget_LevelObject::GuideTarget_LevelObject(
        (Caver::Proto::GuideTarget_LevelObject *)v7,
        *(const Caver::Proto::GuideTarget_LevelObject **)(*((_QWORD *)a2 + 7) + 8 * v5));
      v6 = std::map<std::string,std::string>::operator[]();
      sub_56A6A8(v6);
      Caver::Proto::GuideTarget_LevelObject::~GuideTarget_LevelObject((Caver::Proto::GuideTarget_LevelObject *)v7);
      ++v5;
    }
    while ( v5 < *((int *)a2 + 16) );
  }
}

