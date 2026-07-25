/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000270F8C
 * Mangled: _ZN5Caver15HealthComponent6UpdateEf
 * Demangled: Caver::HealthComponent::Update(float)
 *
 * Callers: 2
 *   0x00000000001FA620  Caver::HealthComponent::Update(float)
 *   0x00000000002709F0  Caver::HealthComponent::ApplyFireArmorDamageToObject(Caver::SceneObject *)
 *
 * Callees: 14
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5A20  Caver::SceneObject::InitWithTemplate(boost::intrusive_ptr<Caver::ObjectTemplate> const&)
 *   0x00000000001F5DA0  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA620  Caver::HealthComponent::Update(float)
 *   0x00000000001FAB30  Caver::SceneObject::SceneObject(void)
 *   0x0000000000201380  Caver::ObjectLibrary::TemplateForName(std::string const&,bool)
 *   0x0000000000202FD0  Caver::Vector2::Vector2(Caver::Vector3 const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 114
 *   insn=0x0000000000270FA0 string=0x0000000000270FA4 "U"
 *   insn=0x0000000000270FAC string=0x0000000000270FB0 ""
 *   insn=0x0000000000270FB4 string=0x0000000000270FB8 "h"
 *   insn=0x0000000000270FBC string=0x0000000000270FC0 "k"
 *   insn=0x0000000000270FC0 string=0x0000000000270FC4 "h"
 *   insn=0x0000000000270FC4 string=0x0000000000270FC8 "?"
 *   insn=0x0000000000270FCC string=0x0000000000270FD0 "`"
 *   insn=0x0000000000270FDC string=0x0000000000270FE0 "`"
 *   insn=0x0000000000270FE0 string=0x0000000000270FE4 "M"
 *   insn=0x0000000000270FE4 string=0x0000000000270FE8 "j"
 *   insn=0x0000000000270FF0 string=0x0000000000270FF4 ")"
 *   insn=0x0000000000270FF0 string=0x0000000000271008 "h"
 *   insn=0x0000000000270FF8 string=0x0000000000270FFC "("
 *   insn=0x0000000000270FFC string=0x0000000000271000 "}"
 *   insn=0x0000000000271000 string=0x0000000000271004 "h"
 *   insn=0x0000000000271008 string=0x000000000027100C ""
 *   insn=0x0000000000271014 string=0x000000000058830B "collect_health"
 *   insn=0x0000000000271040 string=0x0000000000271044 ")"
 *   insn=0x000000000027104C string=0x0000000000271050 "a"
 *   insn=0x000000000027105C string=0x0000000000271060 "`"
 *   insn=0x0000000000271060 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000027106C string=0x00000000001FAB30 "0'"
 *   insn=0x0000000000271074 string=0x0000000000271078 "j"
 *   insn=0x0000000000271078 string=0x000000000027107C "h"
 *   insn=0x0000000000271078 string=0x00000000001F5A20 "P'"
 *   insn=0x000000000027107C string=0x0000000000271080 "\t9@"
 *   insn=0x0000000000271080 string=0x0000000000271084 "y@"
 *   insn=0x00000000002710AC string=0x00000000002710B0 "!"
 *   insn=0x00000000002710B0 string=0x00000000002710B4 "  ""
 *   insn=0x00000000002710B4 string=0x00000000002710B8 "I"
 *   insn=0x00000000002710C0 string=0x00000000002710C4 "/"
 *   insn=0x00000000002710CC string=0x00000000002710D0 "`"
 *   insn=0x00000000002710CC string=0x0000000000583734 "o"
 *   insn=0x00000000002710DC string=0x00000000002710F4 "`"
 *   insn=0x00000000002710E0 string=0x00000000002710E4 "  "
 *   insn=0x00000000002710E4 string=0x00000000002710E8 "`"
 *   insn=0x00000000002710E8 string=0x00000000002710EC "E"
 *   insn=0x00000000002710F8 string=0x00000000002710FC "  "
 *   insn=0x00000000002710FC string=0x0000000000271100 "`"
 *   insn=0x0000000000271104 string=0x0000000000271108 "b"
 *   insn=0x000000000027110C string=0x0000000000583944 "\n"
 *   insn=0x000000000027111C string=0x0000000000271120 "A8!"
 *   insn=0x0000000000271120 string=0x0000000000271124 "!H#"
 *   insn=0x0000000000271128 string=0x000000000027112C "`"
 *   insn=0x000000000027112C string=0x0000000000271130 "E"
 *   insn=0x0000000000271140 string=0x0000000000271144 "!\t"
 *   insn=0x0000000000271168 string=0x000000000027116C "#8#"
 *   insn=0x000000000027116C string=0x0000000000271170 "c"
 *   insn=0x0000000000271170 string=0x0000000000271174 "` ""
 *   insn=0x0000000000271174 string=0x0000000000271178 "I"
 *   insn=0x0000000000271178 string=0x000000000027117C ")"
 *   insn=0x0000000000271180 string=0x0000000000271184 "\t"
 *   insn=0x0000000000271194 string=0x00000000001F5DA0 "P'"
 *   insn=0x00000000002711A8 string=0x00000000002711AC "h"
 *   insn=0x00000000002711AC string=0x00000000002711B0 ")"
 *   insn=0x00000000002711B4 string=0x00000000002711B8 ""
 *   insn=0x00000000002711B8 string=0x00000000002711BC ""
 *   insn=0x00000000002711D4 string=0x00000000002711D8 "@"
 *   insn=0x00000000002711D8 string=0x00000000002711DC ""
 *   insn=0x00000000002711DC string=0x00000000002711E0 ""
 *   insn=0x00000000002711E4 string=0x00000000002711E8 ""
 *   insn=0x00000000002711E8 string=0x00000000002711EC ""
 *   insn=0x00000000002711F8 string=0x00000000002711FC "@"
 *   insn=0x00000000002711FC string=0x0000000000271200 ""
 *   insn=0x0000000000271200 string=0x0000000000271204 ""
 *   insn=0x0000000000271204 string=0x0000000000271208 "!"
 *   insn=0x0000000000271208 string=0x000000000027120C ""
 *   insn=0x000000000027120C string=0x0000000000271210 ""
 *   insn=0x000000000027121C string=0x0000000000271220 ")=G"
 *   insn=0x0000000000271220 string=0x0000000000271224 "!"
 *   insn=0x0000000000271228 string=0x000000000027122C "\t"
 *   insn=0x0000000000271228 string=0x0000000000271240 "\t"
 *   insn=0x000000000027122C string=0x0000000000271230 "*"
 *   insn=0x0000000000271230 string=0x0000000000271234 "\n"
 *   insn=0x000000000027123C string=0x000000000027124C "?"
 *   insn=0x0000000000271240 string=0x0000000000271244 "*"
 *   insn=0x0000000000271244 string=0x0000000000271248 "\n"
 *   insn=0x000000000027124C string=0x0000000000271250 ","
 *   insn=0x0000000000271254 string=0x0000000000271258 "S"
 *   insn=0x0000000000271268 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000271274 string=0x0000000000271278 "H"
 *   insn=0x0000000000271278 string=0x000000000027127C "\t\t@"
 *   insn=0x000000000027127C string=0x0000000000271280 ")"
 *   insn=0x0000000000271280 string=0x0000000000271284 "\t\t"
 *   insn=0x0000000000271288 string=0x000000000027128C "\t"
 *   insn=0x000000000027128C string=0x0000000000271290 ")"
 *   insn=0x0000000000271294 string=0x0000000000271298 " "
 *   insn=0x0000000000271298 string=0x000000000027129C ")"
 *   insn=0x00000000002712A8 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002712B0 string=0x00000000002712B4 ","
 *   insn=0x00000000002712B0 string=0x0000000000271348 "@"
 *   insn=0x00000000002712BC string=0x00000000002712C0 "@"
 *   insn=0x00000000002712C0 string=0x00000000002712C4 "("
 *   insn=0x00000000002712CC string=0x00000000002712D0 "J"
 *   insn=0x00000000002712D4 string=0x00000000002712D8 "(a"
 *   insn=0x00000000002712DC string=0x00000000002712E0 " "
 *   insn=0x00000000002712E4 string=0x00000000002712E8 "J=G"
 *   insn=0x00000000002712E8 string=0x00000000002712EC ")!"
 *   insn=0x00000000002712F0 string=0x00000000002712F4 "*"
 *   insn=0x00000000002712F0 string=0x0000000000271320 "*"
 *   insn=0x00000000002712F4 string=0x00000000002712F8 "K"
 *   insn=0x00000000002712F8 string=0x00000000002712FC "+"
 *   insn=0x0000000000271300 string=0x0000000000271304 "_"
 *   insn=0x0000000000271310 string=0x0000000000271314 "$"
 *   insn=0x0000000000271318 string=0x000000000027131C "jA"
 *   insn=0x0000000000271320 string=0x0000000000271324 "K"
 *   insn=0x0000000000271324 string=0x0000000000271328 "+"
 *   insn=0x0000000000271328 string=0x000000000027132C "_"
 *   insn=0x0000000000271348 string=0x000000000027134C ""
 *   insn=0x000000000027134C string=0x0000000000271350 ""
 *   insn=0x0000000000271354 string=0x0000000000271358 ""
 *   insn=0x0000000000271358 string=0x000000000027135C ""
 *   insn=0x0000000000271364 string=0x0000000000271368 "WA"
 *   insn=0x0000000000271374 string=0x00000000001FA620 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::HealthComponent::Update(Caver::HealthComponent *this, float a2)
{
  int v4; // w8
  int v5; // w9
  float v6; // s0
  int v7; // w10
  int v8; // w9
  void *v9; // x0
  __int64 v10; // x20
  __int64 v11; // x8
  __int64 v12; // x9
  float v13; // w9
  float *v14; // x8
  float v15; // s0
  float v16; // s0
  float v17; // s0
  float v18; // s1
  float v19; // s0
  float v20; // s1
  int v21; // w9
  __int64 v22; // x0
  void (__fastcall *v23)(__int64, __int64 *); // x8
  __int64 v24; // x0
  int v25; // w8
  __int64 v26; // x0
  int v27; // w8
  unsigned int *v28; // x8
  int v29; // w9
  __int64 v30; // [xsp+0h] [xbp-50h] BYREF
  int v31; // [xsp+8h] [xbp-48h]
  __int64 v32; // [xsp+18h] [xbp-38h]
  float v33; // [xsp+20h] [xbp-30h] BYREF
  float v34; // [xsp+24h] [xbp-2Ch]
  __int64 v35; // [xsp+28h] [xbp-28h]

  v35 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *((int *)this + 41) >= 1 )
  {
    v4 = *((_DWORD *)this + 31);
    v5 = *((_DWORD *)this + 32);
    if ( v5 >= v4 )
    {
      *((_DWORD *)this + 42) = 0;
      goto LABEL_13;
    }
    v6 = *((float *)this + 42) + a2;
    *((float *)this + 42) = v6;
    if ( v6 > 12.0 )
    {
      v7 = *((unsigned __int8 *)this + 120);
      *((_DWORD *)this + 42) = 0;
      if ( !v7 )
      {
        v8 = v5 + 1;
        if ( v4 > v8 )
          v4 = v8;
        *((_DWORD *)this + 32) = v4 & ~(v4 >> 31);
      }
      sub_566BB8((int)&v30, "collect_health");
      Caver::ObjectLibrary::TemplateForName();
      v9 = (void *)(v30 - 24);
      if ( (__int64 *)(v30 - 24) == &qword_6FD2E0 )
        goto LABEL_9;
      v28 = (unsigned int *)(v30 - 8);
      if ( &pthread_create )
      {
        do
          v29 = __ldaxr(v28);
        while ( __stlxr(v29 - 1, v28) );
      }
      else
      {
        v29 = (*v28)--;
      }
      if ( v29 > 0 )
      {
LABEL_9:
        if ( !v32 )
          goto LABEL_13;
      }
      else
      {
        operator delete(v9);
        if ( !v32 )
          goto LABEL_13;
      }
      v10 = operator new(0x128u);
      Caver::SceneObject::SceneObject((Caver::SceneObject *)v10);
      Caver::SceneObject::InitWithTemplate((Caver::SceneObject *)v10);
      v11 = *((_QWORD *)this + 5);
      v12 = *(_QWORD *)(v11 + 112);
      LODWORD(v11) = *(_DWORD *)(v11 + 120);
      v30 = v12;
      v31 = v11;
      Caver::Vector2::Vector2((Caver::Vector2 *)&v33, (const Caver::Vector3 *)&v30);
      if ( fabsf(v33 - *(float *)(v10 + 112)) <= 0.0001 )
      {
        v14 = (float *)(v10 + 116);
        if ( fabsf(v34 - *(float *)(v10 + 116)) <= 0.0001 )
        {
LABEL_24:
          v21 = *(_DWORD *)(v10 + 8);
          *(_DWORD *)(v10 + 120) = v31;
          v22 = *(_QWORD *)(*((_QWORD *)this + 5) + 32LL);
          v23 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 40LL);
          v30 = v10;
          *(_DWORD *)(v10 + 8) = v21 + 1;
          v23(v22, &v30);
          v24 = v30;
          if ( v30 )
          {
            v25 = *(_DWORD *)(v30 + 8) - 1;
            *(_DWORD *)(v30 + 8) = v25;
            if ( !v25 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
          }
          v26 = v32;
          if ( v32 )
          {
            v27 = *(_DWORD *)(v32 + 8) - 1;
            *(_DWORD *)(v32 + 8) = v27;
            if ( !v27 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
          }
          goto LABEL_13;
        }
        v13 = v34;
      }
      else
      {
        v13 = v34;
        v14 = (float *)(v10 + 116);
      }
      *(float *)(v10 + 112) = v33;
      *v14 = v13;
      if ( !*(_BYTE *)(v10 + 180) )
      {
        Caver::SceneObject::RegisterForWorldBoundsUpdate((Caver::SceneObject *)v10);
        *(_BYTE *)(v10 + 180) = 1;
      }
      goto LABEL_24;
    }
  }
LABEL_13:
  v15 = *((float *)this + 37);
  if ( v15 > 0.001 )
  {
    v16 = v15 - a2;
    *((float *)this + 37) = v16;
    if ( v16 < 0.0 )
      *((_DWORD *)this + 37) = 0;
  }
  v17 = *((float *)this + 43) - a2;
  *((float *)this + 43) = v17;
  if ( v17 > 0.0 )
  {
    v18 = a2 / v17;
    v19 = v17 - a2;
    v20 = fmaxf(*((float *)this + 44) - v18, 0.0);
    *((float *)this + 43) = v19;
    *((float *)this + 44) = v20;
    if ( v19 < 0.01 )
      *((_DWORD *)this + 43) = 0;
  }
}

