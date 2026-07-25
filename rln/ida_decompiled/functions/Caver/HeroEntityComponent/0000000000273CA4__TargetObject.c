/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000273CA4
 * Mangled: _ZN5Caver19HeroEntityComponent12TargetObjectERKN5boost13intrusive_ptrINS_11SceneObjectEEEi
 * Demangled: Caver::HeroEntityComponent::TargetObject(boost::intrusive_ptr<Caver::SceneObject> const&,int)
 *
 * Callers: 1
 *   0x00000000001FC620  Caver::HeroEntityComponent::TargetObject(boost::intrusive_ptr<Caver::SceneObject> const&,int)
 *
 * Callees: 21
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5DA0  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7640  Caver::PhysicsObjectState::~PhysicsObjectState()
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x00000000001FBFF0  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::operator[](std::string const&)
 *   0x00000000001FC3E0  std::deque<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>::~deque()
 *   0x00000000001FE7B0  Caver::GameEvent::SendEvent(Caver::GameEvent*)
 *   0x00000000001FFB70  Caver::Program::~Program()
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000201C20  std::deque<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>::_M_destroy_data_aux(std::_Deque_iterator<Caver::HeroEntityComponent::SafePosition,Caver::HeroEntityComponent::SafePosition&,Caver::HeroEntityComponent::SafePosition*>,std::_Deque_iterator<Caver::HeroEntityComponent::SafePosition,Caver::HeroEntityComponent::SafePosition&,Caver::HeroEntityComponent::SafePosition*>)
 *   0x0000000000202D40  std::deque<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>::_M_reallocate_map(ulong,bool)
 *   0x0000000000202FD0  Caver::Vector2::Vector2(Caver::Vector3 const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000021C13C  Caver::HealthComponent::Interface(void)
 *   0x00000000002743CC  Caver::HeroEntityComponent::~HeroEntityComponent()
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 222
 *   insn=0x0000000000273CB4 string=0x0000000000273CB8 "V"
 *   insn=0x0000000000273CD0 string=0x0000000000273CD4 "!(B"
 *   insn=0x0000000000273CD4 string=0x0000000000273CD8 "B2"
 *   insn=0x0000000000273CD4 string=0x000000000021C13C "@&"
 *   insn=0x0000000000273CE0 string=0x0000000000273CE4 "?"
 *   insn=0x0000000000273CE4 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000273CE8 string=0x0000000000273CEC "H"
 *   insn=0x0000000000273CEC string=0x0000000000273CF0 "h"
 *   insn=0x0000000000273CFC string=0x0000000000273D00 "h"
 *   insn=0x0000000000273D0C string=0x0000000000273D10 "h"
 *   insn=0x0000000000273D14 string=0x0000000000273D18 "h6"
 *   insn=0x0000000000273D1C string=0x0000000000273D20 "\t\t@"
 *   insn=0x0000000000273D20 string=0x0000000000273D24 ")"
 *   insn=0x0000000000273D24 string=0x0000000000273D28 "\t\t"
 *   insn=0x0000000000273D2C string=0x0000000000588313 "health"
 *   insn=0x0000000000273D3C string=0x0000000000273D40 "`"
 *   insn=0x0000000000273D48 string=0x00000000001FBFF0 "0'"
 *   insn=0x0000000000273D54 string=0x0000000000273D58 ")"
 *   insn=0x0000000000273D7C string=0x0000000000273DD8 ">\t"
 *   insn=0x0000000000273D94 string=0x0000000000273D98 ")=G"
 *   insn=0x0000000000273D98 string=0x0000000000273D9C "!"
 *   insn=0x0000000000273DA0 string=0x0000000000273DA4 "\t"
 *   insn=0x0000000000273DA0 string=0x0000000000273DB8 "\t"
 *   insn=0x0000000000273DA4 string=0x0000000000273DA8 "*"
 *   insn=0x0000000000273DA8 string=0x0000000000273DAC "\n"
 *   insn=0x0000000000273DB4 string=0x0000000000273DC4 "?"
 *   insn=0x0000000000273DB8 string=0x0000000000273DBC "*"
 *   insn=0x0000000000273DBC string=0x0000000000273DC0 "\n"
 *   insn=0x0000000000273DCC string=0x0000000000273DD0 "u"
 *   insn=0x0000000000273DD8 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000273DE0 string=0x0000000000273DE4 "J"
 *   insn=0x0000000000273DE8 string=0x0000000000273DEC "(a"
 *   insn=0x0000000000273DF8 string=0x0000000000273DFC "J=G"
 *   insn=0x0000000000273DFC string=0x0000000000273E00 ")!"
 *   insn=0x0000000000273E04 string=0x0000000000273E08 "*"
 *   insn=0x0000000000273E04 string=0x0000000000273E34 "*"
 *   insn=0x0000000000273E08 string=0x0000000000273E0C "K"
 *   insn=0x0000000000273E0C string=0x0000000000273E10 "+"
 *   insn=0x0000000000273E14 string=0x0000000000273E18 "_"
 *   insn=0x0000000000273E24 string=0x0000000000273E28 "_"
 *   insn=0x0000000000273E34 string=0x0000000000273E38 "K"
 *   insn=0x0000000000273E38 string=0x0000000000273E3C "+"
 *   insn=0x0000000000273E3C string=0x0000000000273E40 "_"
 *   insn=0x0000000000273E6C string=0x0000000000273E70 "U"
 *   insn=0x0000000000273E7C string=0x0000000000273E80 "h"
 *   insn=0x0000000000273E80 string=0x0000000000273E84 "\t"
 *   insn=0x0000000000273E88 string=0x0000000000273E8C "\t\t@"
 *   insn=0x0000000000273E90 string=0x0000000000273E94 "\t\t@"
 *   insn=0x0000000000273E9C string=0x0000000000273EA0 "*\t@"
 *   insn=0x0000000000273EA0 string=0x0000000000273EA4 "J"
 *   insn=0x0000000000273EA4 string=0x0000000000273EA8 "*\t"
 *   insn=0x0000000000273EB0 string=0x0000000000273EB4 "t"
 *   insn=0x0000000000273EBC string=0x0000000000273EC0 "D<"
 *   insn=0x0000000000273ED4 string=0x0000000000273ED8 "!"
 *   insn=0x0000000000273ED8 string=0x0000000000273EDC "  ""
 *   insn=0x0000000000273EE8 string=0x0000000000273EEC "\t"
 *   insn=0x0000000000273EF8 string=0x0000000000273EFC "#8#"
 *   insn=0x0000000000273EFC string=0x0000000000273F00 "c"
 *   insn=0x0000000000273F00 string=0x0000000000273F04 "` ""
 *   insn=0x0000000000273F04 string=0x0000000000273F08 "I"
 *   insn=0x0000000000273F08 string=0x0000000000273F0C ")"
 *   insn=0x0000000000273F10 string=0x0000000000273F14 "\t"
 *   insn=0x0000000000273F24 string=0x00000000001F5DA0 "P'"
 *   insn=0x0000000000273F34 string=0x0000000000273F38 "h"
 *   insn=0x0000000000273F38 string=0x0000000000273F3C "t"
 *   insn=0x0000000000273F40 string=0x0000000000273F44 "vfY"
 *   insn=0x0000000000273F44 string=0x0000000000273F48 "x^Z"
 *   insn=0x0000000000273F48 string=0x0000000000273F4C "`n"
 *   insn=0x0000000000273F4C string=0x0000000000273F50 "h&\"
 *   insn=0x0000000000273F6C string=0x0000000000273F70 ",7"
 *   insn=0x0000000000273F70 string=0x0000000000273F74 "z"
 *   insn=0x0000000000273F74 string=0x0000000000273F78 "_"
 *   insn=0x0000000000273F7C string=0x0000000000273F94 ""
 *   insn=0x0000000000273F80 string=0x0000000000273F84 "`"
 *   insn=0x0000000000273F88 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000273F98 string=0x0000000000273F9C "vf"
 *   insn=0x0000000000273F9C string=0x0000000000273FA0 "x^"
 *   insn=0x0000000000273FA0 string=0x0000000000273FA4 "@"
 *   insn=0x0000000000273FA4 string=0x0000000000273FEC "h&X"
 *   insn=0x0000000000273FC0 string=0x0000000000273FC4 "\t\t@"
 *   insn=0x0000000000273FC4 string=0x0000000000273FC8 ")"
 *   insn=0x0000000000273FC8 string=0x0000000000273FCC "\t\t"
 *   insn=0x0000000000273FD8 string=0x0000000000273FDC "h"
 *   insn=0x0000000000273FE4 string=0x0000000000273FE8 "+"
 *   insn=0x0000000000273FE4 string=0x0000000000274078 "@"
 *   insn=0x0000000000273FF0 string=0x0000000000273FF4 "("
 *   insn=0x0000000000274008 string=0x000000000027400C "M;"
 *   insn=0x0000000000274010 string=0x0000000000274014 "s"
 *   insn=0x0000000000274014 string=0x0000000000274018 "h"
 *   insn=0x000000000027401C string=0x0000000000274020 "h"
 *   insn=0x0000000000274024 string=0x0000000000274028 "\t"
 *   insn=0x000000000027402C string=0x0000000000274030 "\t\t"
 *   insn=0x0000000000274034 string=0x0000000000274038 "\t\t"
 *   insn=0x000000000027403C string=0x0000000000274040 "*\t@"
 *   insn=0x0000000000274040 string=0x0000000000274044 "J"
 *   insn=0x0000000000274044 string=0x0000000000274048 "*\t"
 *   insn=0x0000000000274050 string=0x0000000000274054 "h"
 *   insn=0x0000000000274054 string=0x0000000000274058 "\t!"
 *   insn=0x0000000000274058 string=0x000000000027405C "i"
 *   insn=0x000000000027405C string=0x0000000000274060 ""
 *   insn=0x0000000000274060 string=0x0000000000274064 "h""
 *   insn=0x0000000000274064 string=0x0000000000274068 ""
 *   insn=0x0000000000274068 string=0x000000000027406C "h"
 *   insn=0x0000000000274078 string=0x000000000027407C ""
 *   insn=0x000000000027407C string=0x0000000000274080 ""
 *   insn=0x0000000000274084 string=0x0000000000274088 ""
 *   insn=0x0000000000274088 string=0x000000000027408C ""
 *   insn=0x000000000027409C string=0x00000000002740A0 "!"
 *   insn=0x00000000002740CC string=0x00000000002740D0 "("
 *   insn=0x00000000002740D0 string=0x00000000002740D4 "\t\t@"
 *   insn=0x00000000002740D4 string=0x00000000002740D8 ")"
 *   insn=0x00000000002740D8 string=0x00000000002740DC "\t\t"
 *   insn=0x00000000002740E0 string=0x00000000002740E4 "\t"
 *   insn=0x00000000002740E4 string=0x00000000002740E8 ")"
 *   insn=0x00000000002740EC string=0x00000000002740F0 " "
 *   insn=0x000000000027410C string=0x0000000000274110 "uF"
 *   insn=0x0000000000274114 string=0x0000000000274118 "`"
 *   insn=0x0000000000274118 string=0x000000000027411C "\n"
 *   insn=0x000000000027411C string=0x0000000000274120 "\tA"
 *   insn=0x0000000000274120 string=0x0000000000274124 ""
 *   insn=0x0000000000274124 string=0x0000000000274128 "@"
 *   insn=0x000000000027412C string=0x0000000000274130 "i"
 *   insn=0x0000000000274130 string=0x0000000000274134 "`"
 *   insn=0x0000000000274138 string=0x000000000027413C "`B"
 *   insn=0x0000000000274138 string=0x00000000001FC3E0 "0'"
 *   insn=0x0000000000274140 string=0x0000000000274144 "`"
 *   insn=0x0000000000274148 string=0x000000000027414C "@"
 *   insn=0x0000000000274148 string=0x0000000000274168 "`"
 *   insn=0x000000000027414C string=0x0000000000274150 ""
 *   insn=0x0000000000274150 string=0x0000000000274154 ""
 *   insn=0x0000000000274158 string=0x000000000027415C ""
 *   insn=0x000000000027415C string=0x0000000000274160 ""
 *   insn=0x000000000027416C string=0x0000000000274170 "@"
 *   insn=0x000000000027416C string=0x000000000027418C "`"
 *   insn=0x0000000000274170 string=0x0000000000274174 ""
 *   insn=0x0000000000274174 string=0x0000000000274178 ""
 *   insn=0x000000000027417C string=0x0000000000274180 ""
 *   insn=0x0000000000274180 string=0x0000000000274184 ""
 *   insn=0x0000000000274190 string=0x0000000000274194 "@"
 *   insn=0x0000000000274190 string=0x00000000002741B0 "`"
 *   insn=0x0000000000274194 string=0x0000000000274198 ""
 *   insn=0x0000000000274198 string=0x000000000027419C ""
 *   insn=0x00000000002741A0 string=0x00000000002741A4 ""
 *   insn=0x00000000002741A4 string=0x00000000002741A8 ""
 *   insn=0x00000000002741B4 string=0x00000000002741B8 "@"
 *   insn=0x00000000002741B8 string=0x00000000002741BC ""
 *   insn=0x00000000002741BC string=0x00000000002741C0 ""
 *   insn=0x00000000002741C4 string=0x00000000002741C8 ""
 *   insn=0x00000000002741C8 string=0x00000000002741CC ""
 *   insn=0x00000000002741D4 string=0x00000000002741D8 "IF"
 *   insn=0x00000000002741D8 string=0x00000000002741DC "`"
 *   insn=0x00000000002741DC string=0x00000000002741E0 "\n"
 *   insn=0x00000000002741E0 string=0x00000000002741E4 "\tA"
 *   insn=0x00000000002741E4 string=0x00000000002741E8 "@"
 *   insn=0x00000000002741E8 string=0x00000000002741EC ""
 *   insn=0x00000000002741F0 string=0x00000000002741F4 "i"
 *   insn=0x00000000002741F4 string=0x00000000002741F8 "`"
 *   insn=0x00000000002741FC string=0x0000000000274200 "@"
 *   insn=0x00000000002741FC string=0x000000000027421C "`"
 *   insn=0x0000000000274200 string=0x0000000000274204 ""
 *   insn=0x0000000000274204 string=0x0000000000274208 ""
 *   insn=0x000000000027420C string=0x0000000000274210 ""
 *   insn=0x0000000000274210 string=0x0000000000274214 ""
 *   insn=0x000000000027421C string=0x0000000000274220 ""
 *   insn=0x0000000000274220 string=0x00000000001F7640 "0'"
 *   insn=0x0000000000274230 string=0x00000000001FA4D0 "0'"
 *   insn=0x0000000000274234 string=0x0000000000274238 "`"
 *   insn=0x0000000000274244 string=0x0000000000274248 "="
 *   insn=0x000000000027424C string=0x0000000000274250 "`"
 *   insn=0x0000000000274250 string=0x0000000000274254 "`"
 *   insn=0x0000000000274254 string=0x0000000000274258 "9"
 *   insn=0x0000000000274254 string=0x0000000000274320 "@"
 *   insn=0x000000000027425C string=0x0000000000274260 "`"
 *   insn=0x0000000000274264 string=0x0000000000274268 ","
 *   insn=0x0000000000274264 string=0x00000000002742FC "@"
 *   insn=0x0000000000274268 string=0x0000000000274318 "`"
 *   insn=0x000000000027426C string=0x0000000000274270 "`"
 *   insn=0x0000000000274270 string=0x0000000000274274 " "
 *   insn=0x0000000000274274 string=0x00000000002742D8 "@"
 *   insn=0x0000000000274278 string=0x00000000002742F4 "`"
 *   insn=0x0000000000274284 string=0x0000000000274288 "C"
 *   insn=0x0000000000274290 string=0x0000000000274294 "`"
 *   insn=0x0000000000274298 string=0x000000000027429C ""
 *   insn=0x0000000000274298 string=0x00000000002742B4 "@"
 *   insn=0x000000000027429C string=0x00000000002742D0 "`"
 *   insn=0x00000000002742A0 string=0x00000000002742A4 "`B"
 *   insn=0x00000000002742A4 string=0x00000000002742A8 "2."
 *   insn=0x00000000002742A8 string=0x00000000002742AC "`"
 *   insn=0x00000000002742B4 string=0x00000000002742B8 ""
 *   insn=0x00000000002742B8 string=0x00000000002742BC ""
 *   insn=0x00000000002742C0 string=0x00000000002742C4 ""
 *   insn=0x00000000002742C4 string=0x00000000002742C8 ""
 *   insn=0x00000000002742D8 string=0x00000000002742DC ""
 *   insn=0x00000000002742DC string=0x00000000002742E0 ""
 *   insn=0x00000000002742E4 string=0x00000000002742E8 ""
 *   insn=0x00000000002742E8 string=0x00000000002742EC ""
 *   insn=0x00000000002742FC string=0x0000000000274300 ""
 *   insn=0x0000000000274300 string=0x0000000000274304 ""
 *   insn=0x0000000000274308 string=0x000000000027430C ""
 *   insn=0x000000000027430C string=0x0000000000274310 ""
 *   insn=0x0000000000274320 string=0x0000000000274324 ""
 *   insn=0x0000000000274324 string=0x0000000000274328 ""
 *   insn=0x000000000027432C string=0x0000000000274330 ""
 *   insn=0x0000000000274330 string=0x0000000000274334 ""
 *   insn=0x000000000027433C string=0x0000000000274340 "IF"
 *   insn=0x0000000000274340 string=0x0000000000274344 "`"
 *   insn=0x0000000000274344 string=0x0000000000274348 "\n"
 *   insn=0x0000000000274348 string=0x000000000027434C "\tA"
 *   insn=0x000000000027434C string=0x0000000000274350 "@"
 *   insn=0x0000000000274350 string=0x0000000000274354 ""
 *   insn=0x0000000000274358 string=0x000000000027435C "i"
 *   insn=0x000000000027435C string=0x0000000000274360 "`"
 *   insn=0x0000000000274364 string=0x0000000000274368 "@"
 *   insn=0x0000000000274364 string=0x0000000000274384 "`"
 *   insn=0x0000000000274368 string=0x000000000027436C ""
 *   insn=0x000000000027436C string=0x0000000000274370 ""
 *   insn=0x0000000000274374 string=0x0000000000274378 ""
 *   insn=0x0000000000274378 string=0x000000000027437C ""
 *   insn=0x000000000027438C string=0x0000000000274390 "P"
 *   insn=0x0000000000274394 string=0x0000000000274398 "K5"
 *   insn=0x000000000027439C string=0x00000000002743A0 "`"
 *   insn=0x00000000002743B0 string=0x00000000002743B4 "G"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::HeroEntityComponent::TargetObject(__int64 a1, Caver::SceneObject **a2, int a3)
{
  Caver::GameEvent *v5; // x19
  Caver::SceneObject *v6; // x8
  Caver::GameEvent *v7; // x1
  _DWORD *v8; // x0
  void *v9; // x0
  unsigned int *v10; // x8
  int v11; // w9
  _QWORD v12[3]; // [xsp+F8h] [xbp-38h] BYREF

  v12[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( Caver::SceneObject::ComponentWithInterface(*a2, (__int64)Caver::HealthComponent::Interface) )
  {
    v5 = (Caver::GameEvent *)operator new(0x70u);
    *(_DWORD *)v5 = 10;
    *((_QWORD *)v5 + 2) = 0;
    *((_QWORD *)v5 + 3) = 0;
    *((_QWORD *)v5 + 4) = (char *)v5 + 16;
    *((_QWORD *)v5 + 5) = (char *)v5 + 16;
    *((_QWORD *)v5 + 6) = 0;
    *((_QWORD *)v5 + 8) = 0;
    *((_QWORD *)v5 + 9) = 0;
    *((_QWORD *)v5 + 10) = (char *)v5 + 64;
    *((_QWORD *)v5 + 11) = (char *)v5 + 64;
    *((_QWORD *)v5 + 12) = 0;
    v6 = *a2;
    *((_QWORD *)v5 + 13) = *a2;
    if ( v6 )
      ++*((_DWORD *)v6 + 2);
    sub_566BB8((int)v12, "health");
    std::map<std::string,int>::operator[]();
    *v8 = a3;
    v9 = (void *)(v12[0] - 24LL);
    if ( (__int64 *)(v12[0] - 24LL) != &qword_6FD2E0 )
    {
      v10 = (unsigned int *)(v12[0] - 8LL);
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
        operator delete(v9);
    }
    Caver::GameEvent::SendEvent(v5, v7);
  }
}

