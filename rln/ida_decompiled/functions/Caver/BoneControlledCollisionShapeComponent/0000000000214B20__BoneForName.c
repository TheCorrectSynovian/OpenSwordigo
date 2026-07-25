/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000214B20
 * Mangled: _ZN5Caver37BoneControlledCollisionShapeComponent11BoneForNameERKSs
 * Demangled: Caver::BoneControlledCollisionShapeComponent::BoneForName(std::string const&)
 *
 * Callers: 1
 *   0x00000000001FE240  Caver::BoneControlledCollisionShapeComponent::BoneForName(std::string const&)
 *
 * Callees: 2
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FC550  Caver::Skeleton::BoneIndexForName(std::string const&)
 *
 * Referenced strings: 20
 *   insn=0x0000000000214B48 string=0x00000000001F7AE0 "0'"
 *   insn=0x0000000000214B5C string=0x0000000000214B60 "h"
 *   insn=0x0000000000214B60 string=0x0000000000214B64 "@"
 *   insn=0x0000000000214B64 string=0x0000000000214B68 "("
 *   insn=0x0000000000214B80 string=0x0000000000214B84 "5"
 *   insn=0x0000000000214B88 string=0x0000000000214B8C ""
 *   insn=0x0000000000214B9C string=0x0000000000214BA0 "!@"
 *   insn=0x0000000000214BAC string=0x0000000000214BB0 "'"
 *   insn=0x0000000000214BB8 string=0x0000000000214BBC "!@"
 *   insn=0x0000000000214BC4 string=0x0000000000214BC8 "("
 *   insn=0x0000000000214BCC string=0x0000000000214BD0 "u"
 *   insn=0x0000000000214BF0 string=0x0000000000214BF4 "!@"
 *   insn=0x0000000000214BFC string=0x0000000000214C00 "@"
 *   insn=0x0000000000214C00 string=0x0000000000214C04 "H"
 *   insn=0x0000000000214C10 string=0x0000000000214C14 "!@"
 *   insn=0x0000000000214C1C string=0x0000000000214C20 "H"
 *   insn=0x0000000000214C24 string=0x0000000000214C28 "U"
 *   insn=0x0000000000214C3C string=0x0000000000214C40 "h"
 *   insn=0x0000000000214C50 string=0x0000000000214C54 "?"
 *   insn=0x0000000000214C54 string=0x00000000001FC550 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::BoneControlledCollisionShapeComponent::BoneForName(Caver::Component *a1)
{
  _QWORD *v2; // x21
  __int64 v3; // x8
  _QWORD *v4; // x21
  __int64 v5; // x8
  __int64 v6; // x20
  int v7; // w0

  v2 = (_QWORD *)*((_QWORD *)a1 + 60);
  if ( !v2 )
  {
    Caver::ComponentOutletBase::Connect((Caver::Component *)((char *)a1 + 464), a1);
    v2 = (_QWORD *)*((_QWORD *)a1 + 60);
    if ( !v2 )
      return 0;
  }
  if ( v2[17] )
    goto LABEL_4;
  (*(void (__fastcall **)(_QWORD *))(*v2 + 64LL))(v2);
  if ( !v2[17] )
    return 0;
  v2 = (_QWORD *)*((_QWORD *)a1 + 60);
  if ( v2 )
  {
LABEL_4:
    v3 = v2[17];
    if ( !v3 )
      goto LABEL_15;
  }
  else
  {
    Caver::ComponentOutletBase::Connect((Caver::Component *)((char *)a1 + 464), a1);
    v2 = (_QWORD *)*((_QWORD *)a1 + 60);
    v3 = v2[17];
    if ( !v3 )
    {
LABEL_15:
      (*(void (__fastcall **)(_QWORD *))(*v2 + 64LL))(v2);
      if ( !*(_QWORD *)(v2[17] + 24LL) )
        return 0;
      goto LABEL_6;
    }
  }
  if ( !*(_QWORD *)(v3 + 24) )
    return 0;
LABEL_6:
  v4 = (_QWORD *)*((_QWORD *)a1 + 60);
  if ( v4
    || (Caver::ComponentOutletBase::Connect((Caver::Component *)((char *)a1 + 464), a1),
        (v4 = (_QWORD *)*((_QWORD *)a1 + 60)) != 0) )
  {
    if ( v4[17] )
      goto LABEL_9;
    (*(void (__fastcall **)(_QWORD *))(*v4 + 64LL))(v4);
    if ( v4[17] )
    {
      v4 = (_QWORD *)*((_QWORD *)a1 + 60);
      if ( !v4 )
      {
        Caver::ComponentOutletBase::Connect((Caver::Component *)((char *)a1 + 464), a1);
        v4 = (_QWORD *)*((_QWORD *)a1 + 60);
        v5 = v4[17];
        if ( v5 )
          goto LABEL_11;
        goto LABEL_10;
      }
LABEL_9:
      v5 = v4[17];
      if ( v5 )
      {
LABEL_11:
        v6 = *(_QWORD *)(v5 + 24);
        goto LABEL_22;
      }
LABEL_10:
      (*(void (__fastcall **)(_QWORD *))(*v4 + 64LL))(v4);
      v5 = v4[17];
      goto LABEL_11;
    }
  }
  v6 = 0;
LABEL_22:
  v7 = Caver::Skeleton::BoneIndexForName();
  if ( (v7 & 0x80000000) == 0 )
    return *(_QWORD *)(v6 + 16) + 220LL * v7;
  return 0;
}

