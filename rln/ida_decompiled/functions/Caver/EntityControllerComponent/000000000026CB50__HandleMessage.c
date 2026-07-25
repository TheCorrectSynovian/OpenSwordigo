/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026CB50
 * Mangled: _ZN5Caver25EntityControllerComponent13HandleMessageEiPv
 * Demangled: Caver::EntityControllerComponent::HandleMessage(int,void *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FD020  Caver::EntityComponent::SetFacingDirection(int)
 *   0x00000000001FE5E0  Caver::SceneObject::HandleMessage(int,void *)
 *
 * Referenced strings: 41
 *   insn=0x000000000026CB5C string=0x000000000026CB60 "?T"
 *   insn=0x000000000026CB64 string=0x000000000026CB68 " "
 *   insn=0x000000000026CB68 string=0x000000000026CB6C "?"
 *   insn=0x000000000026CB68 string=0x000000000026CB8C "H"
 *   insn=0x000000000026CB70 string=0x000000000026CB74 "`z@"
 *   insn=0x000000000026CB74 string=0x000000000026CB78 "@"
 *   insn=0x000000000026CB78 string=0x000000000026CB7C "b"
 *   insn=0x000000000026CB8C string=0x000000000026CB90 "i"
 *   insn=0x000000000026CB90 string=0x000000000026CB94 ""
 *   insn=0x000000000026CB9C string=0x000000000026CBB4 "h\nA"
 *   insn=0x000000000026CBB4 string=0x000000000026CBB8 "H"
 *   insn=0x000000000026CBBC string=0x000000000026CBC0 "@,@"
 *   insn=0x000000000026CBBC string=0x0000000000584430 "333?"
 *   insn=0x000000000026CBD0 string=0x0000000000587F44 "fff"
 *   insn=0x000000000026CBD8 string=0x000000000026CBDC "-"
 *   insn=0x000000000026CBDC string=0x000000000026CBE0 "@(@"
 *   insn=0x000000000026CBE0 string=0x000000000026CBE4 "`B@"
 *   insn=0x000000000026CBE4 string=0x000000000026CBE8 ""
 *   insn=0x000000000026CBEC string=0x000000000026CBF0 "  "
 *   insn=0x000000000026CBF4 string=0x000000000026CBF8 "t*"
 *   insn=0x000000000026CBFC string=0x000000000026CC00 "`"
 *   insn=0x000000000026CC08 string=0x000000000026CC0C "`B@"
 *   insn=0x000000000026CC08 string=0x00000000001F7AE0 "0'"
 *   insn=0x000000000026CC14 string=0x000000000026CC18 "u"
 *   insn=0x000000000026CC14 string=0x00000000001FD020 "0'"
 *   insn=0x000000000026CC1C string=0x000000000026CC20 "hB@"
 *   insn=0x000000000026CC1C string=0x000000000026CC50 "hB@"
 *   insn=0x000000000026CC20 string=0x000000000026CC24 "v\nA"
 *   insn=0x000000000026CC28 string=0x000000000026CC2C "`"
 *   insn=0x000000000026CC28 string=0x000000000026CC3C "\tq@"
 *   insn=0x000000000026CC34 string=0x000000000026CC38 "hB@"
 *   insn=0x000000000026CC54 string=0x000000000026CC58 "t."
 *   insn=0x000000000026CC58 string=0x000000000026CC5C "t\n"
 *   insn=0x000000000026CC60 string=0x000000000026CC64 "`"
 *   insn=0x000000000026CC60 string=0x000000000026CC78 "`"
 *   insn=0x000000000026CC6C string=0x000000000026CC70 "hB@"
 *   insn=0x000000000026CC70 string=0x000000000026CC74 "t\nA"
 *   insn=0x000000000026CC84 string=0x000000000026CC88 "u"
 *   insn=0x000000000026CC90 string=0x000000000026CC94 "`"
 *   insn=0x000000000026CC90 string=0x000000000026CCA4 "q@"
 *   insn=0x000000000026CC9C string=0x000000000026CCA0 "hB@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::EntityControllerComponent::HandleMessage(
        Caver::EntityControllerComponent *this,
        int a2,
        float *a3)
{
  Caver::SceneObject *v4; // x0
  float v6; // s0
  float v7; // s0
  Caver::EntityComponent *v8; // x0
  int v9; // w20
  __int64 v10; // x21
  __int64 v11; // x8
  int v12; // w22
  __int64 v13; // x21

  if ( a2 == 21 )
  {
    if ( *(_QWORD *)(*(_QWORD *)a3 + 40LL) == *((_QWORD *)this + 5) )
    {
      if ( *((_DWORD *)this + 66) )
      {
        v6 = a3[11];
        if ( v6 <= 0.7 && v6 > -0.9 )
        {
          v7 = a3[10];
          v8 = (Caver::EntityComponent *)*((_QWORD *)this + 16);
          *((_DWORD *)this + 76) = 0;
          if ( v7 >= 0.0 )
            v9 = 1;
          else
            v9 = -1;
          *((_DWORD *)this + 74) = v9;
          if ( !v8 )
          {
            Caver::ComponentOutletBase::Connect((Caver::EntityControllerComponent *)((char *)this + 112), this);
            v8 = (Caver::EntityComponent *)*((_QWORD *)this + 16);
          }
          Caver::EntityComponent::SetFacingDirection(v8, v9);
          v10 = *((_QWORD *)this + 32);
          if ( v10 )
          {
            v11 = *((_QWORD *)this + 16);
            v12 = *((_DWORD *)this + 66);
            if ( !v11 )
            {
              Caver::ComponentOutletBase::Connect((Caver::EntityControllerComponent *)((char *)this + 112), this);
              v11 = *((_QWORD *)this + 16);
            }
            *(_BYTE *)(v10 + 57) = v12 != *(_DWORD *)(v11 + 112);
          }
          else
          {
            v11 = *((_QWORD *)this + 16);
          }
          *((_DWORD *)this + 77) = 0;
          *((_DWORD *)this + 75) = v9;
          *((_DWORD *)this + 66) = v9;
          if ( !v11 )
          {
            Caver::ComponentOutletBase::Connect((Caver::EntityControllerComponent *)((char *)this + 112), this);
            v11 = *((_QWORD *)this + 16);
            v9 = *((_DWORD *)this + 66);
          }
          *(float *)(v11 + 176) = *((float *)this + 67) * (float)v9;
          v13 = *((_QWORD *)this + 32);
          if ( v13 )
          {
            if ( !v11 )
            {
              Caver::ComponentOutletBase::Connect((Caver::EntityControllerComponent *)((char *)this + 112), this);
              v11 = *((_QWORD *)this + 16);
            }
            *(_BYTE *)(v13 + 57) = v9 != *(_DWORD *)(v11 + 112);
          }
        }
      }
    }
  }
  else if ( a2 == 5 )
  {
    v4 = (Caver::SceneObject *)*((_QWORD *)this + 30);
    if ( v4 )
      Caver::SceneObject::HandleMessage(v4, 15, *((void **)this + 5));
  }
  return 0;
}

