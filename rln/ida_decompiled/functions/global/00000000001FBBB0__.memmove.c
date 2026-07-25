/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBBB0
 * Mangled: .memmove
 * Demangled: .memmove
 *
 * Callers: 55
 *   0x000000000021BEC4  Caver::SceneObject::GetComponentsWithInterface<Caver::CollisionShapeComponent>(std::vector<Caver::CollisionShapeComponent *,std::allocator<Caver::CollisionShapeComponent *>> *)
 *   0x000000000026F86C  std::vector<Caver::EntityInfoComponent *,std::allocator<Caver::EntityInfoComponent *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::EntityInfoComponent **,std::vector<Caver::EntityInfoComponent *,std::allocator<Caver::EntityInfoComponent *>>>,Caver::EntityInfoComponent * const&)
 *   0x0000000000275804  std::deque<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>::_M_reallocate_map(ulong,bool)
 *   0x00000000002AC31C  std::vector<int,std::allocator<int>>::_M_insert_aux(__gnu_cxx::__normal_iterator<int *,std::vector<int,std::allocator<int>>>,int const&)
 *   0x00000000002CC1E0  Caver::WeaponTrail::AddSegment(Caver::Vector3 const&,Caver::Vector3 const&,float)
 *   0x00000000002CC414  Caver::WeaponTrail::RemoveSegmentsFromBeginning(int)
 *   0x00000000002CC588  Caver::WeaponTrail::Update(float)
 *   0x0000000000380BE4  std::deque<boost::shared_ptr<Caver::Achievement>,std::allocator<boost::shared_ptr<Caver::Achievement>>>::_M_reallocate_map(ulong,bool)
 *   0x00000000003BA324  std::vector<Caver::QuestState *,std::allocator<Caver::QuestState *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::QuestState **,std::vector<Caver::QuestState *,std::allocator<Caver::QuestState *>>>,Caver::QuestState * const&)
 *   0x00000000003BE774  std::deque<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>>::_M_reallocate_map(ulong,bool)
 *   0x0000000000415200  std::vector<Caver::ProgramComponent *,std::allocator<Caver::ProgramComponent *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::ProgramComponent **,std::vector<Caver::ProgramComponent *,std::allocator<Caver::ProgramComponent *>>>,Caver::ProgramComponent * const&)
 *   0x0000000000445F04  std::vector<Caver::MeshData const*,std::allocator<Caver::MeshData const*>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::MeshData const**,std::vector<Caver::MeshData const*,std::allocator<Caver::MeshData const*>>>,Caver::MeshData const* const&)
 *   0x0000000000447CA4  std::vector<int,std::allocator<int>>::_M_fill_insert(__gnu_cxx::__normal_iterator<int *,std::vector<int,std::allocator<int>>>,ulong,int const&)
 *   0x0000000000474D6C  std::vector<Caver::Component *,std::allocator<Caver::Component *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Component **,std::vector<Caver::Component *,std::allocator<Caver::Component *>>>,Caver::Component * const&)
 *   0x000000000048D0D4  std::vector<uint,std::allocator<uint>>::_M_insert_aux(__gnu_cxx::__normal_iterator<uint *,std::vector<uint,std::allocator<uint>>>,uint const&)
 *   0x0000000000493834  std::deque<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>>::_M_push_back_aux(Caver::GUIApplication::QueuedEvent const&)
 *   0x00000000004C67FC  std::vector<Caver::FontText::LineInfo,std::allocator<Caver::FontText::LineInfo>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::FontText::LineInfo*,std::vector<Caver::FontText::LineInfo,std::allocator<Caver::FontText::LineInfo>>>,Caver::FontText::LineInfo const&)
 *   0x00000000004CDAB4  Caver::TextureLibrary::PrintMemoryUsageStats(void)
 *   0x00000000004CE8DC  std::__make_heap<__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>>(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::Texture> *,std::vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)>)
 *   0x00000000004D7FEC  std::vector<void (*)(void),std::allocator<void (*)(void)>>::_M_insert_aux(__gnu_cxx::__normal_iterator<void (**)(void),std::vector<void (*)(void),std::allocator<void (*)(void)>>>,void (* const&)(void))
 *   0x0000000000514110  CPVRTString::assign(char const*)
 *   0x00000000005141A8  CPVRTString::assign(char const*,ulong)
 *   0x0000000000514238  CPVRTString::CPVRTString(CPVRTString const&,ulong,ulong)
 *   0x00000000005142B8  CPVRTString::assign(CPVRTString const&,ulong,ulong)
 *   0x000000000051451C  CPVRTString::append(char const*)
 *   0x00000000005145D4  CPVRTString::append(char const*,ulong)
 *   0x0000000000514684  CPVRTString::append(CPVRTString const&)
 *   0x0000000000514730  CPVRTString::append(CPVRTString const&,ulong,ulong)
 *   0x00000000005147E4  CPVRTString::append(ulong,char)
 *   0x0000000000514898  CPVRTString::assign(CPVRTString const&)
 *   0x0000000000514D00  CPVRTString::erase(ulong,ulong)
 *   0x0000000000514E00  CPVRTString::resize(ulong,char)
 *   0x0000000000515490  CPVRTString::push_back(char)
 *   0x000000000051558C  CPVRTString::substr(ulong,ulong)
 *   0x000000000051565C  CPVRTString::operator+=(char)
 *   0x0000000000515714  CPVRTString::operator+=(char const*)
 *   0x00000000005157CC  CPVRTString::operator+=(CPVRTString const&)
 *   0x00000000005158E4  CPVRTString::operator=(char const*)
 *   0x000000000051597C  CPVRTString::operator=(CPVRTString const&)
 *   0x0000000000515A14  operator+(CPVRTString const&,CPVRTString const&)
 *   0x0000000000515B1C  operator+(CPVRTString const&,char const*)
 *   0x0000000000515C34  operator+(CPVRTString const&,char)
 *   0x0000000000515D18  operator+(char const*,CPVRTString const&)
 *   0x0000000000515E28  operator+(char,CPVRTString const&)
 *   0x0000000000515F18  PVRTStringGetFileExtension(CPVRTString const&)
 *   0x0000000000515FE4  PVRTStringGetContainingDirectoryPath(CPVRTString const&)
 *   0x00000000005160D8  PVRTStringGetFileName(CPVRTString const&)
 *   0x00000000005161D8  PVRTStringStripWhiteSpaceFromStartOf(CPVRTString const&)
 *   0x000000000055DF60  sub_55DF60
 *   0x000000000055E3D8  sub_55E3D8
 *   0x000000000056007C  sub_56007C
 *   0x0000000000562BC4  sub_562BC4
 *   0x0000000000566674  sub_566674
 *   0x0000000000568CB8  sub_568CB8
 *   0x000000000056918C  sub_56918C
 *
 * Callees: 1
 *   0x00000000006FE918  memmove
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBBB8 string=0x00000000001FBBBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void *memmove(void *a1, const void *a2, size_t a3)
{
  return memmove(a1, a2, a3);
}

