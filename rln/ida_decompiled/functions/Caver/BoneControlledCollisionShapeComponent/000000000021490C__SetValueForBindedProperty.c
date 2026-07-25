/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021490C
 * Mangled: _ZN5Caver37BoneControlledCollisionShapeComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::BoneControlledCollisionShapeComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000001FD790  Caver::BoneControlledCollisionShapeComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 8
 *   0x00000000001F3DC0  Caver::CollisionShapeComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FE240  Caver::BoneControlledCollisionShapeComponent::BoneForName(std::string const&)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 52
 *   insn=0x000000000021491C string=0x0000000000214920 "U"
 *   insn=0x000000000021492C string=0x0000000000214930 "?"
 *   insn=0x0000000000214938 string=0x000000000021493C "?"
 *   insn=0x000000000021493C string=0x0000000000214940 "A"
 *   insn=0x0000000000214950 string=0x00000000001F3DC0 "P'"
 *   insn=0x0000000000214968 string=0x000000000021496C "5"
 *   insn=0x0000000000214978 string=0x000000000021497C "(a"
 *   insn=0x0000000000214994 string=0x0000000000214998 "`"
 *   insn=0x000000000021499C string=0x00000000002149A0 "BW"
 *   insn=0x00000000002149DC string=0x00000000002149E0 "J=G"
 *   insn=0x00000000002149E0 string=0x00000000002149E4 ")!"
 *   insn=0x00000000002149E8 string=0x00000000002149EC "*"
 *   insn=0x00000000002149E8 string=0x0000000000214A24 "*"
 *   insn=0x00000000002149EC string=0x00000000002149F0 "K"
 *   insn=0x00000000002149F0 string=0x00000000002149F4 "+"
 *   insn=0x00000000002149F8 string=0x00000000002149FC ""
 *   insn=0x00000000002149FC string=0x0000000000214A30 "_"
 *   insn=0x0000000000214A00 string=0x0000000000214A04 ")=G"
 *   insn=0x0000000000214A04 string=0x0000000000214A08 "!"
 *   insn=0x0000000000214A08 string=0x0000000000214A0C "I"
 *   insn=0x0000000000214A0C string=0x0000000000214A10 "\t"
 *   insn=0x0000000000214A0C string=0x0000000000214A54 "\t"
 *   insn=0x0000000000214A10 string=0x0000000000214A14 "*"
 *   insn=0x0000000000214A14 string=0x0000000000214A18 "\n"
 *   insn=0x0000000000214A20 string=0x0000000000214A60 "?"
 *   insn=0x0000000000214A24 string=0x0000000000214A28 "K"
 *   insn=0x0000000000214A28 string=0x0000000000214A2C "+"
 *   insn=0x0000000000214A40 string=0x0000000000214A44 "XV"
 *   insn=0x0000000000214A54 string=0x0000000000214A58 "*"
 *   insn=0x0000000000214A58 string=0x0000000000214A5C "\n"
 *   insn=0x0000000000214A68 string=0x0000000000214A6C "NV"
 *   insn=0x0000000000214A74 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000214A7C string=0x0000000000214A80 "(a"
 *   insn=0x0000000000214A8C string=0x0000000000214A90 "J=G"
 *   insn=0x0000000000214A90 string=0x0000000000214A94 ")!"
 *   insn=0x0000000000214A98 string=0x0000000000214A9C "*"
 *   insn=0x0000000000214A98 string=0x0000000000214B08 "*"
 *   insn=0x0000000000214A9C string=0x0000000000214AA0 "K"
 *   insn=0x0000000000214AA0 string=0x0000000000214AA4 "+"
 *   insn=0x0000000000214AAC string=0x0000000000214AEC "_"
 *   insn=0x0000000000214AB4 string=0x0000000000214AB8 "J"
 *   insn=0x0000000000214ABC string=0x0000000000214AC0 "(a"
 *   insn=0x0000000000214ACC string=0x0000000000214AD0 "J=G"
 *   insn=0x0000000000214AD0 string=0x0000000000214AD4 ")!"
 *   insn=0x0000000000214AD8 string=0x0000000000214ADC "*"
 *   insn=0x0000000000214ADC string=0x0000000000214AE0 "K"
 *   insn=0x0000000000214AE0 string=0x0000000000214AE4 "+"
 *   insn=0x0000000000214AF8 string=0x0000000000214AFC "*V"
 *   insn=0x0000000000214B00 string=0x0000000000214B04 "p"
 *   insn=0x0000000000214B08 string=0x0000000000214B0C "K"
 *   insn=0x0000000000214B0C string=0x0000000000214B10 "+"
 *   insn=0x0000000000214B10 string=0x0000000000214B14 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::BoneControlledCollisionShapeComponent::SetValueForBindedProperty(
        Caver::BoneControlledCollisionShapeComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  __int64 v5; // x0
  void *v6; // x8
  void *v7; // x0
  unsigned int *v8; // x9
  int v9; // w10
  unsigned int *v10; // x8
  int v11; // w9
  __int64 v12; // [xsp+0h] [xbp-40h]
  _QWORD v13[3]; // [xsp+8h] [xbp-38h] BYREF

  v13[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a2 == 301 )
  {
    sub_56A528(v13, *((_QWORD *)a3 + 1));
    v5 = Caver::BoneControlledCollisionShapeComponent::BoneForName(this);
    v6 = (void *)(v13[0] - 24LL);
    if ( (__int64 *)(v13[0] - 24LL) == &qword_6FD2E0 )
      goto LABEL_6;
    v8 = (unsigned int *)(v13[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v9 = __ldaxr(v8);
      while ( __stlxr(v9 - 1, v8) );
    }
    else
    {
      v9 = (*v8)--;
    }
    if ( v9 > 0 )
    {
LABEL_6:
      if ( !v5 )
        return;
    }
    else
    {
      v12 = v5;
      operator delete(v6);
      if ( !v12 )
        return;
    }
    sub_56A528(v13, *((_QWORD *)a3 + 1));
    sub_56A6A8((char *)this + 488, v13);
    v7 = (void *)(v13[0] - 24LL);
    if ( (__int64 *)(v13[0] - 24LL) != &qword_6FD2E0 )
    {
      v10 = (unsigned int *)(v13[0] - 8LL);
      if ( &pthread_create )
      {
        do
          v11 = __ldaxr(v10);
        while ( __stlxr(v11 - 1, v10) );
      }
      else
      {
        v11 = (*v10)--;
      }
      if ( v11 <= 0 )
        operator delete(v7);
    }
    *((_QWORD *)this + 62) = 0;
  }
  else
  {
    if ( a2 == 300 )
      *((_QWORD *)this + 62) = 0;
    Caver::CollisionShapeComponent::SetValueForBindedProperty(this, a2, a3);
  }
}

