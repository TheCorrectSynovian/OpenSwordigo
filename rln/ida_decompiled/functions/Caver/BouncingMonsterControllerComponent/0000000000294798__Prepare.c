/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000294798
 * Mangled: _ZN5Caver34BouncingMonsterControllerComponent7PrepareEv
 * Demangled: Caver::BouncingMonsterControllerComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FCB00  Caver::AnimBlendNode::AnimBlendNode(boost::intrusive_ptr<Caver::AnimNode> const&,boost::intrusive_ptr<Caver::AnimNode> const&,float,float)
 *   0x00000000001FD020  Caver::EntityComponent::SetFacingDirection(int)
 *   0x00000000001FF140  Caver::MonsterControllerComponent::Prepare(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 56
 *   insn=0x00000000002947A8 string=0x00000000002947AC "V"
 *   insn=0x00000000002947B8 string=0x00000000002947BC "a"
 *   insn=0x00000000002947D0 string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002947D4 string=0x00000000002947D8 "u\n"
 *   insn=0x00000000002947FC string=0x0000000000294800 "x"
 *   insn=0x0000000000294800 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000029481C string=0x0000000000294820 ""
 *   insn=0x0000000000294830 string=0x0000000000294834 "@"
 *   insn=0x0000000000294834 string=0x0000000000294838 ""
 *   insn=0x0000000000294838 string=0x000000000029483C ""
 *   insn=0x0000000000294844 string=0x000000000029485C ""
 *   insn=0x0000000000294860 string=0x0000000000294864 ""
 *   insn=0x0000000000294870 string=0x0000000000294874 "@"
 *   insn=0x0000000000294874 string=0x0000000000294878 ""
 *   insn=0x0000000000294878 string=0x000000000029487C ""
 *   insn=0x000000000029489C string=0x00000000002948A0 "h\n@"
 *   insn=0x000000000029489C string=0x00000000001FCB00 "0'"
 *   insn=0x00000000002948A0 string=0x00000000002948A4 ""
 *   insn=0x00000000002948A4 string=0x00000000002948A8 "h\n"
 *   insn=0x00000000002948B0 string=0x00000000002948B4 " "
 *   insn=0x00000000002948B4 string=0x00000000002948B8 "@"
 *   insn=0x00000000002948B8 string=0x00000000002948BC ""
 *   insn=0x00000000002948BC string=0x00000000002948C0 ""
 *   insn=0x00000000002948C4 string=0x00000000002948C8 ""
 *   insn=0x00000000002948C8 string=0x00000000002948CC ""
 *   insn=0x00000000002948D8 string=0x00000000002948DC " "
 *   insn=0x00000000002948DC string=0x00000000002948E0 "@"
 *   insn=0x00000000002948E0 string=0x00000000002948E4 ""
 *   insn=0x00000000002948E4 string=0x00000000002948E8 ""
 *   insn=0x00000000002948EC string=0x00000000002948F0 ""
 *   insn=0x00000000002948F0 string=0x00000000002948F4 ""
 *   insn=0x0000000000294904 string=0x0000000000294908 "@"
 *   insn=0x0000000000294908 string=0x000000000029490C ""
 *   insn=0x000000000029490C string=0x0000000000294910 ""
 *   insn=0x0000000000294914 string=0x0000000000294918 ""
 *   insn=0x0000000000294918 string=0x000000000029491C ""
 *   insn=0x0000000000294930 string=0x0000000000294948 "b"
 *   insn=0x0000000000294948 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000029495C string=0x0000000000294960 "\t\t@"
 *   insn=0x0000000000294960 string=0x0000000000294964 ")"
 *   insn=0x0000000000294964 string=0x0000000000294968 "\t\t"
 *   insn=0x0000000000294968 string=0x000000000029496C "!"
 *   insn=0x000000000029496C string=0x0000000000294970 "\t"
 *   insn=0x0000000000294970 string=0x0000000000294974 ")"
 *   insn=0x0000000000294978 string=0x000000000029497C " "
 *   insn=0x0000000000294994 string=0x0000000000294998 "@"
 *   insn=0x0000000000294998 string=0x000000000029499C ""
 *   insn=0x000000000029499C string=0x00000000002949A0 ""
 *   insn=0x00000000002949A4 string=0x00000000002949A8 ""
 *   insn=0x00000000002949A8 string=0x00000000002949AC ""
 *   insn=0x00000000002949B8 string=0x00000000002949BC "="
 *   insn=0x00000000002949BC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002949CC string=0x00000000002949D0 "_"
 *   insn=0x0000000000294A10 string=0x0000000000294A14 "3"
 *   insn=0x0000000000294A24 string=0x0000000000294A28 "~"
 *   insn=0x0000000000294A28 string=0x00000000001FD020 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::BouncingMonsterControllerComponent::Prepare(Caver::BouncingMonsterControllerComponent *this)
{
  __int64 v2; // x21
  _DWORD *result; // x0
  __int64 v4; // x19
  __int64 v5; // x0
  __int64 v6; // x0
  __int64 v7; // x0
  _DWORD *v8; // x0
  int v9; // w8
  int v10; // w8
  int v11; // w8
  _DWORD *v12; // [xsp+28h] [xbp-38h]
  _DWORD *v13; // [xsp+30h] [xbp-30h]

  _ReadStatusReg(TPIDR_EL0);
  Caver::MonsterControllerComponent::Prepare(this);
  v2 = *((_QWORD *)this + 28);
  if ( v2
    || (result = (_DWORD *)Caver::ComponentOutletBase::Connect(
                             (Caver::BouncingMonsterControllerComponent *)((char *)this + 208),
                             this),
        (v2 = *((_QWORD *)this + 28)) != 0) )
  {
    if ( !*((_QWORD *)this + 31) )
    {
      result = (_DWORD *)Caver::ComponentOutletBase::Connect(
                           (Caver::BouncingMonsterControllerComponent *)((char *)this + 232),
                           this);
      if ( !*((_QWORD *)this + 31) )
        return result;
      v2 = *((_QWORD *)this + 28);
    }
    v4 = operator new(0x30u);
    if ( !v2 )
    {
      Caver::ComponentOutletBase::Connect((Caver::BouncingMonsterControllerComponent *)((char *)this + 208), this);
      v2 = *((_QWORD *)this + 28);
    }
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 264LL))(v2);
    v13 = (_DWORD *)v5;
    if ( v5 )
      ++*(_DWORD *)(v5 + 8);
    v6 = *((_QWORD *)this + 31);
    if ( !v6 )
    {
      Caver::ComponentOutletBase::Connect((Caver::BouncingMonsterControllerComponent *)((char *)this + 232), this);
      v6 = *((_QWORD *)this + 31);
    }
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 264LL))(v6);
    v12 = (_DWORD *)v7;
    if ( v7 )
      ++*(_DWORD *)(v7 + 8);
    Caver::AnimBlendNode::AnimBlendNode();
    ++*(_DWORD *)(v4 + 8);
    v8 = (_DWORD *)*((_QWORD *)this + 32);
    *((_QWORD *)this + 32) = v4;
    if ( v8 )
    {
      v9 = v8[2] - 1;
      v8[2] = v9;
      if ( !v9 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 8LL))(v8);
    }
    if ( v12 )
    {
      v10 = v12[2] - 1;
      v12[2] = v10;
      if ( !v10 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v12 + 8LL))(v12);
    }
    result = v13;
    if ( v13 )
    {
      v11 = v13[2] - 1;
      v13[2] = v11;
      if ( !v11 )
        return (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  return result;
}

