#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>
struct Dictionary_2_tCB10D3F0D8D28A1A6B54347C56E10FE9D9612C94;
// System.Collections.Generic.Dictionary`2<StatsController/Stats,System.Int32>
struct Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370;
// System.Collections.Generic.IEqualityComparer`1<StatsController/Stats>
struct IEqualityComparer_1_t83CCDC79BE71227FF526C662BFEDC9A732266B23;
// System.Collections.Generic.Dictionary`2/KeyCollection<StatsController/Stats,System.Int32>
struct KeyCollection_t713B1D932FC16A613AB3528CF809A9B3F400C7D6;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32Enum,System.Int32>
struct ValueCollection_tD929308874B3AE2B67C8D364703457B1C2CA578C;
// System.Collections.Generic.Dictionary`2/ValueCollection<StatsController/Stats,System.Int32>
struct ValueCollection_t8ABF7C4906E3BC2AB6C7DD4E6BAF158F0B1ECD02;
// System.Collections.Generic.Dictionary`2/Entry<StatsController/Stats,System.Int32>[]
struct EntryU5BU5D_t574B348F5C14157C2411F4717363F1E0352E3FCD;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.Animation
struct Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UI.Button
struct Button_t835E5BB8859DCC6B74CB721B2E668AB21A99C057;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// ButtonManager
struct ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// Countdown
struct Countdown_t16A006C04122DC18F60360F373E3E71866EFAD20;
// DDOL
struct DDOL_t22079F0D379F512F7086FDEC1DF46C1ABE0F2B9E;
// Driver
struct Driver_t2AD30C27D04F1E04A5C815739AB520064BCE9AE0;
// Droplet
struct Droplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF;
// ErrorScript
struct ErrorScript_tC3890EB6BE037D788D007075DE1A96B692A23256;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// World.Eye
struct Eye_tF20146531CD92887047A5E8C3D7F14526A7D84A8;
// FollowCamera
struct FollowCamera_tDC43B01F7C498FBA58AC6A8AC2897485C46FAC1A;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// GameController
struct GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274;
// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// GetAddScore
struct GetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// World.Horizon
struct Horizon_t396B45C0C2FCCBBEEE57CF298C4899E22AF128FE;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// Instruction
struct Instruction_t35BE89F86B1FEE917BA37A65E94EFA45FAEE919A;
// Instructions
struct Instructions_t0F2023CAC7FCBA43D7E3847F96AE8DEB4ECD0E89;
// UI.MainMenu
struct MainMenu_tDC081FD41A81E74FD3EB756F8006FC7687EA332A;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.ParticleSystem
struct ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Controllers.SceneController
struct SceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D;
// SceneLoader
struct SceneLoader_t3266812523B184D5AEDF27CA310452129C676B0D;
// ScoreManager
struct ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// StatsController
struct StatsController_tBB477720ABA192D16DF50C483D289E3E5A889095;
// StopTime
struct StopTime_tC6E2F2D2D28372C933A7F0B5105DB4FB3F295786;
// System.String
struct String_t;
// SummaryManager
struct SummaryManager_t3E936A619358AB897319D2F29433407F509E4263;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// TimeManager
struct TimeManager_t7C9EC9E1F31A3BAAE33B119C0B91347D37ABAF82;
// TrafficLight
struct TrafficLight_tD55F68E16E18C0A5F32B506715F5BE0989084ABD;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// cardScript
struct cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6;
// gameManager
struct gameManager_t2A9919D7CB9773B3211A72C5DA02B305DE63B8AB;
// getTime
struct getTime_t35B684BAE3F51C0B31B7059A6A772B7052A9E23D;
// timeScript
struct timeScript_t676CF5FF3D174FDE41EE6B117EC3542CE225C182;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// ButtonManager/<HideGhost>d__8
struct U3CHideGhostU3Ed__8_t749108EEA4C8AEFD44F8B618A2649711FE52BF6C;
// ButtonManager/<HitGhost>d__9
struct U3CHitGhostU3Ed__9_t3FD34179317C706741C8ADC0FB2F966AF3A787C4;
// ButtonManager/<ShowGhost>d__7
struct U3CShowGhostU3Ed__7_tABC923EDB14A96DAA4B068E1A7DD2C59DC240056;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// Driver/<endGame>d__15
struct U3CendGameU3Ed__15_tCC463386A1B61B40FD8EECE6B47D4AC99BBCCAFC;
// Driver/<speed>d__14
struct U3CspeedU3Ed__14_tAED4F0B8D128FBFC7AF15B2386463C1466BFB5E0;
// GameManager/<endGame>d__15
struct U3CendGameU3Ed__15_t253E2AF2E4FB090B5DC46DBC22B801A7E06390F9;
// GameManager/<incorrect>d__14
struct U3CincorrectU3Ed__14_tFE7CCCAA58DE29E1D3B8C29A43713ABC6A845316;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// Controllers.SceneController/<LoadScene>d__6
struct U3CLoadSceneU3Ed__6_tF321E46183EB6FBD589D29E33DFF2E8D939D324D;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780;
// StatsController/<DecreaseStat>d__11
struct U3CDecreaseStatU3Ed__11_t4917F8E64D46140E0510AAC61E692EA94C1E3BF2;
// TimeManager/<endGame>d__6
struct U3CendGameU3Ed__6_t05CCEFCBCC960836A17AEB1322F2E62BFEE00D2E;
// TrafficLight/<Cycle>d__5
struct U3CCycleU3Ed__5_t31732404568B7EF11413CAAF13D0B07C6E7AC9A2;
// cardScript/<pause>d__20
struct U3CpauseU3Ed__20_t80A82111B292E0B9D43B8B71F99F25A6BDD0EEC8;
// gameManager/<endGame>d__15
struct U3CendGameU3Ed__15_t3938227E4045198C45B0340DABB7F1EF91CF0B5B;

IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Instruction_t35BE89F86B1FEE917BA37A65E94EFA45FAEE919A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Instructions_t0F2023CAC7FCBA43D7E3847F96AE8DEB4ECD0E89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScoreTypes_t89BF1731E38AB90545999A938475D8F291DB4A99_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stats_t212226081718AC4705DA7DC6B3C211CDF092B3CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCycleU3Ed__5_t31732404568B7EF11413CAAF13D0B07C6E7AC9A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDecreaseStatU3Ed__11_t4917F8E64D46140E0510AAC61E692EA94C1E3BF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CHideGhostU3Ed__8_t749108EEA4C8AEFD44F8B618A2649711FE52BF6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CHitGhostU3Ed__9_t3FD34179317C706741C8ADC0FB2F966AF3A787C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadSceneU3Ed__6_tF321E46183EB6FBD589D29E33DFF2E8D939D324D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CShowGhostU3Ed__7_tABC923EDB14A96DAA4B068E1A7DD2C59DC240056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CendGameU3Ed__15_t253E2AF2E4FB090B5DC46DBC22B801A7E06390F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CendGameU3Ed__15_t3938227E4045198C45B0340DABB7F1EF91CF0B5B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CendGameU3Ed__15_tCC463386A1B61B40FD8EECE6B47D4AC99BBCCAFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CendGameU3Ed__6_t05CCEFCBCC960836A17AEB1322F2E62BFEE00D2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CincorrectU3Ed__14_tFE7CCCAA58DE29E1D3B8C29A43713ABC6A845316_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CpauseU3Ed__20_t80A82111B292E0B9D43B8B71F99F25A6BDD0EEC8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CspeedU3Ed__14_tAED4F0B8D128FBFC7AF15B2386463C1466BFB5E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719;
IL2CPP_EXTERN_C String_t* _stringLiteral132749B9CE189115DFF93C882CA5F528014FF41F;
IL2CPP_EXTERN_C String_t* _stringLiteral162E86C91F5205A141B28109C3F1C992A8B0D613;
IL2CPP_EXTERN_C String_t* _stringLiteral19722AC100562EF1E66E244B5E1EB07AD561FF86;
IL2CPP_EXTERN_C String_t* _stringLiteral19E04B5FEE6A5CFA0A7B48C209BEBD1BE462DB4B;
IL2CPP_EXTERN_C String_t* _stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6;
IL2CPP_EXTERN_C String_t* _stringLiteral241D63F73ED8ABEFF765B28C9791693C5814C752;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral285E3C03E340455D89B211A0A47AE592F4C2B105;
IL2CPP_EXTERN_C String_t* _stringLiteral299E01A3C227A338CCCF7D17E88F26B036E2B8EC;
IL2CPP_EXTERN_C String_t* _stringLiteral2D2459A14B5548945DC69B3234BD9F06AAF41428;
IL2CPP_EXTERN_C String_t* _stringLiteral369BCE79E7017ACC971C2E176459A8DAB4079971;
IL2CPP_EXTERN_C String_t* _stringLiteral3A8FEB9EDCDE7BF9B7F65ADAA728AF508785C657;
IL2CPP_EXTERN_C String_t* _stringLiteral3D574506275F634BC8700ED6B88553583D07C3F9;
IL2CPP_EXTERN_C String_t* _stringLiteral3ECDFE8945C09AB159F2C17858C48E954CB90A2B;
IL2CPP_EXTERN_C String_t* _stringLiteral432640E3BCCFBDDB088EC8A3AE94E2C2995F96EA;
IL2CPP_EXTERN_C String_t* _stringLiteral44D700698DE33F580439BBCA0F2168D827EBDCAA;
IL2CPP_EXTERN_C String_t* _stringLiteral51B5CD1D6594415A8439F216785E444EDDED9C65;
IL2CPP_EXTERN_C String_t* _stringLiteral5A12E64C285A43EE258D15AE96138179CA5633F9;
IL2CPP_EXTERN_C String_t* _stringLiteral5ACDFF9A389332216C4D2638C239E2BD5667E2F0;
IL2CPP_EXTERN_C String_t* _stringLiteral5BAB35B0590CD96882325346D548D4B3D8FF5C14;
IL2CPP_EXTERN_C String_t* _stringLiteral632E4CA0EE96B461C1379977080C85B82BEFC57D;
IL2CPP_EXTERN_C String_t* _stringLiteral7831B7715AA09703BEA6DAB66D910E60EB689C3F;
IL2CPP_EXTERN_C String_t* _stringLiteral7C76B73FCA85389C123A41FFEF6CD3BEC7944A03;
IL2CPP_EXTERN_C String_t* _stringLiteral7DBBCE50C794FFB9AA76A7FA1609EF06852F6E53;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral884820433266E121D9AF505AF4DE98B3BA081DC8;
IL2CPP_EXTERN_C String_t* _stringLiteral8C664E07394AE1D3EF0A9AD2790A4DB84498DD15;
IL2CPP_EXTERN_C String_t* _stringLiteral9929B1163D9A450347CE80EC352823B9C7CE072F;
IL2CPP_EXTERN_C String_t* _stringLiteral9975877697FB13E80C9F4829686286F97CF77026;
IL2CPP_EXTERN_C String_t* _stringLiteral9C2809E69B0C1EC23846AB4AEDE4E1A8688ABEC6;
IL2CPP_EXTERN_C String_t* _stringLiteralA14929A8F3DF2F7E96B8E96ABC70C155DC85D4B2;
IL2CPP_EXTERN_C String_t* _stringLiteralB263E39D78895929576F7A78CBB3C8EFBCA2DC08;
IL2CPP_EXTERN_C String_t* _stringLiteralD0ED343195A5AF114483C53DB9F3F7FF03CABB07;
IL2CPP_EXTERN_C String_t* _stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2;
IL2CPP_EXTERN_C String_t* _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73;
IL2CPP_EXTERN_C String_t* _stringLiteralE633B4F1DE3013202D525BC0763C4003D4697E65;
IL2CPP_EXTERN_C String_t* _stringLiteralF37CBD339C4FC2591F66448F35A256012A55618F;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m35A25765687BBD2CA19755DA5B323380186EF504_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3D32778087167D107BBEBD82CC70FF1E40E5B621_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m12730F905521D6C9F926E7BFEBECD3B0D33E5D25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m8E5F0FC180955E92CB7AC73D8C05DCE3B586A8E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m9518B8E529196767B4E55D75073528EB4242178D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mF9210916F0878172593D361C0D57EB02043E606D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8_m92B9ADEC5AE6A5FB55D702AD0410469739EF307C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisDroplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF_mF19868F8C2A83A7BC3341157892E7DBD1D23A0FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisErrorScript_tC3890EB6BE037D788D007075DE1A96B692A23256_m34057746B92896B0D25D03D99B3F51A957795DF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83_m3DF57F4764A980487940B6B376435B8024A1D23C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D_m1C3BCA64655E8EDDFB4DFA15A2CD2E809257E620_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mCF2C6D0E8D0B7E12C53CF51A613D9A6545FC05F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisStatsController_tBB477720ABA192D16DF50C483D289E3E5A889095_m3A8F8E23C79DAF9AE52E9EA41EEDBBCCEA041956_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTrafficLight_tD55F68E16E18C0A5F32B506715F5BE0989084ABD_mF959F11BDB482AF2885039C367E5B2EE34D4E1C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TiscardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6_m56F647CEF21406EE0F7D3ABE225F1DEE7FD1CAB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisgameManager_t2A9919D7CB9773B3211A72C5DA02B305DE63B8AB_m49ED8B9C83E58A4240FC71E9AB438EBF2C9EB619_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TistimeScript_t676CF5FF3D174FDE41EE6B117EC3542CE225C182_mD0FC1FED96DB99D94449D7FDAA5054AFAE0AFCB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m1D81E170D9B0CD0720A6BCDD722BC8A0B4AA8F0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCycleU3Ed__5_System_Collections_IEnumerator_Reset_m0007480788D5919CBF8FC9601A7EF7692B585FB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDecreaseStatU3Ed__11_System_Collections_IEnumerator_Reset_mD95AB0D2B67B3D29B23DEA3E7932ECE8CC96E508_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CHideGhostU3Ed__8_System_Collections_IEnumerator_Reset_m90DEAEFBDCAFF20B35FBDEB0A809F62FE5C47606_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CHitGhostU3Ed__9_System_Collections_IEnumerator_Reset_mF77D00F34D7117D064498B13D735D1EB98CB6226_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadSceneU3Ed__6_System_Collections_IEnumerator_Reset_mB1C517BC57EB9288C7DCD1A49C2516E25BE305F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShowGhostU3Ed__7_System_Collections_IEnumerator_Reset_m74AE67848A7B571533C0FE37836EC2162E71EBEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CendGameU3Ed__15_System_Collections_IEnumerator_Reset_m3847E4B27D98016D5D574A12E34B9E35DC125513_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CendGameU3Ed__15_System_Collections_IEnumerator_Reset_m680890F6D3D7A82AEDBC3CAC04E0C2ADA7C7FB35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CendGameU3Ed__15_System_Collections_IEnumerator_Reset_m9F81B641846ED624BEA3B47D13C9EB3B6657010E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CendGameU3Ed__6_System_Collections_IEnumerator_Reset_m9C0EDF4FC96F6DCD2DBAE1DEE2ADFB4A83FB4A1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CincorrectU3Ed__14_System_Collections_IEnumerator_Reset_m488219B6D5A22DD870987E85BE1D20CD4FF32357_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CpauseU3Ed__20_System_Collections_IEnumerator_Reset_m3C2834DA90DD095FE0EFA84148099534332E168A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CspeedU3Ed__14_System_Collections_IEnumerator_Reset_m0E4A4445111ED7A9BE3A388FFF87865332681A5A_RuntimeMethod_var;
struct ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 ;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77;
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<StatsController/Stats,System.Int32>
struct Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t574B348F5C14157C2411F4717363F1E0352E3FCD* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t713B1D932FC16A613AB3528CF809A9B3F400C7D6 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t8ABF7C4906E3BC2AB6C7DD4E6BAF158F0B1ECD02 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D, ___entries_1)); }
	inline EntryU5BU5D_t574B348F5C14157C2411F4717363F1E0352E3FCD* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t574B348F5C14157C2411F4717363F1E0352E3FCD** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t574B348F5C14157C2411F4717363F1E0352E3FCD* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D, ___keys_7)); }
	inline KeyCollection_t713B1D932FC16A613AB3528CF809A9B3F400C7D6 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t713B1D932FC16A613AB3528CF809A9B3F400C7D6 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t713B1D932FC16A613AB3528CF809A9B3F400C7D6 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D, ___values_8)); }
	inline ValueCollection_t8ABF7C4906E3BC2AB6C7DD4E6BAF158F0B1ECD02 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t8ABF7C4906E3BC2AB6C7DD4E6BAF158F0B1ECD02 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t8ABF7C4906E3BC2AB6C7DD4E6BAF158F0B1ECD02 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____items_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<StatsController/Stats,System.Int32>
struct ValueCollection_t8ABF7C4906E3BC2AB6C7DD4E6BAF158F0B1ECD02  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t8ABF7C4906E3BC2AB6C7DD4E6BAF158F0B1ECD02, ___dictionary_0)); }
	inline Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// ButtonManager/<HideGhost>d__8
struct U3CHideGhostU3Ed__8_t749108EEA4C8AEFD44F8B618A2649711FE52BF6C  : public RuntimeObject
{
public:
	// System.Int32 ButtonManager/<HideGhost>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ButtonManager/<HideGhost>d__8::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// ButtonManager ButtonManager/<HideGhost>d__8::<>4__this
	ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31 * ___U3CU3E4__this_2;
	// UnityEngine.GameObject ButtonManager/<HideGhost>d__8::Ghosts
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Ghosts_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CHideGhostU3Ed__8_t749108EEA4C8AEFD44F8B618A2649711FE52BF6C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CHideGhostU3Ed__8_t749108EEA4C8AEFD44F8B618A2649711FE52BF6C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CHideGhostU3Ed__8_t749108EEA4C8AEFD44F8B618A2649711FE52BF6C, ___U3CU3E4__this_2)); }
	inline ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_Ghosts_3() { return static_cast<int32_t>(offsetof(U3CHideGhostU3Ed__8_t749108EEA4C8AEFD44F8B618A2649711FE52BF6C, ___Ghosts_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Ghosts_3() const { return ___Ghosts_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Ghosts_3() { return &___Ghosts_3; }
	inline void set_Ghosts_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Ghosts_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Ghosts_3), (void*)value);
	}
};


// ButtonManager/<HitGhost>d__9
struct U3CHitGhostU3Ed__9_t3FD34179317C706741C8ADC0FB2F966AF3A787C4  : public RuntimeObject
{
public:
	// System.Int32 ButtonManager/<HitGhost>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ButtonManager/<HitGhost>d__9::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.GameObject ButtonManager/<HitGhost>d__9::Ghosts
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Ghosts_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CHitGhostU3Ed__9_t3FD34179317C706741C8ADC0FB2F966AF3A787C4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CHitGhostU3Ed__9_t3FD34179317C706741C8ADC0FB2F966AF3A787C4, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_Ghosts_2() { return static_cast<int32_t>(offsetof(U3CHitGhostU3Ed__9_t3FD34179317C706741C8ADC0FB2F966AF3A787C4, ___Ghosts_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Ghosts_2() const { return ___Ghosts_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Ghosts_2() { return &___Ghosts_2; }
	inline void set_Ghosts_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Ghosts_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Ghosts_2), (void*)value);
	}
};


// ButtonManager/<ShowGhost>d__7
struct U3CShowGhostU3Ed__7_tABC923EDB14A96DAA4B068E1A7DD2C59DC240056  : public RuntimeObject
{
public:
	// System.Int32 ButtonManager/<ShowGhost>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ButtonManager/<ShowGhost>d__7::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// ButtonManager ButtonManager/<ShowGhost>d__7::<>4__this
	ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CShowGhostU3Ed__7_tABC923EDB14A96DAA4B068E1A7DD2C59DC240056, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CShowGhostU3Ed__7_tABC923EDB14A96DAA4B068E1A7DD2C59DC240056, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CShowGhostU3Ed__7_tABC923EDB14A96DAA4B068E1A7DD2C59DC240056, ___U3CU3E4__this_2)); }
	inline ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Driver/<endGame>d__15
struct U3CendGameU3Ed__15_tCC463386A1B61B40FD8EECE6B47D4AC99BBCCAFC  : public RuntimeObject
{
public:
	// System.Int32 Driver/<endGame>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Driver/<endGame>d__15::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Driver Driver/<endGame>d__15::<>4__this
	Driver_t2AD30C27D04F1E04A5C815739AB520064BCE9AE0 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CendGameU3Ed__15_tCC463386A1B61B40FD8EECE6B47D4AC99BBCCAFC, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CendGameU3Ed__15_tCC463386A1B61B40FD8EECE6B47D4AC99BBCCAFC, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CendGameU3Ed__15_tCC463386A1B61B40FD8EECE6B47D4AC99BBCCAFC, ___U3CU3E4__this_2)); }
	inline Driver_t2AD30C27D04F1E04A5C815739AB520064BCE9AE0 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Driver_t2AD30C27D04F1E04A5C815739AB520064BCE9AE0 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Driver_t2AD30C27D04F1E04A5C815739AB520064BCE9AE0 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Driver/<speed>d__14
struct U3CspeedU3Ed__14_tAED4F0B8D128FBFC7AF15B2386463C1466BFB5E0  : public RuntimeObject
{
public:
	// System.Int32 Driver/<speed>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Driver/<speed>d__14::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Driver Driver/<speed>d__14::<>4__this
	Driver_t2AD30C27D04F1E04A5C815739AB520064BCE9AE0 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CspeedU3Ed__14_tAED4F0B8D128FBFC7AF15B2386463C1466BFB5E0, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CspeedU3Ed__14_tAED4F0B8D128FBFC7AF15B2386463C1466BFB5E0, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CspeedU3Ed__14_tAED4F0B8D128FBFC7AF15B2386463C1466BFB5E0, ___U3CU3E4__this_2)); }
	inline Driver_t2AD30C27D04F1E04A5C815739AB520064BCE9AE0 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Driver_t2AD30C27D04F1E04A5C815739AB520064BCE9AE0 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Driver_t2AD30C27D04F1E04A5C815739AB520064BCE9AE0 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// GameManager/<endGame>d__15
struct U3CendGameU3Ed__15_t253E2AF2E4FB090B5DC46DBC22B801A7E06390F9  : public RuntimeObject
{
public:
	// System.Int32 GameManager/<endGame>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<endGame>d__15::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GameManager GameManager/<endGame>d__15::<>4__this
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CendGameU3Ed__15_t253E2AF2E4FB090B5DC46DBC22B801A7E06390F9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CendGameU3Ed__15_t253E2AF2E4FB090B5DC46DBC22B801A7E06390F9, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CendGameU3Ed__15_t253E2AF2E4FB090B5DC46DBC22B801A7E06390F9, ___U3CU3E4__this_2)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// GameManager/<incorrect>d__14
struct U3CincorrectU3Ed__14_tFE7CCCAA58DE29E1D3B8C29A43713ABC6A845316  : public RuntimeObject
{
public:
	// System.Int32 GameManager/<incorrect>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<incorrect>d__14::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GameManager GameManager/<incorrect>d__14::<>4__this
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___U3CU3E4__this_2;
	// System.Int32 GameManager/<incorrect>d__14::i
	int32_t ___i_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CincorrectU3Ed__14_tFE7CCCAA58DE29E1D3B8C29A43713ABC6A845316, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CincorrectU3Ed__14_tFE7CCCAA58DE29E1D3B8C29A43713ABC6A845316, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CincorrectU3Ed__14_tFE7CCCAA58DE29E1D3B8C29A43713ABC6A845316, ___U3CU3E4__this_2)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_i_3() { return static_cast<int32_t>(offsetof(U3CincorrectU3Ed__14_tFE7CCCAA58DE29E1D3B8C29A43713ABC6A845316, ___i_3)); }
	inline int32_t get_i_3() const { return ___i_3; }
	inline int32_t* get_address_of_i_3() { return &___i_3; }
	inline void set_i_3(int32_t value)
	{
		___i_3 = value;
	}
};


// Controllers.SceneController/<LoadScene>d__6
struct U3CLoadSceneU3Ed__6_tF321E46183EB6FBD589D29E33DFF2E8D939D324D  : public RuntimeObject
{
public:
	// System.Int32 Controllers.SceneController/<LoadScene>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Controllers.SceneController/<LoadScene>d__6::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Controllers.SceneController Controllers.SceneController/<LoadScene>d__6::<>4__this
	SceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D * ___U3CU3E4__this_2;
	// System.String Controllers.SceneController/<LoadScene>d__6::sceneName
	String_t* ___sceneName_3;
	// UnityEngine.AsyncOperation Controllers.SceneController/<LoadScene>d__6::<asyncOperation>5__2
	AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___U3CasyncOperationU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoadSceneU3Ed__6_tF321E46183EB6FBD589D29E33DFF2E8D939D324D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CLoadSceneU3Ed__6_tF321E46183EB6FBD589D29E33DFF2E8D939D324D, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CLoadSceneU3Ed__6_tF321E46183EB6FBD589D29E33DFF2E8D939D324D, ___U3CU3E4__this_2)); }
	inline SceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_sceneName_3() { return static_cast<int32_t>(offsetof(U3CLoadSceneU3Ed__6_tF321E46183EB6FBD589D29E33DFF2E8D939D324D, ___sceneName_3)); }
	inline String_t* get_sceneName_3() const { return ___sceneName_3; }
	inline String_t** get_address_of_sceneName_3() { return &___sceneName_3; }
	inline void set_sceneName_3(String_t* value)
	{
		___sceneName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneName_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CasyncOperationU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CLoadSceneU3Ed__6_tF321E46183EB6FBD589D29E33DFF2E8D939D324D, ___U3CasyncOperationU3E5__2_4)); }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * get_U3CasyncOperationU3E5__2_4() const { return ___U3CasyncOperationU3E5__2_4; }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 ** get_address_of_U3CasyncOperationU3E5__2_4() { return &___U3CasyncOperationU3E5__2_4; }
	inline void set_U3CasyncOperationU3E5__2_4(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * value)
	{
		___U3CasyncOperationU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CasyncOperationU3E5__2_4), (void*)value);
	}
};


// TimeManager/<endGame>d__6
struct U3CendGameU3Ed__6_t05CCEFCBCC960836A17AEB1322F2E62BFEE00D2E  : public RuntimeObject
{
public:
	// System.Int32 TimeManager/<endGame>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TimeManager/<endGame>d__6::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TimeManager TimeManager/<endGame>d__6::<>4__this
	TimeManager_t7C9EC9E1F31A3BAAE33B119C0B91347D37ABAF82 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CendGameU3Ed__6_t05CCEFCBCC960836A17AEB1322F2E62BFEE00D2E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CendGameU3Ed__6_t05CCEFCBCC960836A17AEB1322F2E62BFEE00D2E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CendGameU3Ed__6_t05CCEFCBCC960836A17AEB1322F2E62BFEE00D2E, ___U3CU3E4__this_2)); }
	inline TimeManager_t7C9EC9E1F31A3BAAE33B119C0B91347D37ABAF82 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TimeManager_t7C9EC9E1F31A3BAAE33B119C0B91347D37ABAF82 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TimeManager_t7C9EC9E1F31A3BAAE33B119C0B91347D37ABAF82 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// TrafficLight/<Cycle>d__5
struct U3CCycleU3Ed__5_t31732404568B7EF11413CAAF13D0B07C6E7AC9A2  : public RuntimeObject
{
public:
	// System.Int32 TrafficLight/<Cycle>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TrafficLight/<Cycle>d__5::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TrafficLight TrafficLight/<Cycle>d__5::<>4__this
	TrafficLight_tD55F68E16E18C0A5F32B506715F5BE0989084ABD * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCycleU3Ed__5_t31732404568B7EF11413CAAF13D0B07C6E7AC9A2, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCycleU3Ed__5_t31732404568B7EF11413CAAF13D0B07C6E7AC9A2, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCycleU3Ed__5_t31732404568B7EF11413CAAF13D0B07C6E7AC9A2, ___U3CU3E4__this_2)); }
	inline TrafficLight_tD55F68E16E18C0A5F32B506715F5BE0989084ABD * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TrafficLight_tD55F68E16E18C0A5F32B506715F5BE0989084ABD ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TrafficLight_tD55F68E16E18C0A5F32B506715F5BE0989084ABD * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// cardScript/<pause>d__20
struct U3CpauseU3Ed__20_t80A82111B292E0B9D43B8B71F99F25A6BDD0EEC8  : public RuntimeObject
{
public:
	// System.Int32 cardScript/<pause>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object cardScript/<pause>d__20::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// cardScript cardScript/<pause>d__20::<>4__this
	cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CpauseU3Ed__20_t80A82111B292E0B9D43B8B71F99F25A6BDD0EEC8, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CpauseU3Ed__20_t80A82111B292E0B9D43B8B71F99F25A6BDD0EEC8, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CpauseU3Ed__20_t80A82111B292E0B9D43B8B71F99F25A6BDD0EEC8, ___U3CU3E4__this_2)); }
	inline cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// gameManager/<endGame>d__15
struct U3CendGameU3Ed__15_t3938227E4045198C45B0340DABB7F1EF91CF0B5B  : public RuntimeObject
{
public:
	// System.Int32 gameManager/<endGame>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object gameManager/<endGame>d__15::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// gameManager gameManager/<endGame>d__15::<>4__this
	gameManager_t2A9919D7CB9773B3211A72C5DA02B305DE63B8AB * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CendGameU3Ed__15_t3938227E4045198C45B0340DABB7F1EF91CF0B5B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CendGameU3Ed__15_t3938227E4045198C45B0340DABB7F1EF91CF0B5B, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CendGameU3Ed__15_t3938227E4045198C45B0340DABB7F1EF91CF0B5B, ___U3CU3E4__this_2)); }
	inline gameManager_t2A9919D7CB9773B3211A72C5DA02B305DE63B8AB * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline gameManager_t2A9919D7CB9773B3211A72C5DA02B305DE63B8AB ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(gameManager_t2A9919D7CB9773B3211A72C5DA02B305DE63B8AB * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// UnityEngine.AnimatorStateInfo
struct AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA 
{
public:
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Name_0)); }
	inline int32_t get_m_Name_0() const { return ___m_Name_0; }
	inline int32_t* get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(int32_t value)
	{
		___m_Name_0 = value;
	}

	inline static int32_t get_offset_of_m_Path_1() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Path_1)); }
	inline int32_t get_m_Path_1() const { return ___m_Path_1; }
	inline int32_t* get_address_of_m_Path_1() { return &___m_Path_1; }
	inline void set_m_Path_1(int32_t value)
	{
		___m_Path_1 = value;
	}

	inline static int32_t get_offset_of_m_FullPath_2() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_FullPath_2)); }
	inline int32_t get_m_FullPath_2() const { return ___m_FullPath_2; }
	inline int32_t* get_address_of_m_FullPath_2() { return &___m_FullPath_2; }
	inline void set_m_FullPath_2(int32_t value)
	{
		___m_FullPath_2 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedTime_3() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_NormalizedTime_3)); }
	inline float get_m_NormalizedTime_3() const { return ___m_NormalizedTime_3; }
	inline float* get_address_of_m_NormalizedTime_3() { return &___m_NormalizedTime_3; }
	inline void set_m_NormalizedTime_3(float value)
	{
		___m_NormalizedTime_3 = value;
	}

	inline static int32_t get_offset_of_m_Length_4() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Length_4)); }
	inline float get_m_Length_4() const { return ___m_Length_4; }
	inline float* get_address_of_m_Length_4() { return &___m_Length_4; }
	inline void set_m_Length_4(float value)
	{
		___m_Length_4 = value;
	}

	inline static int32_t get_offset_of_m_Speed_5() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Speed_5)); }
	inline float get_m_Speed_5() const { return ___m_Speed_5; }
	inline float* get_address_of_m_Speed_5() { return &___m_Speed_5; }
	inline void set_m_Speed_5(float value)
	{
		___m_Speed_5 = value;
	}

	inline static int32_t get_offset_of_m_SpeedMultiplier_6() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_SpeedMultiplier_6)); }
	inline float get_m_SpeedMultiplier_6() const { return ___m_SpeedMultiplier_6; }
	inline float* get_address_of_m_SpeedMultiplier_6() { return &___m_SpeedMultiplier_6; }
	inline void set_m_SpeedMultiplier_6(float value)
	{
		___m_SpeedMultiplier_6 = value;
	}

	inline static int32_t get_offset_of_m_Tag_7() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Tag_7)); }
	inline int32_t get_m_Tag_7() const { return ___m_Tag_7; }
	inline int32_t* get_address_of_m_Tag_7() { return &___m_Tag_7; }
	inline void set_m_Tag_7(int32_t value)
	{
		___m_Tag_7 = value;
	}

	inline static int32_t get_offset_of_m_Loop_8() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA, ___m_Loop_8)); }
	inline int32_t get_m_Loop_8() const { return ___m_Loop_8; }
	inline int32_t* get_address_of_m_Loop_8() { return &___m_Loop_8; }
	inline void set_m_Loop_8(int32_t value)
	{
		___m_Loop_8 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Color32
struct Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2__padding[1];
	};

public:
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* ___m_LegacyContacts_8;

public:
	inline static int32_t get_offset_of_m_Collider_0() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Collider_0)); }
	inline int32_t get_m_Collider_0() const { return ___m_Collider_0; }
	inline int32_t* get_address_of_m_Collider_0() { return &___m_Collider_0; }
	inline void set_m_Collider_0(int32_t value)
	{
		___m_Collider_0 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_1() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_OtherCollider_1)); }
	inline int32_t get_m_OtherCollider_1() const { return ___m_OtherCollider_1; }
	inline int32_t* get_address_of_m_OtherCollider_1() { return &___m_OtherCollider_1; }
	inline void set_m_OtherCollider_1(int32_t value)
	{
		___m_OtherCollider_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Rigidbody_2)); }
	inline int32_t get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline int32_t* get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(int32_t value)
	{
		___m_Rigidbody_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_3() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_OtherRigidbody_3)); }
	inline int32_t get_m_OtherRigidbody_3() const { return ___m_OtherRigidbody_3; }
	inline int32_t* get_address_of_m_OtherRigidbody_3() { return &___m_OtherRigidbody_3; }
	inline void set_m_OtherRigidbody_3(int32_t value)
	{
		___m_OtherRigidbody_3 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_4() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_RelativeVelocity_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RelativeVelocity_4() const { return ___m_RelativeVelocity_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RelativeVelocity_4() { return &___m_RelativeVelocity_4; }
	inline void set_m_RelativeVelocity_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RelativeVelocity_4 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_5() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Enabled_5)); }
	inline int32_t get_m_Enabled_5() const { return ___m_Enabled_5; }
	inline int32_t* get_address_of_m_Enabled_5() { return &___m_Enabled_5; }
	inline void set_m_Enabled_5(int32_t value)
	{
		___m_Enabled_5 = value;
	}

	inline static int32_t get_offset_of_m_ContactCount_6() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_ContactCount_6)); }
	inline int32_t get_m_ContactCount_6() const { return ___m_ContactCount_6; }
	inline int32_t* get_address_of_m_ContactCount_6() { return &___m_ContactCount_6; }
	inline void set_m_ContactCount_6(int32_t value)
	{
		___m_ContactCount_6 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_7() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_ReusedContacts_7)); }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* get_m_ReusedContacts_7() const { return ___m_ReusedContacts_7; }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277** get_address_of_m_ReusedContacts_7() { return &___m_ReusedContacts_7; }
	inline void set_m_ReusedContacts_7(ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* value)
	{
		___m_ReusedContacts_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_8() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_LegacyContacts_8)); }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* get_m_LegacyContacts_8() const { return ___m_LegacyContacts_8; }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277** get_address_of_m_LegacyContacts_8() { return &___m_LegacyContacts_8; }
	inline void set_m_LegacyContacts_8(ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* value)
	{
		___m_LegacyContacts_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_8), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_ReusedContacts_7;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_ReusedContacts_7;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_LegacyContacts_8;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// ScoreTypes
struct ScoreTypes_t89BF1731E38AB90545999A938475D8F291DB4A99 
{
public:
	// System.Int32 ScoreTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScoreTypes_t89BF1731E38AB90545999A938475D8F291DB4A99, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Slider/Direction
struct Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// StatsController/Stats
struct Stats_t212226081718AC4705DA7DC6B3C211CDF092B3CC 
{
public:
	// System.Int32 StatsController/Stats::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Stats_t212226081718AC4705DA7DC6B3C211CDF092B3CC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// StatsController/<DecreaseStat>d__11
struct U3CDecreaseStatU3Ed__11_t4917F8E64D46140E0510AAC61E692EA94C1E3BF2  : public RuntimeObject
{
public:
	// System.Int32 StatsController/<DecreaseStat>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object StatsController/<DecreaseStat>d__11::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// StatsController/Stats StatsController/<DecreaseStat>d__11::stat
	int32_t ___stat_2;
	// System.Single StatsController/<DecreaseStat>d__11::repeatRate
	float ___repeatRate_3;
	// StatsController StatsController/<DecreaseStat>d__11::<>4__this
	StatsController_tBB477720ABA192D16DF50C483D289E3E5A889095 * ___U3CU3E4__this_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDecreaseStatU3Ed__11_t4917F8E64D46140E0510AAC61E692EA94C1E3BF2, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDecreaseStatU3Ed__11_t4917F8E64D46140E0510AAC61E692EA94C1E3BF2, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_stat_2() { return static_cast<int32_t>(offsetof(U3CDecreaseStatU3Ed__11_t4917F8E64D46140E0510AAC61E692EA94C1E3BF2, ___stat_2)); }
	inline int32_t get_stat_2() const { return ___stat_2; }
	inline int32_t* get_address_of_stat_2() { return &___stat_2; }
	inline void set_stat_2(int32_t value)
	{
		___stat_2 = value;
	}

	inline static int32_t get_offset_of_repeatRate_3() { return static_cast<int32_t>(offsetof(U3CDecreaseStatU3Ed__11_t4917F8E64D46140E0510AAC61E692EA94C1E3BF2, ___repeatRate_3)); }
	inline float get_repeatRate_3() const { return ___repeatRate_3; }
	inline float* get_address_of_repeatRate_3() { return &___repeatRate_3; }
	inline void set_repeatRate_3(float value)
	{
		___repeatRate_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_4() { return static_cast<int32_t>(offsetof(U3CDecreaseStatU3Ed__11_t4917F8E64D46140E0510AAC61E692EA94C1E3BF2, ___U3CU3E4__this_4)); }
	inline StatsController_tBB477720ABA192D16DF50C483D289E3E5A889095 * get_U3CU3E4__this_4() const { return ___U3CU3E4__this_4; }
	inline StatsController_tBB477720ABA192D16DF50C483D289E3E5A889095 ** get_address_of_U3CU3E4__this_4() { return &___U3CU3E4__this_4; }
	inline void set_U3CU3E4__this_4(StatsController_tBB477720ABA192D16DF50C483D289E3E5A889095 * value)
	{
		___U3CU3E4__this_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_4), (void*)value);
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.ParticleSystem
struct ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Animation
struct Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UI.Button
struct Button_t835E5BB8859DCC6B74CB721B2E668AB21A99C057  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Animator UI.Button::buttonAnimator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___buttonAnimator_4;

public:
	inline static int32_t get_offset_of_buttonAnimator_4() { return static_cast<int32_t>(offsetof(Button_t835E5BB8859DCC6B74CB721B2E668AB21A99C057, ___buttonAnimator_4)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_buttonAnimator_4() const { return ___buttonAnimator_4; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_buttonAnimator_4() { return &___buttonAnimator_4; }
	inline void set_buttonAnimator_4(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___buttonAnimator_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttonAnimator_4), (void*)value);
	}
};


// ButtonManager
struct ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// ScoreManager ButtonManager::scoreManager
	ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * ___scoreManager_4;
	// TimeManager ButtonManager::timeManager
	TimeManager_t7C9EC9E1F31A3BAAE33B119C0B91347D37ABAF82 * ___timeManager_5;
	// UnityEngine.GameObject[] ButtonManager::Ghosts
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___Ghosts_6;
	// System.Single ButtonManager::showTime
	float ___showTime_7;
	// System.Single ButtonManager::hideTime
	float ___hideTime_8;

public:
	inline static int32_t get_offset_of_scoreManager_4() { return static_cast<int32_t>(offsetof(ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31, ___scoreManager_4)); }
	inline ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * get_scoreManager_4() const { return ___scoreManager_4; }
	inline ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 ** get_address_of_scoreManager_4() { return &___scoreManager_4; }
	inline void set_scoreManager_4(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * value)
	{
		___scoreManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreManager_4), (void*)value);
	}

	inline static int32_t get_offset_of_timeManager_5() { return static_cast<int32_t>(offsetof(ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31, ___timeManager_5)); }
	inline TimeManager_t7C9EC9E1F31A3BAAE33B119C0B91347D37ABAF82 * get_timeManager_5() const { return ___timeManager_5; }
	inline TimeManager_t7C9EC9E1F31A3BAAE33B119C0B91347D37ABAF82 ** get_address_of_timeManager_5() { return &___timeManager_5; }
	inline void set_timeManager_5(TimeManager_t7C9EC9E1F31A3BAAE33B119C0B91347D37ABAF82 * value)
	{
		___timeManager_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timeManager_5), (void*)value);
	}

	inline static int32_t get_offset_of_Ghosts_6() { return static_cast<int32_t>(offsetof(ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31, ___Ghosts_6)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_Ghosts_6() const { return ___Ghosts_6; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_Ghosts_6() { return &___Ghosts_6; }
	inline void set_Ghosts_6(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___Ghosts_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Ghosts_6), (void*)value);
	}

	inline static int32_t get_offset_of_showTime_7() { return static_cast<int32_t>(offsetof(ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31, ___showTime_7)); }
	inline float get_showTime_7() const { return ___showTime_7; }
	inline float* get_address_of_showTime_7() { return &___showTime_7; }
	inline void set_showTime_7(float value)
	{
		___showTime_7 = value;
	}

	inline static int32_t get_offset_of_hideTime_8() { return static_cast<int32_t>(offsetof(ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31, ___hideTime_8)); }
	inline float get_hideTime_8() const { return ___hideTime_8; }
	inline float* get_address_of_hideTime_8() { return &___hideTime_8; }
	inline void set_hideTime_8(float value)
	{
		___hideTime_8 = value;
	}
};


// Countdown
struct Countdown_t16A006C04122DC18F60360F373E3E71866EFAD20  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// DDOL
struct DDOL_t22079F0D379F512F7086FDEC1DF46C1ABE0F2B9E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Driver
struct Driver_t2AD30C27D04F1E04A5C815739AB520064BCE9AE0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Driver::steerSpeed
	float ___steerSpeed_4;
	// System.Single Driver::normalSpeed
	float ___normalSpeed_5;
	// System.Single Driver::slowSpeed
	float ___slowSpeed_6;
	// System.Single Driver::moveSpeed
	float ___moveSpeed_7;
	// System.Boolean Driver::end
	bool ___end_8;
	// System.Int32 Driver::bumps
	int32_t ___bumps_9;
	// UnityEngine.GameObject Driver::gameTime
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameTime_10;
	// UnityEngine.GameObject Driver::trafficLight
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___trafficLight_11;
	// UnityEngine.GameObject Driver::statsPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___statsPanel_12;
	// UnityEngine.GameObject Driver::Bumps
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Bumps_13;

public:
	inline static int32_t get_offset_of_steerSpeed_4() { return static_cast<int32_t>(offsetof(Driver_t2AD30C27D04F1E04A5C815739AB520064BCE9AE0, ___steerSpeed_4)); }
	inline float get_steerSpeed_4() const { return ___steerSpeed_4; }
	inline float* get_address_of_steerSpeed_4() { return &___steerSpeed_4; }
	inline void set_steerSpeed_4(float value)
	{
		___steerSpeed_4 = value;
	}

	inline static int32_t get_offset_of_normalSpeed_5() { return static_cast<int32_t>(offsetof(Driver_t2AD30C27D04F1E04A5C815739AB520064BCE9AE0, ___normalSpeed_5)); }
	inline float get_normalSpeed_5() const { return ___normalSpeed_5; }
	inline float* get_address_of_normalSpeed_5() { return &___normalSpeed_5; }
	inline void set_normalSpeed_5(float value)
	{
		___normalSpeed_5 = value;
	}

	inline static int32_t get_offset_of_slowSpeed_6() { return static_cast<int32_t>(offsetof(Driver_t2AD30C27D04F1E04A5C815739AB520064BCE9AE0, ___slowSpeed_6)); }
	inline float get_slowSpeed_6() const { return ___slowSpeed_6; }
	inline float* get_address_of_slowSpeed_6() { return &___slowSpeed_6; }
	inline void set_slowSpeed_6(float value)
	{
		___slowSpeed_6 = value;
	}

	inline static int32_t get_offset_of_moveSpeed_7() { return static_cast<int32_t>(offsetof(Driver_t2AD30C27D04F1E04A5C815739AB520064BCE9AE0, ___moveSpeed_7)); }
	inline float get_moveSpeed_7() const { return ___moveSpeed_7; }
	inline float* get_address_of_moveSpeed_7() { return &___moveSpeed_7; }
	inline void set_moveSpeed_7(float value)
	{
		___moveSpeed_7 = value;
	}

	inline static int32_t get_offset_of_end_8() { return static_cast<int32_t>(offsetof(Driver_t2AD30C27D04F1E04A5C815739AB520064BCE9AE0, ___end_8)); }
	inline bool get_end_8() const { return ___end_8; }
	inline bool* get_address_of_end_8() { return &___end_8; }
	inline void set_end_8(bool value)
	{
		___end_8 = value;
	}

	inline static int32_t get_offset_of_bumps_9() { return static_cast<int32_t>(offsetof(Driver_t2AD30C27D04F1E04A5C815739AB520064BCE9AE0, ___bumps_9)); }
	inline int32_t get_bumps_9() const { return ___bumps_9; }
	inline int32_t* get_address_of_bumps_9() { return &___bumps_9; }
	inline void set_bumps_9(int32_t value)
	{
		___bumps_9 = value;
	}

	inline static int32_t get_offset_of_gameTime_10() { return static_cast<int32_t>(offsetof(Driver_t2AD30C27D04F1E04A5C815739AB520064BCE9AE0, ___gameTime_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gameTime_10() const { return ___gameTime_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gameTime_10() { return &___gameTime_10; }
	inline void set_gameTime_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gameTime_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameTime_10), (void*)value);
	}

	inline static int32_t get_offset_of_trafficLight_11() { return static_cast<int32_t>(offsetof(Driver_t2AD30C27D04F1E04A5C815739AB520064BCE9AE0, ___trafficLight_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_trafficLight_11() const { return ___trafficLight_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_trafficLight_11() { return &___trafficLight_11; }
	inline void set_trafficLight_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___trafficLight_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trafficLight_11), (void*)value);
	}

	inline static int32_t get_offset_of_statsPanel_12() { return static_cast<int32_t>(offsetof(Driver_t2AD30C27D04F1E04A5C815739AB520064BCE9AE0, ___statsPanel_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_statsPanel_12() const { return ___statsPanel_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_statsPanel_12() { return &___statsPanel_12; }
	inline void set_statsPanel_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___statsPanel_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___statsPanel_12), (void*)value);
	}

	inline static int32_t get_offset_of_Bumps_13() { return static_cast<int32_t>(offsetof(Driver_t2AD30C27D04F1E04A5C815739AB520064BCE9AE0, ___Bumps_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Bumps_13() const { return ___Bumps_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Bumps_13() { return &___Bumps_13; }
	inline void set_Bumps_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Bumps_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Bumps_13), (void*)value);
	}
};


// Droplet
struct Droplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Droplet::droplet
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___droplet_4;
	// UnityEngine.Vector2 Droplet::_position
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ____position_5;
	// System.Boolean Droplet::_state
	bool ____state_6;
	// System.Boolean Droplet::_pressed
	bool ____pressed_7;

public:
	inline static int32_t get_offset_of_droplet_4() { return static_cast<int32_t>(offsetof(Droplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF, ___droplet_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_droplet_4() const { return ___droplet_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_droplet_4() { return &___droplet_4; }
	inline void set_droplet_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___droplet_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___droplet_4), (void*)value);
	}

	inline static int32_t get_offset_of__position_5() { return static_cast<int32_t>(offsetof(Droplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF, ____position_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get__position_5() const { return ____position_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of__position_5() { return &____position_5; }
	inline void set__position_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		____position_5 = value;
	}

	inline static int32_t get_offset_of__state_6() { return static_cast<int32_t>(offsetof(Droplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF, ____state_6)); }
	inline bool get__state_6() const { return ____state_6; }
	inline bool* get_address_of__state_6() { return &____state_6; }
	inline void set__state_6(bool value)
	{
		____state_6 = value;
	}

	inline static int32_t get_offset_of__pressed_7() { return static_cast<int32_t>(offsetof(Droplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF, ____pressed_7)); }
	inline bool get__pressed_7() const { return ____pressed_7; }
	inline bool* get_address_of__pressed_7() { return &____pressed_7; }
	inline void set__pressed_7(bool value)
	{
		____pressed_7 = value;
	}
};


// ErrorScript
struct ErrorScript_tC3890EB6BE037D788D007075DE1A96B692A23256  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 ErrorScript::errors
	int32_t ___errors_4;

public:
	inline static int32_t get_offset_of_errors_4() { return static_cast<int32_t>(offsetof(ErrorScript_tC3890EB6BE037D788D007075DE1A96B692A23256, ___errors_4)); }
	inline int32_t get_errors_4() const { return ___errors_4; }
	inline int32_t* get_address_of_errors_4() { return &___errors_4; }
	inline void set_errors_4(int32_t value)
	{
		___errors_4 = value;
	}
};


// World.Eye
struct Eye_tF20146531CD92887047A5E8C3D7F14526A7D84A8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// FollowCamera
struct FollowCamera_tDC43B01F7C498FBA58AC6A8AC2897485C46FAC1A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject FollowCamera::thingToFollow
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___thingToFollow_4;

public:
	inline static int32_t get_offset_of_thingToFollow_4() { return static_cast<int32_t>(offsetof(FollowCamera_tDC43B01F7C498FBA58AC6A8AC2897485C46FAC1A, ___thingToFollow_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_thingToFollow_4() const { return ___thingToFollow_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_thingToFollow_4() { return &___thingToFollow_4; }
	inline void set_thingToFollow_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___thingToFollow_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___thingToFollow_4), (void*)value);
	}
};


// GameController
struct GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject GameController::pauseMenuGameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___pauseMenuGameObject_6;
	// UnityEngine.Transform[] GameController::pauseMenuElements
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ___pauseMenuElements_7;

public:
	inline static int32_t get_offset_of_pauseMenuGameObject_6() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___pauseMenuGameObject_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_pauseMenuGameObject_6() const { return ___pauseMenuGameObject_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_pauseMenuGameObject_6() { return &___pauseMenuGameObject_6; }
	inline void set_pauseMenuGameObject_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___pauseMenuGameObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pauseMenuGameObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_pauseMenuElements_7() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___pauseMenuElements_7)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get_pauseMenuElements_7() const { return ___pauseMenuElements_7; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of_pauseMenuElements_7() { return &___pauseMenuElements_7; }
	inline void set_pauseMenuElements_7(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		___pauseMenuElements_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pauseMenuElements_7), (void*)value);
	}
};

struct GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_StaticFields
{
public:
	// System.Boolean GameController::GamePaused
	bool ___GamePaused_4;
	// System.Boolean GameController::DoubleTempo
	bool ___DoubleTempo_5;

public:
	inline static int32_t get_offset_of_GamePaused_4() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_StaticFields, ___GamePaused_4)); }
	inline bool get_GamePaused_4() const { return ___GamePaused_4; }
	inline bool* get_address_of_GamePaused_4() { return &___GamePaused_4; }
	inline void set_GamePaused_4(bool value)
	{
		___GamePaused_4 = value;
	}

	inline static int32_t get_offset_of_DoubleTempo_5() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_StaticFields, ___DoubleTempo_5)); }
	inline bool get_DoubleTempo_5() const { return ___DoubleTempo_5; }
	inline bool* get_address_of_DoubleTempo_5() { return &___DoubleTempo_5; }
	inline void set_DoubleTempo_5(bool value)
	{
		___DoubleTempo_5 = value;
	}
};


// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject[] GameManager::Droplets
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___Droplets_4;
	// UnityEngine.GameObject GameManager::gameTime
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameTime_5;
	// UnityEngine.GameObject GameManager::gameErrors
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameErrors_6;
	// UnityEngine.GameObject GameManager::statsPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___statsPanel_7;
	// System.Boolean GameManager::_init
	bool ____init_8;
	// System.Int32 GameManager::droplets
	int32_t ___droplets_9;
	// System.Int32 GameManager::minXPos
	int32_t ___minXPos_10;
	// System.Int32 GameManager::maxXPos
	int32_t ___maxXPos_11;
	// System.Int32 GameManager::minYPos
	int32_t ___minYPos_12;
	// System.Int32 GameManager::maxYPos
	int32_t ___maxYPos_13;
	// System.Int32 GameManager::sideLength
	int32_t ___sideLength_14;

public:
	inline static int32_t get_offset_of_Droplets_4() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___Droplets_4)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_Droplets_4() const { return ___Droplets_4; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_Droplets_4() { return &___Droplets_4; }
	inline void set_Droplets_4(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___Droplets_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Droplets_4), (void*)value);
	}

	inline static int32_t get_offset_of_gameTime_5() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___gameTime_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gameTime_5() const { return ___gameTime_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gameTime_5() { return &___gameTime_5; }
	inline void set_gameTime_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gameTime_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameTime_5), (void*)value);
	}

	inline static int32_t get_offset_of_gameErrors_6() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___gameErrors_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gameErrors_6() const { return ___gameErrors_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gameErrors_6() { return &___gameErrors_6; }
	inline void set_gameErrors_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gameErrors_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameErrors_6), (void*)value);
	}

	inline static int32_t get_offset_of_statsPanel_7() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___statsPanel_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_statsPanel_7() const { return ___statsPanel_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_statsPanel_7() { return &___statsPanel_7; }
	inline void set_statsPanel_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___statsPanel_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___statsPanel_7), (void*)value);
	}

	inline static int32_t get_offset_of__init_8() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ____init_8)); }
	inline bool get__init_8() const { return ____init_8; }
	inline bool* get_address_of__init_8() { return &____init_8; }
	inline void set__init_8(bool value)
	{
		____init_8 = value;
	}

	inline static int32_t get_offset_of_droplets_9() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___droplets_9)); }
	inline int32_t get_droplets_9() const { return ___droplets_9; }
	inline int32_t* get_address_of_droplets_9() { return &___droplets_9; }
	inline void set_droplets_9(int32_t value)
	{
		___droplets_9 = value;
	}

	inline static int32_t get_offset_of_minXPos_10() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___minXPos_10)); }
	inline int32_t get_minXPos_10() const { return ___minXPos_10; }
	inline int32_t* get_address_of_minXPos_10() { return &___minXPos_10; }
	inline void set_minXPos_10(int32_t value)
	{
		___minXPos_10 = value;
	}

	inline static int32_t get_offset_of_maxXPos_11() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___maxXPos_11)); }
	inline int32_t get_maxXPos_11() const { return ___maxXPos_11; }
	inline int32_t* get_address_of_maxXPos_11() { return &___maxXPos_11; }
	inline void set_maxXPos_11(int32_t value)
	{
		___maxXPos_11 = value;
	}

	inline static int32_t get_offset_of_minYPos_12() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___minYPos_12)); }
	inline int32_t get_minYPos_12() const { return ___minYPos_12; }
	inline int32_t* get_address_of_minYPos_12() { return &___minYPos_12; }
	inline void set_minYPos_12(int32_t value)
	{
		___minYPos_12 = value;
	}

	inline static int32_t get_offset_of_maxYPos_13() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___maxYPos_13)); }
	inline int32_t get_maxYPos_13() const { return ___maxYPos_13; }
	inline int32_t* get_address_of_maxYPos_13() { return &___maxYPos_13; }
	inline void set_maxYPos_13(int32_t value)
	{
		___maxYPos_13 = value;
	}

	inline static int32_t get_offset_of_sideLength_14() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___sideLength_14)); }
	inline int32_t get_sideLength_14() const { return ___sideLength_14; }
	inline int32_t* get_address_of_sideLength_14() { return &___sideLength_14; }
	inline void set_sideLength_14(int32_t value)
	{
		___sideLength_14 = value;
	}
};


// GetAddScore
struct GetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject GetAddScore::_AddScore
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____AddScore_4;

public:
	inline static int32_t get_offset_of__AddScore_4() { return static_cast<int32_t>(offsetof(GetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83, ____AddScore_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__AddScore_4() const { return ____AddScore_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__AddScore_4() { return &____AddScore_4; }
	inline void set__AddScore_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____AddScore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____AddScore_4), (void*)value);
	}
};


// World.Horizon
struct Horizon_t396B45C0C2FCCBBEEE57CF298C4899E22AF128FE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject World.Horizon::sunGameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___sunGameObject_4;
	// UnityEngine.GameObject World.Horizon::moonGameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___moonGameObject_5;
	// UnityEngine.GameObject World.Horizon::background
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___background_6;
	// UnityEngine.ParticleSystem World.Horizon::stars
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___stars_7;
	// UnityEngine.Animation World.Horizon::sunAnimation
	Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * ___sunAnimation_8;
	// UnityEngine.Animation World.Horizon::moonAnimation
	Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * ___moonAnimation_9;
	// UnityEngine.Animation World.Horizon::dayCounterAnimation
	Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * ___dayCounterAnimation_10;
	// UnityEngine.Animation World.Horizon::backgroundAnimation
	Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * ___backgroundAnimation_11;
	// UnityEngine.UI.Text World.Horizon::dayCounterText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___dayCounterText_12;
	// System.Boolean World.Horizon::isNight
	bool ___isNight_13;
	// System.Int32 World.Horizon::dayCounter
	int32_t ___dayCounter_14;

public:
	inline static int32_t get_offset_of_sunGameObject_4() { return static_cast<int32_t>(offsetof(Horizon_t396B45C0C2FCCBBEEE57CF298C4899E22AF128FE, ___sunGameObject_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_sunGameObject_4() const { return ___sunGameObject_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_sunGameObject_4() { return &___sunGameObject_4; }
	inline void set_sunGameObject_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___sunGameObject_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sunGameObject_4), (void*)value);
	}

	inline static int32_t get_offset_of_moonGameObject_5() { return static_cast<int32_t>(offsetof(Horizon_t396B45C0C2FCCBBEEE57CF298C4899E22AF128FE, ___moonGameObject_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_moonGameObject_5() const { return ___moonGameObject_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_moonGameObject_5() { return &___moonGameObject_5; }
	inline void set_moonGameObject_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___moonGameObject_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___moonGameObject_5), (void*)value);
	}

	inline static int32_t get_offset_of_background_6() { return static_cast<int32_t>(offsetof(Horizon_t396B45C0C2FCCBBEEE57CF298C4899E22AF128FE, ___background_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_background_6() const { return ___background_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_background_6() { return &___background_6; }
	inline void set_background_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___background_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___background_6), (void*)value);
	}

	inline static int32_t get_offset_of_stars_7() { return static_cast<int32_t>(offsetof(Horizon_t396B45C0C2FCCBBEEE57CF298C4899E22AF128FE, ___stars_7)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_stars_7() const { return ___stars_7; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_stars_7() { return &___stars_7; }
	inline void set_stars_7(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___stars_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stars_7), (void*)value);
	}

	inline static int32_t get_offset_of_sunAnimation_8() { return static_cast<int32_t>(offsetof(Horizon_t396B45C0C2FCCBBEEE57CF298C4899E22AF128FE, ___sunAnimation_8)); }
	inline Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * get_sunAnimation_8() const { return ___sunAnimation_8; }
	inline Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 ** get_address_of_sunAnimation_8() { return &___sunAnimation_8; }
	inline void set_sunAnimation_8(Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * value)
	{
		___sunAnimation_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sunAnimation_8), (void*)value);
	}

	inline static int32_t get_offset_of_moonAnimation_9() { return static_cast<int32_t>(offsetof(Horizon_t396B45C0C2FCCBBEEE57CF298C4899E22AF128FE, ___moonAnimation_9)); }
	inline Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * get_moonAnimation_9() const { return ___moonAnimation_9; }
	inline Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 ** get_address_of_moonAnimation_9() { return &___moonAnimation_9; }
	inline void set_moonAnimation_9(Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * value)
	{
		___moonAnimation_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___moonAnimation_9), (void*)value);
	}

	inline static int32_t get_offset_of_dayCounterAnimation_10() { return static_cast<int32_t>(offsetof(Horizon_t396B45C0C2FCCBBEEE57CF298C4899E22AF128FE, ___dayCounterAnimation_10)); }
	inline Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * get_dayCounterAnimation_10() const { return ___dayCounterAnimation_10; }
	inline Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 ** get_address_of_dayCounterAnimation_10() { return &___dayCounterAnimation_10; }
	inline void set_dayCounterAnimation_10(Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * value)
	{
		___dayCounterAnimation_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dayCounterAnimation_10), (void*)value);
	}

	inline static int32_t get_offset_of_backgroundAnimation_11() { return static_cast<int32_t>(offsetof(Horizon_t396B45C0C2FCCBBEEE57CF298C4899E22AF128FE, ___backgroundAnimation_11)); }
	inline Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * get_backgroundAnimation_11() const { return ___backgroundAnimation_11; }
	inline Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 ** get_address_of_backgroundAnimation_11() { return &___backgroundAnimation_11; }
	inline void set_backgroundAnimation_11(Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * value)
	{
		___backgroundAnimation_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___backgroundAnimation_11), (void*)value);
	}

	inline static int32_t get_offset_of_dayCounterText_12() { return static_cast<int32_t>(offsetof(Horizon_t396B45C0C2FCCBBEEE57CF298C4899E22AF128FE, ___dayCounterText_12)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_dayCounterText_12() const { return ___dayCounterText_12; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_dayCounterText_12() { return &___dayCounterText_12; }
	inline void set_dayCounterText_12(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___dayCounterText_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dayCounterText_12), (void*)value);
	}

	inline static int32_t get_offset_of_isNight_13() { return static_cast<int32_t>(offsetof(Horizon_t396B45C0C2FCCBBEEE57CF298C4899E22AF128FE, ___isNight_13)); }
	inline bool get_isNight_13() const { return ___isNight_13; }
	inline bool* get_address_of_isNight_13() { return &___isNight_13; }
	inline void set_isNight_13(bool value)
	{
		___isNight_13 = value;
	}

	inline static int32_t get_offset_of_dayCounter_14() { return static_cast<int32_t>(offsetof(Horizon_t396B45C0C2FCCBBEEE57CF298C4899E22AF128FE, ___dayCounter_14)); }
	inline int32_t get_dayCounter_14() const { return ___dayCounter_14; }
	inline int32_t* get_address_of_dayCounter_14() { return &___dayCounter_14; }
	inline void set_dayCounter_14(int32_t value)
	{
		___dayCounter_14 = value;
	}
};


// Instruction
struct Instruction_t35BE89F86B1FEE917BA37A65E94EFA45FAEE919A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Instruction::instrut
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___instrut_4;

public:
	inline static int32_t get_offset_of_instrut_4() { return static_cast<int32_t>(offsetof(Instruction_t35BE89F86B1FEE917BA37A65E94EFA45FAEE919A, ___instrut_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_instrut_4() const { return ___instrut_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_instrut_4() { return &___instrut_4; }
	inline void set_instrut_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___instrut_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instrut_4), (void*)value);
	}
};

struct Instruction_t35BE89F86B1FEE917BA37A65E94EFA45FAEE919A_StaticFields
{
public:
	// System.Boolean Instruction::GamePaused
	bool ___GamePaused_5;

public:
	inline static int32_t get_offset_of_GamePaused_5() { return static_cast<int32_t>(offsetof(Instruction_t35BE89F86B1FEE917BA37A65E94EFA45FAEE919A_StaticFields, ___GamePaused_5)); }
	inline bool get_GamePaused_5() const { return ___GamePaused_5; }
	inline bool* get_address_of_GamePaused_5() { return &___GamePaused_5; }
	inline void set_GamePaused_5(bool value)
	{
		___GamePaused_5 = value;
	}
};


// Instructions
struct Instructions_t0F2023CAC7FCBA43D7E3847F96AE8DEB4ECD0E89  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Instructions::instrut
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___instrut_4;

public:
	inline static int32_t get_offset_of_instrut_4() { return static_cast<int32_t>(offsetof(Instructions_t0F2023CAC7FCBA43D7E3847F96AE8DEB4ECD0E89, ___instrut_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_instrut_4() const { return ___instrut_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_instrut_4() { return &___instrut_4; }
	inline void set_instrut_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___instrut_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instrut_4), (void*)value);
	}
};

struct Instructions_t0F2023CAC7FCBA43D7E3847F96AE8DEB4ECD0E89_StaticFields
{
public:
	// System.Boolean Instructions::GamePaused
	bool ___GamePaused_5;

public:
	inline static int32_t get_offset_of_GamePaused_5() { return static_cast<int32_t>(offsetof(Instructions_t0F2023CAC7FCBA43D7E3847F96AE8DEB4ECD0E89_StaticFields, ___GamePaused_5)); }
	inline bool get_GamePaused_5() const { return ___GamePaused_5; }
	inline bool* get_address_of_GamePaused_5() { return &___GamePaused_5; }
	inline void set_GamePaused_5(bool value)
	{
		___GamePaused_5 = value;
	}
};


// UI.MainMenu
struct MainMenu_tDC081FD41A81E74FD3EB756F8006FC7687EA332A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject UI.MainMenu::sceneControllerGameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___sceneControllerGameObject_4;
	// Controllers.SceneController UI.MainMenu::sceneController
	SceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D * ___sceneController_5;

public:
	inline static int32_t get_offset_of_sceneControllerGameObject_4() { return static_cast<int32_t>(offsetof(MainMenu_tDC081FD41A81E74FD3EB756F8006FC7687EA332A, ___sceneControllerGameObject_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_sceneControllerGameObject_4() const { return ___sceneControllerGameObject_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_sceneControllerGameObject_4() { return &___sceneControllerGameObject_4; }
	inline void set_sceneControllerGameObject_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___sceneControllerGameObject_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneControllerGameObject_4), (void*)value);
	}

	inline static int32_t get_offset_of_sceneController_5() { return static_cast<int32_t>(offsetof(MainMenu_tDC081FD41A81E74FD3EB756F8006FC7687EA332A, ___sceneController_5)); }
	inline SceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D * get_sceneController_5() const { return ___sceneController_5; }
	inline SceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D ** get_address_of_sceneController_5() { return &___sceneController_5; }
	inline void set_sceneController_5(SceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D * value)
	{
		___sceneController_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneController_5), (void*)value);
	}
};


// Controllers.SceneController
struct SceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Controllers.SceneController::mainCameraGameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___mainCameraGameObject_4;
	// UnityEngine.Animator Controllers.SceneController::transitionPanelAnimator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___transitionPanelAnimator_5;
	// UnityEngine.Animator Controllers.SceneController::mainCameraAnimator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___mainCameraAnimator_6;

public:
	inline static int32_t get_offset_of_mainCameraGameObject_4() { return static_cast<int32_t>(offsetof(SceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D, ___mainCameraGameObject_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_mainCameraGameObject_4() const { return ___mainCameraGameObject_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_mainCameraGameObject_4() { return &___mainCameraGameObject_4; }
	inline void set_mainCameraGameObject_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___mainCameraGameObject_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainCameraGameObject_4), (void*)value);
	}

	inline static int32_t get_offset_of_transitionPanelAnimator_5() { return static_cast<int32_t>(offsetof(SceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D, ___transitionPanelAnimator_5)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_transitionPanelAnimator_5() const { return ___transitionPanelAnimator_5; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_transitionPanelAnimator_5() { return &___transitionPanelAnimator_5; }
	inline void set_transitionPanelAnimator_5(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___transitionPanelAnimator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transitionPanelAnimator_5), (void*)value);
	}

	inline static int32_t get_offset_of_mainCameraAnimator_6() { return static_cast<int32_t>(offsetof(SceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D, ___mainCameraAnimator_6)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_mainCameraAnimator_6() const { return ___mainCameraAnimator_6; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_mainCameraAnimator_6() { return &___mainCameraAnimator_6; }
	inline void set_mainCameraAnimator_6(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___mainCameraAnimator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainCameraAnimator_6), (void*)value);
	}
};

struct SceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D_StaticFields
{
public:
	// System.Boolean Controllers.SceneController::_mainMenu
	bool ____mainMenu_7;

public:
	inline static int32_t get_offset_of__mainMenu_7() { return static_cast<int32_t>(offsetof(SceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D_StaticFields, ____mainMenu_7)); }
	inline bool get__mainMenu_7() const { return ____mainMenu_7; }
	inline bool* get_address_of__mainMenu_7() { return &____mainMenu_7; }
	inline void set__mainMenu_7(bool value)
	{
		____mainMenu_7 = value;
	}
};


// SceneLoader
struct SceneLoader_t3266812523B184D5AEDF27CA310452129C676B0D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// ScoreManager
struct ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text ScoreManager::scoreLabel
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___scoreLabel_4;
	// System.Int32 ScoreManager::score
	int32_t ___score_5;

public:
	inline static int32_t get_offset_of_scoreLabel_4() { return static_cast<int32_t>(offsetof(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113, ___scoreLabel_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_scoreLabel_4() const { return ___scoreLabel_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_scoreLabel_4() { return &___scoreLabel_4; }
	inline void set_scoreLabel_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___scoreLabel_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreLabel_4), (void*)value);
	}

	inline static int32_t get_offset_of_score_5() { return static_cast<int32_t>(offsetof(ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113, ___score_5)); }
	inline int32_t get_score_5() const { return ___score_5; }
	inline int32_t* get_address_of_score_5() { return &___score_5; }
	inline void set_score_5(int32_t value)
	{
		___score_5 = value;
	}
};


// StatsController
struct StatsController_tBB477720ABA192D16DF50C483D289E3E5A889095  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.Dictionary`2<StatsController/Stats,System.Int32> StatsController::stats
	Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D * ___stats_4;
	// System.Boolean StatsController::isAlive
	bool ___isAlive_5;
	// System.Single StatsController::multiplier
	float ___multiplier_6;
	// UnityEngine.GameObject StatsController::gameOver
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameOver_7;

public:
	inline static int32_t get_offset_of_stats_4() { return static_cast<int32_t>(offsetof(StatsController_tBB477720ABA192D16DF50C483D289E3E5A889095, ___stats_4)); }
	inline Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D * get_stats_4() const { return ___stats_4; }
	inline Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D ** get_address_of_stats_4() { return &___stats_4; }
	inline void set_stats_4(Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D * value)
	{
		___stats_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stats_4), (void*)value);
	}

	inline static int32_t get_offset_of_isAlive_5() { return static_cast<int32_t>(offsetof(StatsController_tBB477720ABA192D16DF50C483D289E3E5A889095, ___isAlive_5)); }
	inline bool get_isAlive_5() const { return ___isAlive_5; }
	inline bool* get_address_of_isAlive_5() { return &___isAlive_5; }
	inline void set_isAlive_5(bool value)
	{
		___isAlive_5 = value;
	}

	inline static int32_t get_offset_of_multiplier_6() { return static_cast<int32_t>(offsetof(StatsController_tBB477720ABA192D16DF50C483D289E3E5A889095, ___multiplier_6)); }
	inline float get_multiplier_6() const { return ___multiplier_6; }
	inline float* get_address_of_multiplier_6() { return &___multiplier_6; }
	inline void set_multiplier_6(float value)
	{
		___multiplier_6 = value;
	}

	inline static int32_t get_offset_of_gameOver_7() { return static_cast<int32_t>(offsetof(StatsController_tBB477720ABA192D16DF50C483D289E3E5A889095, ___gameOver_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gameOver_7() const { return ___gameOver_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gameOver_7() { return &___gameOver_7; }
	inline void set_gameOver_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gameOver_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameOver_7), (void*)value);
	}
};


// StopTime
struct StopTime_tC6E2F2D2D28372C933A7F0B5105DB4FB3F295786  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// SummaryManager
struct SummaryManager_t3E936A619358AB897319D2F29433407F509E4263  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text SummaryManager::hitTxt
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___hitTxt_4;
	// UnityEngine.UI.Text SummaryManager::missTxt
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___missTxt_5;
	// UnityEngine.UI.Text SummaryManager::scoreTxt
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___scoreTxt_6;

public:
	inline static int32_t get_offset_of_hitTxt_4() { return static_cast<int32_t>(offsetof(SummaryManager_t3E936A619358AB897319D2F29433407F509E4263, ___hitTxt_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_hitTxt_4() const { return ___hitTxt_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_hitTxt_4() { return &___hitTxt_4; }
	inline void set_hitTxt_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___hitTxt_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hitTxt_4), (void*)value);
	}

	inline static int32_t get_offset_of_missTxt_5() { return static_cast<int32_t>(offsetof(SummaryManager_t3E936A619358AB897319D2F29433407F509E4263, ___missTxt_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_missTxt_5() const { return ___missTxt_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_missTxt_5() { return &___missTxt_5; }
	inline void set_missTxt_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___missTxt_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___missTxt_5), (void*)value);
	}

	inline static int32_t get_offset_of_scoreTxt_6() { return static_cast<int32_t>(offsetof(SummaryManager_t3E936A619358AB897319D2F29433407F509E4263, ___scoreTxt_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_scoreTxt_6() const { return ___scoreTxt_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_scoreTxt_6() { return &___scoreTxt_6; }
	inline void set_scoreTxt_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___scoreTxt_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreTxt_6), (void*)value);
	}
};


// TimeManager
struct TimeManager_t7C9EC9E1F31A3BAAE33B119C0B91347D37ABAF82  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject TimeManager::timeLabel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___timeLabel_4;
	// UnityEngine.GameObject TimeManager::statsPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___statsPanel_5;
	// System.Single TimeManager::maxTime
	float ___maxTime_6;
	// System.Boolean TimeManager::gameOver
	bool ___gameOver_7;

public:
	inline static int32_t get_offset_of_timeLabel_4() { return static_cast<int32_t>(offsetof(TimeManager_t7C9EC9E1F31A3BAAE33B119C0B91347D37ABAF82, ___timeLabel_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_timeLabel_4() const { return ___timeLabel_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_timeLabel_4() { return &___timeLabel_4; }
	inline void set_timeLabel_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___timeLabel_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timeLabel_4), (void*)value);
	}

	inline static int32_t get_offset_of_statsPanel_5() { return static_cast<int32_t>(offsetof(TimeManager_t7C9EC9E1F31A3BAAE33B119C0B91347D37ABAF82, ___statsPanel_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_statsPanel_5() const { return ___statsPanel_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_statsPanel_5() { return &___statsPanel_5; }
	inline void set_statsPanel_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___statsPanel_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___statsPanel_5), (void*)value);
	}

	inline static int32_t get_offset_of_maxTime_6() { return static_cast<int32_t>(offsetof(TimeManager_t7C9EC9E1F31A3BAAE33B119C0B91347D37ABAF82, ___maxTime_6)); }
	inline float get_maxTime_6() const { return ___maxTime_6; }
	inline float* get_address_of_maxTime_6() { return &___maxTime_6; }
	inline void set_maxTime_6(float value)
	{
		___maxTime_6 = value;
	}

	inline static int32_t get_offset_of_gameOver_7() { return static_cast<int32_t>(offsetof(TimeManager_t7C9EC9E1F31A3BAAE33B119C0B91347D37ABAF82, ___gameOver_7)); }
	inline bool get_gameOver_7() const { return ___gameOver_7; }
	inline bool* get_address_of_gameOver_7() { return &___gameOver_7; }
	inline void set_gameOver_7(bool value)
	{
		___gameOver_7 = value;
	}
};


// TrafficLight
struct TrafficLight_tD55F68E16E18C0A5F32B506715F5BE0989084ABD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject TrafficLight::Green
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Green_4;
	// UnityEngine.GameObject TrafficLight::Red
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Red_5;
	// System.Boolean TrafficLight::lightSwitch
	bool ___lightSwitch_6;

public:
	inline static int32_t get_offset_of_Green_4() { return static_cast<int32_t>(offsetof(TrafficLight_tD55F68E16E18C0A5F32B506715F5BE0989084ABD, ___Green_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Green_4() const { return ___Green_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Green_4() { return &___Green_4; }
	inline void set_Green_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Green_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Green_4), (void*)value);
	}

	inline static int32_t get_offset_of_Red_5() { return static_cast<int32_t>(offsetof(TrafficLight_tD55F68E16E18C0A5F32B506715F5BE0989084ABD, ___Red_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Red_5() const { return ___Red_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Red_5() { return &___Red_5; }
	inline void set_Red_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Red_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Red_5), (void*)value);
	}

	inline static int32_t get_offset_of_lightSwitch_6() { return static_cast<int32_t>(offsetof(TrafficLight_tD55F68E16E18C0A5F32B506715F5BE0989084ABD, ___lightSwitch_6)); }
	inline bool get_lightSwitch_6() const { return ___lightSwitch_6; }
	inline bool* get_address_of_lightSwitch_6() { return &___lightSwitch_6; }
	inline void set_lightSwitch_6(bool value)
	{
		___lightSwitch_6 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// cardScript
struct cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 cardScript::_state
	int32_t ____state_5;
	// System.Int32 cardScript::_cardValue
	int32_t ____cardValue_6;
	// System.Boolean cardScript::_initialized
	bool ____initialized_7;
	// UnityEngine.Sprite cardScript::_cardBack
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ____cardBack_8;
	// UnityEngine.Sprite cardScript::_cardFace
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ____cardFace_9;
	// UnityEngine.GameObject cardScript::_manager
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____manager_10;

public:
	inline static int32_t get_offset_of__state_5() { return static_cast<int32_t>(offsetof(cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6, ____state_5)); }
	inline int32_t get__state_5() const { return ____state_5; }
	inline int32_t* get_address_of__state_5() { return &____state_5; }
	inline void set__state_5(int32_t value)
	{
		____state_5 = value;
	}

	inline static int32_t get_offset_of__cardValue_6() { return static_cast<int32_t>(offsetof(cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6, ____cardValue_6)); }
	inline int32_t get__cardValue_6() const { return ____cardValue_6; }
	inline int32_t* get_address_of__cardValue_6() { return &____cardValue_6; }
	inline void set__cardValue_6(int32_t value)
	{
		____cardValue_6 = value;
	}

	inline static int32_t get_offset_of__initialized_7() { return static_cast<int32_t>(offsetof(cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6, ____initialized_7)); }
	inline bool get__initialized_7() const { return ____initialized_7; }
	inline bool* get_address_of__initialized_7() { return &____initialized_7; }
	inline void set__initialized_7(bool value)
	{
		____initialized_7 = value;
	}

	inline static int32_t get_offset_of__cardBack_8() { return static_cast<int32_t>(offsetof(cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6, ____cardBack_8)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get__cardBack_8() const { return ____cardBack_8; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of__cardBack_8() { return &____cardBack_8; }
	inline void set__cardBack_8(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		____cardBack_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cardBack_8), (void*)value);
	}

	inline static int32_t get_offset_of__cardFace_9() { return static_cast<int32_t>(offsetof(cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6, ____cardFace_9)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get__cardFace_9() const { return ____cardFace_9; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of__cardFace_9() { return &____cardFace_9; }
	inline void set__cardFace_9(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		____cardFace_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cardFace_9), (void*)value);
	}

	inline static int32_t get_offset_of__manager_10() { return static_cast<int32_t>(offsetof(cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6, ____manager_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__manager_10() const { return ____manager_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__manager_10() { return &____manager_10; }
	inline void set__manager_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____manager_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____manager_10), (void*)value);
	}
};

struct cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6_StaticFields
{
public:
	// System.Boolean cardScript::DO_NOT
	bool ___DO_NOT_4;

public:
	inline static int32_t get_offset_of_DO_NOT_4() { return static_cast<int32_t>(offsetof(cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6_StaticFields, ___DO_NOT_4)); }
	inline bool get_DO_NOT_4() const { return ___DO_NOT_4; }
	inline bool* get_address_of_DO_NOT_4() { return &___DO_NOT_4; }
	inline void set_DO_NOT_4(bool value)
	{
		___DO_NOT_4 = value;
	}
};


// gameManager
struct gameManager_t2A9919D7CB9773B3211A72C5DA02B305DE63B8AB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Sprite[] gameManager::cardFace
	SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* ___cardFace_4;
	// UnityEngine.Sprite gameManager::cardBack
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___cardBack_5;
	// UnityEngine.GameObject[] gameManager::cards
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___cards_6;
	// UnityEngine.GameObject gameManager::gameTime
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameTime_7;
	// UnityEngine.GameObject gameManager::Mismatch
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Mismatch_8;
	// UnityEngine.GameObject gameManager::statsPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___statsPanel_9;
	// System.Int32 gameManager::mismatch
	int32_t ___mismatch_10;
	// System.Boolean gameManager::_init
	bool ____init_11;
	// System.Int32 gameManager::_matches
	int32_t ____matches_12;

public:
	inline static int32_t get_offset_of_cardFace_4() { return static_cast<int32_t>(offsetof(gameManager_t2A9919D7CB9773B3211A72C5DA02B305DE63B8AB, ___cardFace_4)); }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* get_cardFace_4() const { return ___cardFace_4; }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77** get_address_of_cardFace_4() { return &___cardFace_4; }
	inline void set_cardFace_4(SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* value)
	{
		___cardFace_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cardFace_4), (void*)value);
	}

	inline static int32_t get_offset_of_cardBack_5() { return static_cast<int32_t>(offsetof(gameManager_t2A9919D7CB9773B3211A72C5DA02B305DE63B8AB, ___cardBack_5)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_cardBack_5() const { return ___cardBack_5; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_cardBack_5() { return &___cardBack_5; }
	inline void set_cardBack_5(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___cardBack_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cardBack_5), (void*)value);
	}

	inline static int32_t get_offset_of_cards_6() { return static_cast<int32_t>(offsetof(gameManager_t2A9919D7CB9773B3211A72C5DA02B305DE63B8AB, ___cards_6)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_cards_6() const { return ___cards_6; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_cards_6() { return &___cards_6; }
	inline void set_cards_6(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___cards_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cards_6), (void*)value);
	}

	inline static int32_t get_offset_of_gameTime_7() { return static_cast<int32_t>(offsetof(gameManager_t2A9919D7CB9773B3211A72C5DA02B305DE63B8AB, ___gameTime_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gameTime_7() const { return ___gameTime_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gameTime_7() { return &___gameTime_7; }
	inline void set_gameTime_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gameTime_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameTime_7), (void*)value);
	}

	inline static int32_t get_offset_of_Mismatch_8() { return static_cast<int32_t>(offsetof(gameManager_t2A9919D7CB9773B3211A72C5DA02B305DE63B8AB, ___Mismatch_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Mismatch_8() const { return ___Mismatch_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Mismatch_8() { return &___Mismatch_8; }
	inline void set_Mismatch_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Mismatch_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Mismatch_8), (void*)value);
	}

	inline static int32_t get_offset_of_statsPanel_9() { return static_cast<int32_t>(offsetof(gameManager_t2A9919D7CB9773B3211A72C5DA02B305DE63B8AB, ___statsPanel_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_statsPanel_9() const { return ___statsPanel_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_statsPanel_9() { return &___statsPanel_9; }
	inline void set_statsPanel_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___statsPanel_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___statsPanel_9), (void*)value);
	}

	inline static int32_t get_offset_of_mismatch_10() { return static_cast<int32_t>(offsetof(gameManager_t2A9919D7CB9773B3211A72C5DA02B305DE63B8AB, ___mismatch_10)); }
	inline int32_t get_mismatch_10() const { return ___mismatch_10; }
	inline int32_t* get_address_of_mismatch_10() { return &___mismatch_10; }
	inline void set_mismatch_10(int32_t value)
	{
		___mismatch_10 = value;
	}

	inline static int32_t get_offset_of__init_11() { return static_cast<int32_t>(offsetof(gameManager_t2A9919D7CB9773B3211A72C5DA02B305DE63B8AB, ____init_11)); }
	inline bool get__init_11() const { return ____init_11; }
	inline bool* get_address_of__init_11() { return &____init_11; }
	inline void set__init_11(bool value)
	{
		____init_11 = value;
	}

	inline static int32_t get_offset_of__matches_12() { return static_cast<int32_t>(offsetof(gameManager_t2A9919D7CB9773B3211A72C5DA02B305DE63B8AB, ____matches_12)); }
	inline int32_t get__matches_12() const { return ____matches_12; }
	inline int32_t* get_address_of__matches_12() { return &____matches_12; }
	inline void set__matches_12(int32_t value)
	{
		____matches_12 = value;
	}
};


// getTime
struct getTime_t35B684BAE3F51C0B31B7059A6A772B7052A9E23D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject getTime::time
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___time_4;

public:
	inline static int32_t get_offset_of_time_4() { return static_cast<int32_t>(offsetof(getTime_t35B684BAE3F51C0B31B7059A6A772B7052A9E23D, ___time_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_time_4() const { return ___time_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_time_4() { return &___time_4; }
	inline void set_time_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___time_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___time_4), (void*)value);
	}
};


// timeScript
struct timeScript_t676CF5FF3D174FDE41EE6B117EC3542CE225C182  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text timeScript::counterText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___counterText_4;
	// System.Boolean timeScript::timeCounter
	bool ___timeCounter_5;
	// System.Single timeScript::seconds
	float ___seconds_6;
	// System.Single timeScript::minutes
	float ___minutes_7;

public:
	inline static int32_t get_offset_of_counterText_4() { return static_cast<int32_t>(offsetof(timeScript_t676CF5FF3D174FDE41EE6B117EC3542CE225C182, ___counterText_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_counterText_4() const { return ___counterText_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_counterText_4() { return &___counterText_4; }
	inline void set_counterText_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___counterText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___counterText_4), (void*)value);
	}

	inline static int32_t get_offset_of_timeCounter_5() { return static_cast<int32_t>(offsetof(timeScript_t676CF5FF3D174FDE41EE6B117EC3542CE225C182, ___timeCounter_5)); }
	inline bool get_timeCounter_5() const { return ___timeCounter_5; }
	inline bool* get_address_of_timeCounter_5() { return &___timeCounter_5; }
	inline void set_timeCounter_5(bool value)
	{
		___timeCounter_5 = value;
	}

	inline static int32_t get_offset_of_seconds_6() { return static_cast<int32_t>(offsetof(timeScript_t676CF5FF3D174FDE41EE6B117EC3542CE225C182, ___seconds_6)); }
	inline float get_seconds_6() const { return ___seconds_6; }
	inline float* get_address_of_seconds_6() { return &___seconds_6; }
	inline void set_seconds_6(float value)
	{
		___seconds_6 = value;
	}

	inline static int32_t get_offset_of_minutes_7() { return static_cast<int32_t>(offsetof(timeScript_t676CF5FF3D174FDE41EE6B117EC3542CE225C182, ___minutes_7)); }
	inline float get_minutes_7() const { return ___minutes_7; }
	inline float* get_address_of_minutes_7() { return &___minutes_7; }
	inline void set_minutes_7(float value)
	{
		___minutes_7 = value;
	}
};


// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___m_DummyData_13;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_4() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SystemInputModules_4)); }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * get_m_SystemInputModules_4() const { return ___m_SystemInputModules_4; }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 ** get_address_of_m_SystemInputModules_4() { return &___m_SystemInputModules_4; }
	inline void set_m_SystemInputModules_4(List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * value)
	{
		___m_SystemInputModules_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SystemInputModules_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_5() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentInputModule_5)); }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * get_m_CurrentInputModule_5() const { return ___m_CurrentInputModule_5; }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 ** get_address_of_m_CurrentInputModule_5() { return &___m_CurrentInputModule_5; }
	inline void set_m_CurrentInputModule_5(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * value)
	{
		___m_CurrentInputModule_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentInputModule_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_7() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_FirstSelected_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_FirstSelected_7() const { return ___m_FirstSelected_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_FirstSelected_7() { return &___m_FirstSelected_7; }
	inline void set_m_FirstSelected_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_FirstSelected_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FirstSelected_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_8() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_sendNavigationEvents_8)); }
	inline bool get_m_sendNavigationEvents_8() const { return ___m_sendNavigationEvents_8; }
	inline bool* get_address_of_m_sendNavigationEvents_8() { return &___m_sendNavigationEvents_8; }
	inline void set_m_sendNavigationEvents_8(bool value)
	{
		___m_sendNavigationEvents_8 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_9() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DragThreshold_9)); }
	inline int32_t get_m_DragThreshold_9() const { return ___m_DragThreshold_9; }
	inline int32_t* get_address_of_m_DragThreshold_9() { return &___m_DragThreshold_9; }
	inline void set_m_DragThreshold_9(int32_t value)
	{
		___m_DragThreshold_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_10() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentSelected_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_CurrentSelected_10() const { return ___m_CurrentSelected_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_CurrentSelected_10() { return &___m_CurrentSelected_10; }
	inline void set_m_CurrentSelected_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_CurrentSelected_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentSelected_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_HasFocus_11() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_HasFocus_11)); }
	inline bool get_m_HasFocus_11() const { return ___m_HasFocus_11; }
	inline bool* get_address_of_m_HasFocus_11() { return &___m_HasFocus_11; }
	inline void set_m_HasFocus_11(bool value)
	{
		___m_HasFocus_11 = value;
	}

	inline static int32_t get_offset_of_m_SelectionGuard_12() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SelectionGuard_12)); }
	inline bool get_m_SelectionGuard_12() const { return ___m_SelectionGuard_12; }
	inline bool* get_address_of_m_SelectionGuard_12() { return &___m_SelectionGuard_12; }
	inline void set_m_SelectionGuard_12(bool value)
	{
		___m_SelectionGuard_12 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_13() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DummyData_13)); }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * get_m_DummyData_13() const { return ___m_DummyData_13; }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E ** get_address_of_m_DummyData_13() { return &___m_DummyData_13; }
	inline void set_m_DummyData_13(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * value)
	{
		___m_DummyData_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DummyData_13), (void*)value);
	}
};

struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * ___s_RaycastComparer_14;

public:
	inline static int32_t get_offset_of_m_EventSystems_6() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___m_EventSystems_6)); }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * get_m_EventSystems_6() const { return ___m_EventSystems_6; }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 ** get_address_of_m_EventSystems_6() { return &___m_EventSystems_6; }
	inline void set_m_EventSystems_6(List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * value)
	{
		___m_EventSystems_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystems_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_14() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___s_RaycastComparer_14)); }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * get_s_RaycastComparer_14() const { return ___s_RaycastComparer_14; }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 ** get_address_of_s_RaycastComparer_14() { return &___s_RaycastComparer_14; }
	inline void set_s_RaycastComparer_14(Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * value)
	{
		___s_RaycastComparer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RaycastComparer_14), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;

public:
	inline static int32_t get_offset_of_m_FillRect_20() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillRect_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillRect_20() const { return ___m_FillRect_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillRect_20() { return &___m_FillRect_20; }
	inline void set_m_FillRect_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillRect_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillRect_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleRect_21() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleRect_21)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleRect_21() const { return ___m_HandleRect_21; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleRect_21() { return &___m_HandleRect_21; }
	inline void set_m_HandleRect_21(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleRect_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleRect_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Direction_22() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Direction_22)); }
	inline int32_t get_m_Direction_22() const { return ___m_Direction_22; }
	inline int32_t* get_address_of_m_Direction_22() { return &___m_Direction_22; }
	inline void set_m_Direction_22(int32_t value)
	{
		___m_Direction_22 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_23() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MinValue_23)); }
	inline float get_m_MinValue_23() const { return ___m_MinValue_23; }
	inline float* get_address_of_m_MinValue_23() { return &___m_MinValue_23; }
	inline void set_m_MinValue_23(float value)
	{
		___m_MinValue_23 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_24() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MaxValue_24)); }
	inline float get_m_MaxValue_24() const { return ___m_MaxValue_24; }
	inline float* get_address_of_m_MaxValue_24() { return &___m_MaxValue_24; }
	inline void set_m_MaxValue_24(float value)
	{
		___m_MaxValue_24 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_25() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_WholeNumbers_25)); }
	inline bool get_m_WholeNumbers_25() const { return ___m_WholeNumbers_25; }
	inline bool* get_address_of_m_WholeNumbers_25() { return &___m_WholeNumbers_25; }
	inline void set_m_WholeNumbers_25(bool value)
	{
		___m_WholeNumbers_25 = value;
	}

	inline static int32_t get_offset_of_m_Value_26() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Value_26)); }
	inline float get_m_Value_26() const { return ___m_Value_26; }
	inline float* get_address_of_m_Value_26() { return &___m_Value_26; }
	inline void set_m_Value_26(float value)
	{
		___m_Value_26 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_OnValueChanged_27)); }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillImage_28() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillImage_28)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_FillImage_28() const { return ___m_FillImage_28; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_FillImage_28() { return &___m_FillImage_28; }
	inline void set_m_FillImage_28(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_FillImage_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillImage_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillTransform_29() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillTransform_29)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_FillTransform_29() const { return ___m_FillTransform_29; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_FillTransform_29() { return &___m_FillTransform_29; }
	inline void set_m_FillTransform_29(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_FillTransform_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillTransform_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_30() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillContainerRect_30)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillContainerRect_30() const { return ___m_FillContainerRect_30; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillContainerRect_30() { return &___m_FillContainerRect_30; }
	inline void set_m_FillContainerRect_30(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillContainerRect_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillContainerRect_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_31() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleTransform_31)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_HandleTransform_31() const { return ___m_HandleTransform_31; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_HandleTransform_31() { return &___m_HandleTransform_31; }
	inline void set_m_HandleTransform_31(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_HandleTransform_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleTransform_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_32() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleContainerRect_32)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleContainerRect_32() const { return ___m_HandleContainerRect_32; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleContainerRect_32() { return &___m_HandleContainerRect_32; }
	inline void set_m_HandleContainerRect_32(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleContainerRect_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleContainerRect_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_33() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Offset_33)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Offset_33() const { return ___m_Offset_33; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Offset_33() { return &___m_Offset_33; }
	inline void set_m_Offset_33(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Offset_33 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_34() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Tracker_34)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_34() const { return ___m_Tracker_34; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_34() { return &___m_Tracker_34; }
	inline void set_m_Tracker_34(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_34 = value;
	}

	inline static int32_t get_offset_of_m_DelayedUpdateVisuals_35() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_DelayedUpdateVisuals_35)); }
	inline bool get_m_DelayedUpdateVisuals_35() const { return ___m_DelayedUpdateVisuals_35; }
	inline bool* get_address_of_m_DelayedUpdateVisuals_35() { return &___m_DelayedUpdateVisuals_35; }
	inline void set_m_DelayedUpdateVisuals_35(bool value)
	{
		___m_DelayedUpdateVisuals_35 = value;
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * m_Items[1];

public:
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * m_Items[1];

public:
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* GameObject_GetComponentsInChildren_TisRuntimeObject_m6662AE3C936281A25097CCBD9098A9F85C69279A_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_mA931B0C8790EF07D8F8AC3F328DE919A753EF46E_gshared (Dictionary_2_tCB10D3F0D8D28A1A6B54347C56E10FE9D9612C94 * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mF30DA4177FE4CB9931A6DF746E1106CA8148526A_gshared (Dictionary_2_tCB10D3F0D8D28A1A6B54347C56E10FE9D9612C94 * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tD929308874B3AE2B67C8D364703457B1C2CA578C * Dictionary_2_get_Values_m9225DF5E6D5188693835D6E2D193E39BF2AA9980_gshared (Dictionary_2_tCB10D3F0D8D28A1A6B54347C56E10FE9D9612C94 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mB65771CF7DCF34DB85D0FB76B51104020A81324D_gshared (Dictionary_2_tCB10D3F0D8D28A1A6B54347C56E10FE9D9612C94 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAD69B022F1D23A2262CA05C4D32C31DA1CF7FE92_gshared (Dictionary_2_tCB10D3F0D8D28A1A6B54347C56E10FE9D9612C94 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m966E300F7A36F73697CCDA7F3534BD90FFB029AF_gshared (Dictionary_2_tCB10D3F0D8D28A1A6B54347C56E10FE9D9612C94 * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___index0, const RuntimeMethod* method);

// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  Animator_GetCurrentAnimatorStateInfo_m562250C74BF8C626B5227FE840D6CB739B5F8314 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, int32_t ___layerIndex0, const RuntimeMethod* method);
// System.Boolean UnityEngine.AnimatorStateInfo::IsName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorStateInfo_IsName_mF1263FB1F2AB142CFEB61B375D6EEBCFD53F9428 (AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___stateName0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40 (Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Collections.IEnumerator ButtonManager::ShowGhost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ButtonManager_ShowGhost_m4B62BBDF73381C373120804F9F29472E7E2D7EE1 (ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * EventSystem_get_current_m4B9C11F490297AE55428038DACD240596D6CE5F2 (const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_currentSelectedGameObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * EventSystem_get_currentSelectedGameObject_m999F9BFD4C20E2F00C56D4FED89602B6077EF70D_inline (EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8 (const RuntimeMethod* method);
// System.Void ScoreManager::UpdateScore(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_UpdateScore_m156C45E9BC479AC26BF4055E7CF7673D74089DC2 (ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * __this, int32_t ___amount0, bool ___addToScore1, const RuntimeMethod* method);
// System.Collections.IEnumerator ButtonManager::HitGhost(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ButtonManager_HitGhost_mB61C7D96B90A05DDE7BE5C58A914128418130B1E (ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Ghosts0, const RuntimeMethod* method);
// System.Void ButtonManager/<ShowGhost>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowGhostU3Ed__7__ctor_m4DE1E0513548D50AD8ACABBC42CF7ADC751CA37B (U3CShowGhostU3Ed__7_tABC923EDB14A96DAA4B068E1A7DD2C59DC240056 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void ButtonManager/<HideGhost>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHideGhostU3Ed__8__ctor_m7989C10513A5C38604549DD1A56B2CC4A43A8A99 (U3CHideGhostU3Ed__8_t749108EEA4C8AEFD44F8B618A2649711FE52BF6C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void ButtonManager/<HitGhost>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHitGhostU3Ed__9__ctor_m757C892FFF881F8E45DB40AB43D682101DD382EC (U3CHitGhostU3Ed__9_t3FD34179317C706741C8ADC0FB2F966AF3A787C4 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326 (String_t* ___axisName0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<TrafficLight>()
inline TrafficLight_tD55F68E16E18C0A5F32B506715F5BE0989084ABD * GameObject_GetComponent_TisTrafficLight_tD55F68E16E18C0A5F32B506715F5BE0989084ABD_mF959F11BDB482AF2885039C367E5B2EE34D4E1C9 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  TrafficLight_tD55F68E16E18C0A5F32B506715F5BE0989084ABD * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean TrafficLight::getLightSwitch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrafficLight_getLightSwitch_mCB954678FDD2BF019C9851D0BCE5163B0749AAAD (TrafficLight_tD55F68E16E18C0A5F32B506715F5BE0989084ABD * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Collections.IEnumerator Driver::endGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Driver_endGame_mF35B7765958FA62717FD9D00D1ECC603A41651AD (Driver_t2AD30C27D04F1E04A5C815739AB520064BCE9AE0 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Driver::speed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Driver_speed_m15BBB53CA54B9264FFF4767CAA7909F4E967F3C0 (Driver_t2AD30C27D04F1E04A5C815739AB520064BCE9AE0 * __this, const RuntimeMethod* method);
// System.Void Driver/<speed>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CspeedU3Ed__14__ctor_m0C7F31EC3C86D2D741E87C4A8058A333132F0C57 (U3CspeedU3Ed__14_tAED4F0B8D128FBFC7AF15B2386463C1466BFB5E0 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Driver/<endGame>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CendGameU3Ed__15__ctor_mC1902BCD325034E40667BEC522657D33BD15B28C (U3CendGameU3Ed__15_tCC463386A1B61B40FD8EECE6B47D4AC99BBCCAFC * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void World.Eye::FollowCursor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Eye_FollowCursor_m4D36795F1C1E2546C811EDD65BA3FB96A5A9E972 (Eye_tF20146531CD92887047A5E8C3D7F14526A7D84A8 * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_up(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_up_m3D2B71DA51EA167C367FD275B7B28241C565F127 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.Transform>()
inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* GameObject_GetComponentsInChildren_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m1D81E170D9B0CD0720A6BCDD722BC8A0B4AA8F0E (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6662AE3C936281A25097CCBD9098A9F85C69279A_gshared)(__this, method);
}
// System.Boolean UnityEngine.Input::GetKeyDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m9D556E728119BEB64AA624EBE82931367B6573A5 (String_t* ___name0, const RuntimeMethod* method);
// System.Void GameController::TogglePause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_TogglePause_m63448FEDCB01ACBC68B79F35C8AF1FE1E4503584 (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA (float ___value0, const RuntimeMethod* method);
// System.Void GameController::ResetPauseScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_ResetPauseScreen_m47D7A06E45F696E078CBDB36DBDB108EA571CE67 (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method);
// System.Void GameController::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_Pause_mF6FCFD1C244F2FD91A652F9D9A6ED07C9AD0DC2B (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method);
// System.Void GameController::UnPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_UnPause_m2242C8B454AE371BDE482EA1F76C7372544DF5CF (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void GameManager::initializeDroplets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_initializeDroplets_m063A22609DB8A66B27AE24030DD73BAEC5628BF4 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022 (int32_t ___button0, const RuntimeMethod* method);
// System.Void GameManager::checkDroplet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_checkDroplet_m8761776ED511BA2E8CD160AA354C494CD1E7D0F8 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Droplet>()
inline Droplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF * GameObject_GetComponent_TisDroplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF_mF19868F8C2A83A7BC3341157892E7DBD1D23A0FE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Droplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void Droplet::set_position(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Droplet_set_position_m3916063F9B041010885703B30563E031881A996C_inline (Droplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void Droplet::set_pressed(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Droplet_set_pressed_mC474246005E8F80599D7DF6160879625780B90B7_inline (Droplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Droplet::set_state(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Droplet_set_state_mE58BAD4A0B67C6F1434AC2F1B5D33C45C0925BC8_inline (Droplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 Droplet::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Droplet_get_position_mB7F46C99396147DE2172BB76FEF273EFA5647720_inline (Droplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF * __this, const RuntimeMethod* method);
// System.Boolean Droplet::get_state()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Droplet_get_state_mA89FBFB0087AD4DA992C623C35651D8080224A2B_inline (Droplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF * __this, const RuntimeMethod* method);
// System.Boolean Droplet::get_pressed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Droplet_get_pressed_m7F28B695068C001F36237B65AF39224AD5689C20_inline (Droplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9 (const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Collections.IEnumerator GameManager::endGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_endGame_m3EE9BFA7BF02274A725C2D3E43EB442E156F86C3 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<ErrorScript>()
inline ErrorScript_tC3890EB6BE037D788D007075DE1A96B692A23256 * GameObject_GetComponent_TisErrorScript_tC3890EB6BE037D788D007075DE1A96B692A23256_m34057746B92896B0D25D03D99B3F51A957795DF2 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ErrorScript_tC3890EB6BE037D788D007075DE1A96B692A23256 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void ErrorScript::addError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorScript_addError_mD6B4899600C8635F832AF93F07D1CF05BA83B328 (ErrorScript_tC3890EB6BE037D788D007075DE1A96B692A23256 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator GameManager::incorrect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_incorrect_mCCF464D686F45DC633F3357006F484BFF65A04FF (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ___i0, const RuntimeMethod* method);
// System.Void GameManager/<incorrect>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CincorrectU3Ed__14__ctor_m657516299E85CB945519E11D945AC719528672D6 (U3CincorrectU3Ed__14_tFE7CCCAA58DE29E1D3B8C29A43713ABC6A845316 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void GameManager/<endGame>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CendGameU3Ed__15__ctor_m19531227FB6B47A68244B8D08E05DD976DE819AF (U3CendGameU3Ed__15_t253E2AF2E4FB090B5DC46DBC22B801A7E06390F9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void World.Horizon::StartHorizonCycle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Horizon_StartHorizonCycle_m4D2F715A474C83ACBC6E0F5C10C454643FAF0FD0 (Horizon_t396B45C0C2FCCBBEEE57CF298C4899E22AF128FE * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Animation>()
inline Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * GameObject_GetComponent_TisAnimation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8_m92B9ADEC5AE6A5FB55D702AD0410469739EF307C (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::FindWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_FindWithTag_mEF75D1FF1E55B338A77161FDCB68ED0A2A911DF3 (String_t* ___tag0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_InvokeRepeating_mB77F4276826FBA696A150831D190875CB5802C70 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, float ___time1, float ___repeatRate2, const RuntimeMethod* method);
// System.Void World.Horizon::ShowDayCounter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Horizon_ShowDayCounter_m73B13496E8F08BC67502C5F9338177A3F4E8EDFA (Horizon_t396B45C0C2FCCBBEEE57CF298C4899E22AF128FE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Stop_m8CBF9268DE7B5A40952B4977462B857B5F5AFB9D (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animation::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_Play_m5588607899B9B866117A1477C696076F161BA3D4 (Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animation::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_Play_m8EDFE80589A27DF1C34CCC0CF81DB5313CE35607 (Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * __this, String_t* ___animation0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Controllers.SceneController>()
inline SceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D * GameObject_GetComponent_TisSceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D_m1C3BCA64655E8EDDFB4DFA15A2CD2E809257E620 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean Controllers.SceneController::get_mainMenu()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneController_get_mainMenu_m065BDF66295571B1BEAB022056E701F433BA3264_inline (SceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D * __this, const RuntimeMethod* method);
// System.Void Instruction::TogglePause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instruction_TogglePause_m00F4CF0C476E42F9301711EECCC4E0CA547997E4 (Instruction_t35BE89F86B1FEE917BA37A65E94EFA45FAEE919A * __this, const RuntimeMethod* method);
// System.Void Instruction::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instruction_Pause_m64983CCF4B60D46D5706C3D1A22D3D150B27B233 (Instruction_t35BE89F86B1FEE917BA37A65E94EFA45FAEE919A * __this, const RuntimeMethod* method);
// System.Void Instruction::UnPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instruction_UnPause_mB807C30658E3EE5ED8056EE762FE1A5D6BD5D61D (Instruction_t35BE89F86B1FEE917BA37A65E94EFA45FAEE919A * __this, const RuntimeMethod* method);
// System.Void Instructions::TogglePause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instructions_TogglePause_mA278DA22703D184F59B12BC66F6A6DA81F5E23FB (Instructions_t0F2023CAC7FCBA43D7E3847F96AE8DEB4ECD0E89 * __this, const RuntimeMethod* method);
// System.Void Instructions::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instructions_Pause_m47B996D77CFB32C1B8E0602F28B64ED2412E6D04 (Instructions_t0F2023CAC7FCBA43D7E3847F96AE8DEB4ECD0E89 * __this, const RuntimeMethod* method);
// System.Void Instructions::UnPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instructions_UnPause_m7CCA0DDFC961092E4B2B027D2B7C95D567328665 (Instructions_t0F2023CAC7FCBA43D7E3847F96AE8DEB4ECD0E89 * __this, const RuntimeMethod* method);
// System.Void Controllers.SceneController::SwitchScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneController_SwitchScene_m250B9C8FBE1FEB3B606A0ADB91350DEE18C799A7 (SceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D * __this, String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void Controllers.SceneController::ResetGameState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneController_ResetGameState_mF8DC728355C963758CEA6D059FAFA0C1DE50DE0B (const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4 (const RuntimeMethod* method);
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Controllers.SceneController::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SceneController_LoadScene_mF65F254C0557FA8AB2F5BE0FB2E2624E084D141F (SceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D * __this, String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void Controllers.SceneController/<LoadScene>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneU3Ed__6__ctor_m2CC4C250BDB2BF40E7310F50A436344533C647CE (U3CLoadSceneU3Ed__6_tF321E46183EB6FBD589D29E33DFF2E8D939D324D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986 (String_t* ___key0, const RuntimeMethod* method);
// System.Void StatsController::StartStatsDecrease()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatsController_StartStatsDecrease_m29026AADCF1D7FB5B409EE24D6F88C69E701F5DC (StatsController_tBB477720ABA192D16DF50C483D289E3E5A889095 * __this, const RuntimeMethod* method);
// System.Void StatsController::SetMultiplier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatsController_SetMultiplier_m6EE0423BCAB0B52E6312CF98FD9A70D02DED7CA7 (StatsController_tBB477720ABA192D16DF50C483D289E3E5A889095 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<StatsController/Stats,System.Int32>::get_Item(!0)
inline int32_t Dictionary_2_get_Item_m8E5F0FC180955E92CB7AC73D8C05DCE3B586A8E9 (Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mA931B0C8790EF07D8F8AC3F328DE919A753EF46E_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<StatsController/Stats,System.Int32>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mF9210916F0878172593D361C0D57EB02043E606D (Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D *, int32_t, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_mF30DA4177FE4CB9931A6DF746E1106CA8148526A_gshared)(__this, ___key0, ___value1, method);
}
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method);
// System.Void StatsController::UpdateStatBar(StatsController/Stats)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatsController_UpdateStatBar_mD097B0E88FCF76215C227F26531FF202660F4DD5 (StatsController_tBB477720ABA192D16DF50C483D289E3E5A889095 * __this, int32_t ___stat0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Slider>()
inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * GameObject_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mCF2C6D0E8D0B7E12C53CF51A613D9A6545FC05F9 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<StatsController/Stats,System.Int32>::get_Values()
inline ValueCollection_t8ABF7C4906E3BC2AB6C7DD4E6BAF158F0B1ECD02 * Dictionary_2_get_Values_m9518B8E529196767B4E55D75073528EB4242178D (Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D * __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t8ABF7C4906E3BC2AB6C7DD4E6BAF158F0B1ECD02 * (*) (Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D *, const RuntimeMethod*))Dictionary_2_get_Values_m9225DF5E6D5188693835D6E2D193E39BF2AA9980_gshared)(__this, method);
}
// System.Int32 System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5 (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<StatsController/Stats,System.Int32>::get_Count()
inline int32_t Dictionary_2_get_Count_m12730F905521D6C9F926E7BFEBECD3B0D33E5D25 (Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D *, const RuntimeMethod*))Dictionary_2_get_Count_mB65771CF7DCF34DB85D0FB76B51104020A81324D_gshared)(__this, method);
}
// System.Single System.Math::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Max_mEB87839DA28310AE4CB81A94D551874CFC2B1247 (float ___val10, float ___val21, const RuntimeMethod* method);
// System.Collections.IEnumerator StatsController::DecreaseStat(StatsController/Stats,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StatsController_DecreaseStat_mA24C4C6B67194F975E609B16831E2FAA40A5F137 (StatsController_tBB477720ABA192D16DF50C483D289E3E5A889095 * __this, int32_t ___stat0, float ___repeatRate1, const RuntimeMethod* method);
// System.Void StatsController/<DecreaseStat>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDecreaseStatU3Ed__11__ctor_m385C8CA7BDEFC82B20223E2B9DE63DF21BCCA2F8 (U3CDecreaseStatU3Ed__11_t4917F8E64D46140E0510AAC61E692EA94C1E3BF2 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<StatsController/Stats,System.Int32>::.ctor()
inline void Dictionary_2__ctor_m3D32778087167D107BBEBD82CC70FF1E40E5B621 (Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D *, const RuntimeMethod*))Dictionary_2__ctor_mAD69B022F1D23A2262CA05C4D32C31DA1CF7FE92_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<StatsController/Stats,System.Int32>::Add(!0,!1)
inline void Dictionary_2_Add_m35A25765687BBD2CA19755DA5B323380186EF504 (Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D *, int32_t, int32_t, const RuntimeMethod*))Dictionary_2_Add_m966E300F7A36F73697CCDA7F3534BD90FFB029AF_gshared)(__this, ___key0, ___value1, method);
}
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD (float ___f0, const RuntimeMethod* method);
// System.String System.Int32::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m5398ED0B6625B75CAF70C63B3CF2CE47D3C1B184 (int32_t* __this, String_t* ___format0, const RuntimeMethod* method);
// System.Collections.IEnumerator TimeManager::endGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TimeManager_endGame_m68F1B5976A700B9AF23B39E2F11892E61524F732 (TimeManager_t7C9EC9E1F31A3BAAE33B119C0B91347D37ABAF82 * __this, const RuntimeMethod* method);
// System.Void TimeManager/<endGame>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CendGameU3Ed__6__ctor_m4F49D65B27DDD5D7C659F75E0007EF5116C8F08E (U3CendGameU3Ed__6_t05CCEFCBCC960836A17AEB1322F2E62BFEE00D2E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.IEnumerator TrafficLight::Cycle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TrafficLight_Cycle_mC7EE81D3CEB990F6AC6AD49EC038199B7B44B4E9 (TrafficLight_tD55F68E16E18C0A5F32B506715F5BE0989084ABD * __this, const RuntimeMethod* method);
// System.Void TrafficLight::greenOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficLight_greenOn_m338B88A6E16EE7B5FD3DE3E4379F9A7D3B49DC5F (TrafficLight_tD55F68E16E18C0A5F32B506715F5BE0989084ABD * __this, const RuntimeMethod* method);
// System.Void TrafficLight/<Cycle>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCycleU3Ed__5__ctor_mE65C5379FD0F6B514882C9A95D46B6299BA86A2A (U3CCycleU3Ed__5_t31732404568B7EF11413CAAF13D0B07C6E7AC9A2 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F (String_t* ___tag0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<gameManager>()
inline gameManager_t2A9919D7CB9773B3211A72C5DA02B305DE63B8AB * GameObject_GetComponent_TisgameManager_t2A9919D7CB9773B3211A72C5DA02B305DE63B8AB_m49ED8B9C83E58A4240FC71E9AB438EBF2C9EB619 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  gameManager_t2A9919D7CB9773B3211A72C5DA02B305DE63B8AB * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Sprite gameManager::getCardBack()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * gameManager_getCardBack_m72B9BD9FFA168A4F5CB25B74A92823F3FB098822_inline (gameManager_t2A9919D7CB9773B3211A72C5DA02B305DE63B8AB * __this, const RuntimeMethod* method);
// UnityEngine.Sprite gameManager::getCardFace(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * gameManager_getCardFace_m2FA320972152025F9ADAF8D9C10E1E04BB14A446 (gameManager_t2A9919D7CB9773B3211A72C5DA02B305DE63B8AB * __this, int32_t ___i0, const RuntimeMethod* method);
// System.Void cardScript::flipcard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cardScript_flipcard_m49A8EF288190A219379C4079919AA0F29952049E (cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4 (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.Collections.IEnumerator cardScript::pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cardScript_pause_mB5BF2DCD65F43214C6CA0FC4532B0879F5CC9FAA (cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6 * __this, const RuntimeMethod* method);
// System.Void cardScript/<pause>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CpauseU3Ed__20__ctor_mE6177DCAC1CC462CC27907717D74399AEB34FEE9 (U3CpauseU3Ed__20_t80A82111B292E0B9D43B8B71F99F25A6BDD0EEC8 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void gameManager::initializeCards()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameManager_initializeCards_mF44A80342BD428300FEDE23432FC8D961A799963 (gameManager_t2A9919D7CB9773B3211A72C5DA02B305DE63B8AB * __this, const RuntimeMethod* method);
// System.Void gameManager::checkCards()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameManager_checkCards_mC20C748E46E8B18A4BD40ECACB3869F29470A48D (gameManager_t2A9919D7CB9773B3211A72C5DA02B305DE63B8AB * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<cardScript>()
inline cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6 * GameObject_GetComponent_TiscardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6_m56F647CEF21406EE0F7D3ABE225F1DEE7FD1CAB5 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean cardScript::get_initialized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool cardScript_get_initialized_mACFDBF3668EBDBD300E7B18CFA7AE5B646E8F4E0_inline (cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6 * __this, const RuntimeMethod* method);
// System.Void cardScript::set_cardValue(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void cardScript_set_cardValue_mADAFD08DA1BBB92A6CB9A6F260C95C986DCECBE4_inline (cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void cardScript::set_initialized(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void cardScript_set_initialized_mC63FC7D64384285BA9593FA8C55FD4878CAFE664_inline (cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void cardScript::setupGraphics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cardScript_setupGraphics_mD609F509C8A3FA38330E9D30286C1BC42034FA54 (cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_gshared)(__this, method);
}
// System.Int32 cardScript::get_state()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t cardScript_get_state_m486D8B461A15F1C86CF6B55D8D474914648AC9F3_inline (cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
inline void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_gshared_inline)(__this, method);
}
// System.Void gameManager::cardComparison(System.Collections.Generic.List`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameManager_cardComparison_m5A47D3FF5DF8396F8EA2A6EABD223B93D4C444CE (gameManager_t2A9919D7CB9773B3211A72C5DA02B305DE63B8AB * __this, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___c0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_gshared_inline)(__this, ___index0, method);
}
// System.Int32 cardScript::get_cardValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t cardScript_get_cardValue_m804850DC442696ACEEB20B33C94E9569F821FE3F_inline (cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator gameManager::endGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* gameManager_endGame_mB04AB1FB3A0FA21E49639A638DA494DA9AA501B6 (gameManager_t2A9919D7CB9773B3211A72C5DA02B305DE63B8AB * __this, const RuntimeMethod* method);
// System.Void cardScript::set_state(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void cardScript_set_state_mF527311F7B3ABC5D3932470C90611844AC9DA1D2_inline (cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void cardScript::falseCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cardScript_falseCheck_m82F2D722EEB6E59FFECC3D2E6E997DBA5F84828A (cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6 * __this, const RuntimeMethod* method);
// System.Void gameManager/<endGame>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CendGameU3Ed__15__ctor_m27E79C32F193BB85C35EF66EA77ED01C92CF38DA (U3CendGameU3Ed__15_t3938227E4045198C45B0340DABB7F1EF91CF0B5B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_timeSinceLevelLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeSinceLevelLoad_m47A90DE6CB3A3180D64F0049290BC72C186FC7FB (const RuntimeMethod* method);
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7 (float* __this, String_t* ___format0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1 (const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.Selectable::get_interactable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Selectable_get_interactable_m4231515CC3C861B431AA22FE3345F831389B3840_inline (Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E (const RuntimeMethod* method);
// System.Collections.IEnumerator ButtonManager::HideGhost(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ButtonManager_HideGhost_mD736CDF76C54CDBE76D3FAFDCB6CE3E64F37F163 (ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Ghosts0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<timeScript>()
inline timeScript_t676CF5FF3D174FDE41EE6B117EC3542CE225C182 * GameObject_GetComponent_TistimeScript_t676CF5FF3D174FDE41EE6B117EC3542CE225C182_mD0FC1FED96DB99D94449D7FDAA5054AFAE0AFCB6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  timeScript_t676CF5FF3D174FDE41EE6B117EC3542CE225C182 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void timeScript::endGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void timeScript_endGame_mB0A702B5CA8CB1CFCC89EB4659D09E282B944BF6 (timeScript_t676CF5FF3D174FDE41EE6B117EC3542CE225C182 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<GetAddScore>()
inline GetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83 * GameObject_GetComponent_TisGetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83_m3DF57F4764A980487940B6B376435B8024A1D23C (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  GetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.GameObject GetAddScore::get_AddScore()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAddScore_get_AddScore_m004E61865019D873D76613EFB76B2619193B5446_inline (GetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<StatsController>()
inline StatsController_tBB477720ABA192D16DF50C483D289E3E5A889095 * GameObject_GetComponent_TisStatsController_tBB477720ABA192D16DF50C483D289E3E5A889095_m3A8F8E23C79DAF9AE52E9EA41EEDBBCCEA041956 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  StatsController_tBB477720ABA192D16DF50C483D289E3E5A889095 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void StatsController::ChangeStats(StatsController/Stats,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatsController_ChangeStats_mC249813A1FF6B782C2489B11D9D995C9C53B1908 (StatsController_tBB477720ABA192D16DF50C483D289E3E5A889095 * __this, int32_t ___stat0, int32_t ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94 (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623 (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___c0, const RuntimeMethod* method);
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * SceneManager_LoadSceneAsync_m9710D4ECD4D8BE75ACB7794E5300288C38A8A6BA (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void UnityEngine.AsyncOperation::set_allowSceneActivation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_set_allowSceneActivation_mFA2C12F4A7D138D4CED4BA72F9E97AF0BD117C33 (AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * __this, bool ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UI.Button::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Button_Start_mFF912EAAB26B72BE4F9C3A9C941EB09306A30E9F (Button_t835E5BB8859DCC6B74CB721B2E668AB21A99C057 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buttonAnimator = GetComponent<Animator>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0;
		L_0 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set_buttonAnimator_4(L_0);
		// }
		return;
	}
}
// System.Void UI.Button::PlayButtonAnimation(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Button_PlayButtonAnimation_mA83558BBEB12480F6ADDA4ACE1B81BA4E94319A4 (Button_t835E5BB8859DCC6B74CB721B2E668AB21A99C057 * __this, String_t* ___animationName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D2459A14B5548945DC69B3234BD9F06AAF41428);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!buttonAnimator.GetCurrentAnimatorStateInfo(0).IsName("HudButtonDoubleTempo"))
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_buttonAnimator_4();
		AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA  L_1;
		L_1 = Animator_GetCurrentAnimatorStateInfo_m562250C74BF8C626B5227FE840D6CB739B5F8314(L_0, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = AnimatorStateInfo_IsName_mF1263FB1F2AB142CFEB61B375D6EEBCFD53F9428((AnimatorStateInfo_t052E146D2DB1EC155950ECA45734BF57134258AA *)(&V_0), _stringLiteral2D2459A14B5548945DC69B3234BD9F06AAF41428, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		// buttonAnimator.Play(animationName);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_3 = __this->get_buttonAnimator_4();
		String_t* L_4 = ___animationName0;
		Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void UI.Button::ButtonDoubleTempoAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Button_ButtonDoubleTempoAnimation_m76BB64F1C7A8CB695A449EAEB6C334B2AFD71E0D (Button_t835E5BB8859DCC6B74CB721B2E668AB21A99C057 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19E04B5FEE6A5CFA0A7B48C209BEBD1BE462DB4B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D2459A14B5548945DC69B3234BD9F06AAF41428);
		s_Il2CppMethodInitialized = true;
	}
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * G_B2_0 = NULL;
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * G_B3_1 = NULL;
	{
		// buttonAnimator.Play(GameController.DoubleTempo ? "HudButtonDoubleTempo" : "HudButtonEnter");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_buttonAnimator_4();
		bool L_1 = ((GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_StaticFields*)il2cpp_codegen_static_fields_for(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_il2cpp_TypeInfo_var))->get_DoubleTempo_5();
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0014;
		}
	}
	{
		G_B3_0 = _stringLiteral19E04B5FEE6A5CFA0A7B48C209BEBD1BE462DB4B;
		G_B3_1 = G_B1_0;
		goto IL_0019;
	}

IL_0014:
	{
		G_B3_0 = _stringLiteral2D2459A14B5548945DC69B3234BD9F06AAF41428;
		G_B3_1 = G_B2_0;
	}

IL_0019:
	{
		Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UI.Button::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Button__ctor_m31AC1611EF7C4C86517D5A5BD2C89C67BC372DF8 (Button_t835E5BB8859DCC6B74CB721B2E668AB21A99C057 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ButtonManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonManager_Start_m63BF9078AF0D191B6DECB859E6FD04816757A739 (ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF37CBD339C4FC2591F66448F35A256012A55618F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < Ghosts.Length; i ++)
		V_0 = 0;
		goto IL_0032;
	}

IL_0004:
	{
		// Ghosts[i].GetComponent<Button>().interactable = false;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_Ghosts_6();
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_4;
		L_4 = GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8(L_3, /*hidden argument*/GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_4, (bool)0, /*hidden argument*/NULL);
		// Ghosts[i].GetComponent<Animator>().Play("GhostDisappear");
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_5 = __this->get_Ghosts_6();
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_9;
		L_9 = GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36(L_8, /*hidden argument*/GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C(L_9, _stringLiteralF37CBD339C4FC2591F66448F35A256012A55618F, /*hidden argument*/NULL);
		// for (int i = 0; i < Ghosts.Length; i ++)
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0032:
	{
		// for (int i = 0; i < Ghosts.Length; i ++)
		int32_t L_11 = V_0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_12 = __this->get_Ghosts_6();
		if ((((int32_t)L_11) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		// StartCoroutine(ShowGhost());
		RuntimeObject* L_13;
		L_13 = ButtonManager_ShowGhost_m4B62BBDF73381C373120804F9F29472E7E2D7EE1(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_14;
		L_14 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ButtonManager::PressedGhost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonManager_PressedGhost_mB774BE48F9246C1A608E7E24090CAFB1BC8518A7 (ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	{
		// if (timeManager.gameOver == false)
		TimeManager_t7C9EC9E1F31A3BAAE33B119C0B91347D37ABAF82 * L_0 = __this->get_timeManager_5();
		bool L_1 = L_0->get_gameOver_7();
		if (L_1)
		{
			goto IL_0044;
		}
	}
	{
		// GameObject Ghosts = EventSystem.current.currentSelectedGameObject;
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_2;
		L_2 = EventSystem_get_current_m4B9C11F490297AE55428038DACD240596D6CE5F2(/*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = EventSystem_get_currentSelectedGameObject_m999F9BFD4C20E2F00C56D4FED89602B6077EF70D_inline(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// Ghosts.GetComponent<Image>().color = Color.red;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = V_0;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5;
		L_5 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_4, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6;
		L_6 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
		// scoreManager.UpdateScore(10, true);
		ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * L_7 = __this->get_scoreManager_4();
		ScoreManager_UpdateScore_m156C45E9BC479AC26BF4055E7CF7673D74089DC2(L_7, ((int32_t)10), (bool)1, /*hidden argument*/NULL);
		// StartCoroutine(HitGhost(Ghosts));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = V_0;
		RuntimeObject* L_9;
		L_9 = ButtonManager_HitGhost_mB61C7D96B90A05DDE7BE5C58A914128418130B1E(__this, L_8, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_10;
		L_10 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_9, /*hidden argument*/NULL);
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator ButtonManager::ShowGhost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ButtonManager_ShowGhost_m4B62BBDF73381C373120804F9F29472E7E2D7EE1 (ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CShowGhostU3Ed__7_tABC923EDB14A96DAA4B068E1A7DD2C59DC240056_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CShowGhostU3Ed__7_tABC923EDB14A96DAA4B068E1A7DD2C59DC240056 * L_0 = (U3CShowGhostU3Ed__7_tABC923EDB14A96DAA4B068E1A7DD2C59DC240056 *)il2cpp_codegen_object_new(U3CShowGhostU3Ed__7_tABC923EDB14A96DAA4B068E1A7DD2C59DC240056_il2cpp_TypeInfo_var);
		U3CShowGhostU3Ed__7__ctor_m4DE1E0513548D50AD8ACABBC42CF7ADC751CA37B(L_0, 0, /*hidden argument*/NULL);
		U3CShowGhostU3Ed__7_tABC923EDB14A96DAA4B068E1A7DD2C59DC240056 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator ButtonManager::HideGhost(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ButtonManager_HideGhost_mD736CDF76C54CDBE76D3FAFDCB6CE3E64F37F163 (ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Ghosts0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CHideGhostU3Ed__8_t749108EEA4C8AEFD44F8B618A2649711FE52BF6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CHideGhostU3Ed__8_t749108EEA4C8AEFD44F8B618A2649711FE52BF6C * L_0 = (U3CHideGhostU3Ed__8_t749108EEA4C8AEFD44F8B618A2649711FE52BF6C *)il2cpp_codegen_object_new(U3CHideGhostU3Ed__8_t749108EEA4C8AEFD44F8B618A2649711FE52BF6C_il2cpp_TypeInfo_var);
		U3CHideGhostU3Ed__8__ctor_m7989C10513A5C38604549DD1A56B2CC4A43A8A99(L_0, 0, /*hidden argument*/NULL);
		U3CHideGhostU3Ed__8_t749108EEA4C8AEFD44F8B618A2649711FE52BF6C * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		U3CHideGhostU3Ed__8_t749108EEA4C8AEFD44F8B618A2649711FE52BF6C * L_2 = L_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = ___Ghosts0;
		L_2->set_Ghosts_3(L_3);
		return L_2;
	}
}
// System.Collections.IEnumerator ButtonManager::HitGhost(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ButtonManager_HitGhost_mB61C7D96B90A05DDE7BE5C58A914128418130B1E (ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Ghosts0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CHitGhostU3Ed__9_t3FD34179317C706741C8ADC0FB2F966AF3A787C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CHitGhostU3Ed__9_t3FD34179317C706741C8ADC0FB2F966AF3A787C4 * L_0 = (U3CHitGhostU3Ed__9_t3FD34179317C706741C8ADC0FB2F966AF3A787C4 *)il2cpp_codegen_object_new(U3CHitGhostU3Ed__9_t3FD34179317C706741C8ADC0FB2F966AF3A787C4_il2cpp_TypeInfo_var);
		U3CHitGhostU3Ed__9__ctor_m757C892FFF881F8E45DB40AB43D682101DD382EC(L_0, 0, /*hidden argument*/NULL);
		U3CHitGhostU3Ed__9_t3FD34179317C706741C8ADC0FB2F966AF3A787C4 * L_1 = L_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = ___Ghosts0;
		L_1->set_Ghosts_2(L_2);
		return L_1;
	}
}
// System.Void ButtonManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonManager__ctor_m0AFBC8424681B66413E58480A32977592BE613CA (ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31 * __this, const RuntimeMethod* method)
{
	{
		// float showTime = 0.8f;
		__this->set_showTime_7((0.800000012f));
		// float hideTime = 2f;
		__this->set_hideTime_8((2.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Countdown::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Countdown_Start_m4EDEE1C587E3BA10C738C384E38BF5E85A4264E9 (Countdown_t16A006C04122DC18F60360F373E3E71866EFAD20 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Countdown::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Countdown_Update_m4230BF1A0AAF57C1351FB052AF55D6F99F8A5A17 (Countdown_t16A006C04122DC18F60360F373E3E71866EFAD20 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Countdown::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Countdown__ctor_m046FB7F09BC45D1C33491F89DD01A93BBD31880E (Countdown_t16A006C04122DC18F60360F373E3E71866EFAD20 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DDOL::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DDOL_Awake_mA885D822A561E552D6BD2A844C0B41EE40914D44 (DDOL_t22079F0D379F512F7086FDEC1DF46C1ABE0F2B9E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DontDestroyOnLoad(this);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DDOL::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DDOL__ctor_mFD3226A38F8325C80E75EE4384780B1D324BB17F (DDOL_t22079F0D379F512F7086FDEC1DF46C1ABE0F2B9E * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Driver::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Driver_Start_m449D37E6D0E6FEE1CEA126655397BCC039117861 (Driver_t2AD30C27D04F1E04A5C815739AB520064BCE9AE0 * __this, const RuntimeMethod* method)
{
	{
		// moveSpeed = normalSpeed;
		float L_0 = __this->get_normalSpeed_5();
		__this->set_moveSpeed_7(L_0);
		// end = false;
		__this->set_end_8((bool)0);
		// bumps = 0;
		__this->set_bumps_9(0);
		// }
		return;
	}
}
// System.Void Driver::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Driver_Update_m7E1B3A6A82D361282B81242FCC7699E9CAD9D387 (Driver_t2AD30C27D04F1E04A5C815739AB520064BCE9AE0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTrafficLight_tD55F68E16E18C0A5F32B506715F5BE0989084ABD_mF959F11BDB482AF2885039C367E5B2EE34D4E1C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral369BCE79E7017ACC971C2E176459A8DAB4079971);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float steerAmount = Input.GetAxis("Horizontal") * steerSpeed * Time.deltaTime;
		float L_0;
		L_0 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		float L_1 = __this->get_steerSpeed_4();
		float L_2;
		L_2 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), (float)L_2));
		// float moveAmount = Input.GetAxis("Vertical") * moveSpeed * Time.deltaTime;
		float L_3;
		L_3 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		float L_4 = __this->get_moveSpeed_7();
		float L_5;
		L_5 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_3, (float)L_4)), (float)L_5));
		// if (trafficLight.GetComponent<TrafficLight>().getLightSwitch()){
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_trafficLight_11();
		TrafficLight_tD55F68E16E18C0A5F32B506715F5BE0989084ABD * L_7;
		L_7 = GameObject_GetComponent_TisTrafficLight_tD55F68E16E18C0A5F32B506715F5BE0989084ABD_mF959F11BDB482AF2885039C367E5B2EE34D4E1C9(L_6, /*hidden argument*/GameObject_GetComponent_TisTrafficLight_tD55F68E16E18C0A5F32B506715F5BE0989084ABD_mF959F11BDB482AF2885039C367E5B2EE34D4E1C9_RuntimeMethod_var);
		bool L_8;
		L_8 = TrafficLight_getLightSwitch_mCB954678FDD2BF019C9851D0BCE5163B0749AAAD(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_004e;
		}
	}
	{
		// steerAmount = 0;
		V_0 = (0.0f);
		// moveAmount = 0;
		V_1 = (0.0f);
	}

IL_004e:
	{
		// if (end){
		bool L_9 = __this->get_end_8();
		if (!L_9)
		{
			goto IL_0062;
		}
	}
	{
		// steerAmount = 0;
		V_0 = (0.0f);
		// moveAmount = 0;
		V_1 = (0.0f);
	}

IL_0062:
	{
		// transform.Rotate(0, 0, -steerAmount);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_11 = V_0;
		Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E(L_10, (0.0f), (0.0f), ((-L_11)), /*hidden argument*/NULL);
		// transform.Translate(0, moveAmount, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_13 = V_1;
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_12, (0.0f), L_13, (0.0f), /*hidden argument*/NULL);
		// Bumps.GetComponent<Text>().text = "No. of Bumps" + ": " + bumps;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_Bumps_13();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_15;
		L_15 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_14, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		int32_t* L_16 = __this->get_address_of_bumps_9();
		String_t* L_17;
		L_17 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_16, /*hidden argument*/NULL);
		String_t* L_18;
		L_18 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral369BCE79E7017ACC971C2E176459A8DAB4079971, L_17, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_15, L_18);
		// }
		return;
	}
}
// System.Void Driver::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Driver_OnTriggerEnter2D_m7B85B1740370352921F7C3C9A0A18C5C4181C9CC (Driver_t2AD30C27D04F1E04A5C815739AB520064BCE9AE0 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA14929A8F3DF2F7E96B8E96ABC70C155DC85D4B2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.tag == "FinishLine")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		String_t* L_1;
		L_1 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteralA14929A8F3DF2F7E96B8E96ABC70C155DC85D4B2, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// StartCoroutine(endGame());
		RuntimeObject* L_3;
		L_3 = Driver_endGame_mF35B7765958FA62717FD9D00D1ECC603A41651AD(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_4;
		L_4 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_3, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Driver::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Driver_OnCollisionEnter2D_m3FA7AD00EEF4E25F61F56F5AFC0B7D2A5D8CEFE1 (Driver_t2AD30C27D04F1E04A5C815739AB520064BCE9AE0 * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___other0, const RuntimeMethod* method)
{
	{
		// bumps++;
		int32_t L_0 = __this->get_bumps_9();
		__this->set_bumps_9(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// StartCoroutine(speed());
		RuntimeObject* L_1;
		L_1 = Driver_speed_m15BBB53CA54B9264FFF4767CAA7909F4E967F3C0(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_2;
		L_2 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Driver::speed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Driver_speed_m15BBB53CA54B9264FFF4767CAA7909F4E967F3C0 (Driver_t2AD30C27D04F1E04A5C815739AB520064BCE9AE0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CspeedU3Ed__14_tAED4F0B8D128FBFC7AF15B2386463C1466BFB5E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CspeedU3Ed__14_tAED4F0B8D128FBFC7AF15B2386463C1466BFB5E0 * L_0 = (U3CspeedU3Ed__14_tAED4F0B8D128FBFC7AF15B2386463C1466BFB5E0 *)il2cpp_codegen_object_new(U3CspeedU3Ed__14_tAED4F0B8D128FBFC7AF15B2386463C1466BFB5E0_il2cpp_TypeInfo_var);
		U3CspeedU3Ed__14__ctor_m0C7F31EC3C86D2D741E87C4A8058A333132F0C57(L_0, 0, /*hidden argument*/NULL);
		U3CspeedU3Ed__14_tAED4F0B8D128FBFC7AF15B2386463C1466BFB5E0 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Driver::endGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Driver_endGame_mF35B7765958FA62717FD9D00D1ECC603A41651AD (Driver_t2AD30C27D04F1E04A5C815739AB520064BCE9AE0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CendGameU3Ed__15_tCC463386A1B61B40FD8EECE6B47D4AC99BBCCAFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CendGameU3Ed__15_tCC463386A1B61B40FD8EECE6B47D4AC99BBCCAFC * L_0 = (U3CendGameU3Ed__15_tCC463386A1B61B40FD8EECE6B47D4AC99BBCCAFC *)il2cpp_codegen_object_new(U3CendGameU3Ed__15_tCC463386A1B61B40FD8EECE6B47D4AC99BBCCAFC_il2cpp_TypeInfo_var);
		U3CendGameU3Ed__15__ctor_mC1902BCD325034E40667BEC522657D33BD15B28C(L_0, 0, /*hidden argument*/NULL);
		U3CendGameU3Ed__15_tCC463386A1B61B40FD8EECE6B47D4AC99BBCCAFC * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Driver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Driver__ctor_mD032485C1B6C85457D024A88D14085E187979EC4 (Driver_t2AD30C27D04F1E04A5C815739AB520064BCE9AE0 * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] private float steerSpeed = 130f;
		__this->set_steerSpeed_4((130.0f));
		// [SerializeField] private float normalSpeed = 7f;
		__this->set_normalSpeed_5((7.0f));
		// [SerializeField] private float slowSpeed = 5f;
		__this->set_slowSpeed_6((5.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Droplet::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Droplet_Update_m32974D9A96159A0A2CB9F685F18FE1206D0C8532 (Droplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF * __this, const RuntimeMethod* method)
{
	{
		// droplet.transform.position = _position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_droplet_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = __this->get__position_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_2, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_1, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Droplet::OnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Droplet_OnClick_mC120D2659C150D6B25301E3AC99A0855332427FA (Droplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF * __this, const RuntimeMethod* method)
{
	{
		// _state = true;
		__this->set__state_6((bool)1);
		// }
		return;
	}
}
// UnityEngine.Vector2 Droplet::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Droplet_get_position_mB7F46C99396147DE2172BB76FEF273EFA5647720 (Droplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF * __this, const RuntimeMethod* method)
{
	{
		// get { return _position; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get__position_5();
		return L_0;
	}
}
// System.Void Droplet::set_position(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Droplet_set_position_m3916063F9B041010885703B30563E031881A996C (Droplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method)
{
	{
		// set { _position = value; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___value0;
		__this->set__position_5(L_0);
		// set { _position = value; }
		return;
	}
}
// System.Boolean Droplet::get_state()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Droplet_get_state_mA89FBFB0087AD4DA992C623C35651D8080224A2B (Droplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF * __this, const RuntimeMethod* method)
{
	{
		// get { return _state; }
		bool L_0 = __this->get__state_6();
		return L_0;
	}
}
// System.Void Droplet::set_state(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Droplet_set_state_mE58BAD4A0B67C6F1434AC2F1B5D33C45C0925BC8 (Droplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { _state = value; }
		bool L_0 = ___value0;
		__this->set__state_6(L_0);
		// set { _state = value; }
		return;
	}
}
// System.Boolean Droplet::get_pressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Droplet_get_pressed_m7F28B695068C001F36237B65AF39224AD5689C20 (Droplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF * __this, const RuntimeMethod* method)
{
	{
		// get { return _pressed; }
		bool L_0 = __this->get__pressed_7();
		return L_0;
	}
}
// System.Void Droplet::set_pressed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Droplet_set_pressed_mC474246005E8F80599D7DF6160879625780B90B7 (Droplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { _pressed = value; }
		bool L_0 = ___value0;
		__this->set__pressed_7(L_0);
		// set { _pressed = value; }
		return;
	}
}
// System.Void Droplet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Droplet__ctor_m4811A714A6BB47E3395AC993717A670E81811280 (Droplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ErrorScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorScript_Update_mC5D83E8D97CC311C84C591A74B7F0D3102AF72EB (ErrorScript_tC3890EB6BE037D788D007075DE1A96B692A23256 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C2809E69B0C1EC23846AB4AEDE4E1A8688ABEC6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<Text>().text = "Errors" + ": " + errors;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0;
		L_0 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(__this, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		int32_t* L_1 = __this->get_address_of_errors_4();
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_1, /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral9C2809E69B0C1EC23846AB4AEDE4E1A8688ABEC6, L_2, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		// }
		return;
	}
}
// System.Void ErrorScript::addError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorScript_addError_mD6B4899600C8635F832AF93F07D1CF05BA83B328 (ErrorScript_tC3890EB6BE037D788D007075DE1A96B692A23256 * __this, const RuntimeMethod* method)
{
	{
		// errors++;
		int32_t L_0 = __this->get_errors_4();
		__this->set_errors_4(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// }
		return;
	}
}
// System.Void ErrorScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorScript__ctor_m1655996BF9E8A2DDC446465634EE25D219B2918E (ErrorScript_tC3890EB6BE037D788D007075DE1A96B692A23256 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void World.Eye::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Eye_Update_m31AD3ED01D5FEB9BAB75E8ADB2038E8C7F1C8458 (Eye_tF20146531CD92887047A5E8C3D7F14526A7D84A8 * __this, const RuntimeMethod* method)
{
	{
		// FollowCursor();
		Eye_FollowCursor_m4D36795F1C1E2546C811EDD65BA3FB96A5A9E972(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void World.Eye::FollowCursor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Eye_FollowCursor_m4D36795F1C1E2546C811EDD65BA3FB96A5A9E972 (Eye_tF20146531CD92887047A5E8C3D7F14526A7D84A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (Camera.main == null)
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// var mousePosition = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2;
		L_2 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// var direction = new Vector2(
		//     mousePosition.x - transform.position.x,
		//     mousePosition.y - transform.position.y
		// );
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		float L_6 = L_5.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		float L_11 = L_10.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		float L_14 = L_13.get_y_3();
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_1), ((float)il2cpp_codegen_subtract((float)L_6, (float)L_9)), ((float)il2cpp_codegen_subtract((float)L_11, (float)L_14)), /*hidden argument*/NULL);
		// transform.up = direction;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_16, /*hidden argument*/NULL);
		Transform_set_up_m3D2B71DA51EA167C367FD275B7B28241C565F127(L_15, L_17, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void World.Eye::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Eye__ctor_mAA680C8A0E59E294D90B92DA2CDC1E2B1A32DEB9 (Eye_tF20146531CD92887047A5E8C3D7F14526A7D84A8 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FollowCamera::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowCamera_LateUpdate_m5A575DFAC9B6B8291C70121B4553EBA71264DD54 (FollowCamera_tDC43B01F7C498FBA58AC6A8AC2897485C46FAC1A * __this, const RuntimeMethod* method)
{
	{
		// transform.position = thingToFollow.transform.position + new Vector3(0, 3, -10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_thingToFollow_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), (0.0f), (3.0f), (-10.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_3, L_4, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_0, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FollowCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowCamera__ctor_m93F487C3401AD49E35838148C7B654B8E5C24308 (FollowCamera_tDC43B01F7C498FBA58AC6A8AC2897485C46FAC1A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_Start_mCC3F0292799528323E2217A12DB08D98CDD492AE (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m1D81E170D9B0CD0720A6BCDD722BC8A0B4AA8F0E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pauseMenuElements = pauseMenuGameObject.GetComponentsInChildren<Transform>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_pauseMenuGameObject_6();
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_1;
		L_1 = GameObject_GetComponentsInChildren_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m1D81E170D9B0CD0720A6BCDD722BC8A0B4AA8F0E(L_0, /*hidden argument*/GameObject_GetComponentsInChildren_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m1D81E170D9B0CD0720A6BCDD722BC8A0B4AA8F0E_RuntimeMethod_var);
		__this->set_pauseMenuElements_7(L_1);
		// }
		return;
	}
}
// System.Void GameController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_Update_mA76A2CE1F2AC1AACCDBF913CA6E1EA73DC621CD0 (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0ED343195A5AF114483C53DB9F3F7FF03CABB07);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown("escape"))
		bool L_0;
		L_0 = Input_GetKeyDown_m9D556E728119BEB64AA624EBE82931367B6573A5(_stringLiteralD0ED343195A5AF114483C53DB9F3F7FF03CABB07, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// TogglePause();
		GameController_TogglePause_m63448FEDCB01ACBC68B79F35C8AF1FE1E4503584(__this, /*hidden argument*/NULL);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void GameController::ChangeTempo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_ChangeTempo_m798B1E31A464D674E36EC9B7717E780E612497D7 (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float G_B3_0 = 0.0f;
	{
		// Time.timeScale = !DoubleTempo ? 2f : 1f;
		bool L_0 = ((GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_StaticFields*)il2cpp_codegen_static_fields_for(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_il2cpp_TypeInfo_var))->get_DoubleTempo_5();
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		G_B3_0 = (1.0f);
		goto IL_0013;
	}

IL_000e:
	{
		G_B3_0 = (2.0f);
	}

IL_0013:
	{
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA(G_B3_0, /*hidden argument*/NULL);
		// DoubleTempo = !DoubleTempo;
		bool L_1 = ((GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_StaticFields*)il2cpp_codegen_static_fields_for(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_il2cpp_TypeInfo_var))->get_DoubleTempo_5();
		((GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_StaticFields*)il2cpp_codegen_static_fields_for(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_il2cpp_TypeInfo_var))->set_DoubleTempo_5((bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0));
		// }
		return;
	}
}
// System.Void GameController::TogglePause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_TogglePause_m63448FEDCB01ACBC68B79F35C8AF1FE1E4503584 (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ResetPauseScreen();
		GameController_ResetPauseScreen_m47D7A06E45F696E078CBDB36DBDB108EA571CE67(__this, /*hidden argument*/NULL);
		// if (!GamePaused)
		bool L_0 = ((GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_StaticFields*)il2cpp_codegen_static_fields_for(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_il2cpp_TypeInfo_var))->get_GamePaused_4();
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// Pause();
		GameController_Pause_mF6FCFD1C244F2FD91A652F9D9A6ED07C9AD0DC2B(__this, /*hidden argument*/NULL);
		// }
		goto IL_001b;
	}

IL_0015:
	{
		// UnPause();
		GameController_UnPause_m2242C8B454AE371BDE482EA1F76C7372544DF5CF(__this, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// GamePaused = !GamePaused;
		bool L_1 = ((GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_StaticFields*)il2cpp_codegen_static_fields_for(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_il2cpp_TypeInfo_var))->get_GamePaused_4();
		((GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_StaticFields*)il2cpp_codegen_static_fields_for(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_il2cpp_TypeInfo_var))->set_GamePaused_4((bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0));
		// }
		return;
	}
}
// System.Void GameController::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_Pause_mF6FCFD1C244F2FD91A652F9D9A6ED07C9AD0DC2B (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method)
{
	{
		// Time.timeScale = 0f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
		// pauseMenuGameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_pauseMenuGameObject_6();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameController::UnPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_UnPause_m2242C8B454AE371BDE482EA1F76C7372544DF5CF (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float G_B3_0 = 0.0f;
	{
		// Time.timeScale = DoubleTempo ? 2f : 1f;
		bool L_0 = ((GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_StaticFields*)il2cpp_codegen_static_fields_for(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_il2cpp_TypeInfo_var))->get_DoubleTempo_5();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		G_B3_0 = (1.0f);
		goto IL_0013;
	}

IL_000e:
	{
		G_B3_0 = (2.0f);
	}

IL_0013:
	{
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA(G_B3_0, /*hidden argument*/NULL);
		// pauseMenuGameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_pauseMenuGameObject_6();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameController::ResetPauseScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_ResetPauseScreen_m47D7A06E45F696E078CBDB36DBDB108EA571CE67 (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method)
{
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (var element in pauseMenuElements)
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_0 = __this->get_pauseMenuElements_7();
		V_0 = L_0;
		V_1 = 0;
		goto IL_002b;
	}

IL_000b:
	{
		// foreach (var element in pauseMenuElements)
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		// element.localScale = new Vector3(0.8f, 0.8f, 1f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_5), (0.800000012f), (0.800000012f), (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_4, L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_002b:
	{
		// foreach (var element in pauseMenuElements)
		int32_t L_7 = V_1;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GameController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController__ctor_m9D952052C0A7234373FA5531292FCA8855BE2643 (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_mC9303BA7C3117BD861F49F8E36151CC52117E6C1 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// if (!_init)
		bool L_0 = __this->get__init_8();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// initializeDroplets ();
		GameManager_initializeDroplets_m063A22609DB8A66B27AE24030DD73BAEC5628BF4(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// if (Input.GetMouseButtonUp (0))
		bool L_1;
		L_1 = Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022(0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// checkDroplet ();
		GameManager_checkDroplet_m8761776ED511BA2E8CD160AA354C494CD1E7D0F8(__this, /*hidden argument*/NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void GameManager::initializeDroplets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_initializeDroplets_m063A22609DB8A66B27AE24030DD73BAEC5628BF4 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDroplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF_mF19868F8C2A83A7BC3341157892E7DBD1D23A0FE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	{
		// bool overlap = false;
		V_0 = (bool)0;
		// float xPos = Random.Range(minXPos, maxXPos);
		int32_t L_0 = __this->get_minXPos_10();
		int32_t L_1 = __this->get_maxXPos_11();
		int32_t L_2;
		L_2 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(L_0, L_1, /*hidden argument*/NULL);
		V_1 = ((float)((float)L_2));
		// float yPos = Random.Range(minYPos, maxYPos);
		int32_t L_3 = __this->get_minYPos_12();
		int32_t L_4 = __this->get_maxYPos_13();
		int32_t L_5;
		L_5 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(L_3, L_4, /*hidden argument*/NULL);
		V_2 = ((float)((float)L_5));
		// Droplets[0].GetComponent<Droplet>().position = new Vector2(xPos, yPos);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_6 = __this->get_Droplets_4();
		int32_t L_7 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Droplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF * L_9;
		L_9 = GameObject_GetComponent_TisDroplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF_mF19868F8C2A83A7BC3341157892E7DBD1D23A0FE(L_8, /*hidden argument*/GameObject_GetComponent_TisDroplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF_mF19868F8C2A83A7BC3341157892E7DBD1D23A0FE_RuntimeMethod_var);
		float L_10 = V_1;
		float L_11 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_12), L_10, L_11, /*hidden argument*/NULL);
		Droplet_set_position_m3916063F9B041010885703B30563E031881A996C_inline(L_9, L_12, /*hidden argument*/NULL);
		// Droplets [0].GetComponent<Droplet> ().pressed = false;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_13 = __this->get_Droplets_4();
		int32_t L_14 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		Droplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF * L_16;
		L_16 = GameObject_GetComponent_TisDroplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF_mF19868F8C2A83A7BC3341157892E7DBD1D23A0FE(L_15, /*hidden argument*/GameObject_GetComponent_TisDroplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF_mF19868F8C2A83A7BC3341157892E7DBD1D23A0FE_RuntimeMethod_var);
		Droplet_set_pressed_mC474246005E8F80599D7DF6160879625780B90B7_inline(L_16, (bool)0, /*hidden argument*/NULL);
		// Droplets [0].GetComponent<Droplet> ().state = false;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_17 = __this->get_Droplets_4();
		int32_t L_18 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		Droplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF * L_20;
		L_20 = GameObject_GetComponent_TisDroplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF_mF19868F8C2A83A7BC3341157892E7DBD1D23A0FE(L_19, /*hidden argument*/GameObject_GetComponent_TisDroplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF_mF19868F8C2A83A7BC3341157892E7DBD1D23A0FE_RuntimeMethod_var);
		Droplet_set_state_mE58BAD4A0B67C6F1434AC2F1B5D33C45C0925BC8_inline(L_20, (bool)0, /*hidden argument*/NULL);
		// int n = 1;
		V_3 = 1;
		goto IL_015a;
	}

IL_006e:
	{
		// overlap = false;
		V_0 = (bool)0;
		// xPos = Random.Range(minXPos, maxXPos);
		int32_t L_21 = __this->get_minXPos_10();
		int32_t L_22 = __this->get_maxXPos_11();
		int32_t L_23;
		L_23 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(L_21, L_22, /*hidden argument*/NULL);
		V_1 = ((float)((float)L_23));
		// yPos = Random.Range(minYPos, maxYPos);
		int32_t L_24 = __this->get_minYPos_12();
		int32_t L_25 = __this->get_maxYPos_13();
		int32_t L_26;
		L_26 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(L_24, L_25, /*hidden argument*/NULL);
		V_2 = ((float)((float)L_26));
		// for (int i = 1; i <= n; i++ ){
		V_4 = 1;
		goto IL_010f;
	}

IL_009b:
	{
		// float previousX = Droplets[n-i].GetComponent<Droplet>().position.x;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_27 = __this->get_Droplets_4();
		int32_t L_28 = V_3;
		int32_t L_29 = V_4;
		int32_t L_30 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)L_29));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		Droplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF * L_32;
		L_32 = GameObject_GetComponent_TisDroplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF_mF19868F8C2A83A7BC3341157892E7DBD1D23A0FE(L_31, /*hidden argument*/GameObject_GetComponent_TisDroplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF_mF19868F8C2A83A7BC3341157892E7DBD1D23A0FE_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_33;
		L_33 = Droplet_get_position_mB7F46C99396147DE2172BB76FEF273EFA5647720_inline(L_32, /*hidden argument*/NULL);
		float L_34 = L_33.get_x_0();
		V_5 = L_34;
		// float previousY = Droplets[n-i].GetComponent<Droplet>().position.y;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_35 = __this->get_Droplets_4();
		int32_t L_36 = V_3;
		int32_t L_37 = V_4;
		int32_t L_38 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_36, (int32_t)L_37));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39 = (L_35)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38));
		Droplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF * L_40;
		L_40 = GameObject_GetComponent_TisDroplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF_mF19868F8C2A83A7BC3341157892E7DBD1D23A0FE(L_39, /*hidden argument*/GameObject_GetComponent_TisDroplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF_mF19868F8C2A83A7BC3341157892E7DBD1D23A0FE_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_41;
		L_41 = Droplet_get_position_mB7F46C99396147DE2172BB76FEF273EFA5647720_inline(L_40, /*hidden argument*/NULL);
		float L_42 = L_41.get_y_1();
		V_6 = L_42;
		// if (previousX < xPos + sideLength && previousX + sideLength > xPos && previousY < yPos + sideLength && previousY + sideLength > yPos)
		float L_43 = V_5;
		float L_44 = V_1;
		int32_t L_45 = __this->get_sideLength_14();
		if ((!(((float)L_43) < ((float)((float)il2cpp_codegen_add((float)L_44, (float)((float)((float)L_45))))))))
		{
			goto IL_0109;
		}
	}
	{
		float L_46 = V_5;
		int32_t L_47 = __this->get_sideLength_14();
		float L_48 = V_1;
		if ((!(((float)((float)il2cpp_codegen_add((float)L_46, (float)((float)((float)L_47))))) > ((float)L_48))))
		{
			goto IL_0109;
		}
	}
	{
		float L_49 = V_6;
		float L_50 = V_2;
		int32_t L_51 = __this->get_sideLength_14();
		if ((!(((float)L_49) < ((float)((float)il2cpp_codegen_add((float)L_50, (float)((float)((float)L_51))))))))
		{
			goto IL_0109;
		}
	}
	{
		float L_52 = V_6;
		int32_t L_53 = __this->get_sideLength_14();
		float L_54 = V_2;
		if ((!(((float)((float)il2cpp_codegen_add((float)L_52, (float)((float)((float)L_53))))) > ((float)L_54))))
		{
			goto IL_0109;
		}
	}
	{
		// overlap = true;
		V_0 = (bool)1;
	}

IL_0109:
	{
		// for (int i = 1; i <= n; i++ ){
		int32_t L_55 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1));
	}

IL_010f:
	{
		// for (int i = 1; i <= n; i++ ){
		int32_t L_56 = V_4;
		int32_t L_57 = V_3;
		if ((((int32_t)L_56) <= ((int32_t)L_57)))
		{
			goto IL_009b;
		}
	}
	{
		// if (overlap){
		bool L_58 = V_0;
		if (L_58)
		{
			goto IL_015a;
		}
	}
	{
		// Droplets[n].GetComponent<Droplet>().position = new Vector2(xPos, yPos);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_59 = __this->get_Droplets_4();
		int32_t L_60 = V_3;
		int32_t L_61 = L_60;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_62 = (L_59)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_61));
		Droplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF * L_63;
		L_63 = GameObject_GetComponent_TisDroplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF_mF19868F8C2A83A7BC3341157892E7DBD1D23A0FE(L_62, /*hidden argument*/GameObject_GetComponent_TisDroplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF_mF19868F8C2A83A7BC3341157892E7DBD1D23A0FE_RuntimeMethod_var);
		float L_64 = V_1;
		float L_65 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_66;
		memset((&L_66), 0, sizeof(L_66));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_66), L_64, L_65, /*hidden argument*/NULL);
		Droplet_set_position_m3916063F9B041010885703B30563E031881A996C_inline(L_63, L_66, /*hidden argument*/NULL);
		// Droplets [n].GetComponent<Droplet> ().pressed = false;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_67 = __this->get_Droplets_4();
		int32_t L_68 = V_3;
		int32_t L_69 = L_68;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_70 = (L_67)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_69));
		Droplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF * L_71;
		L_71 = GameObject_GetComponent_TisDroplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF_mF19868F8C2A83A7BC3341157892E7DBD1D23A0FE(L_70, /*hidden argument*/GameObject_GetComponent_TisDroplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF_mF19868F8C2A83A7BC3341157892E7DBD1D23A0FE_RuntimeMethod_var);
		Droplet_set_pressed_mC474246005E8F80599D7DF6160879625780B90B7_inline(L_71, (bool)0, /*hidden argument*/NULL);
		// Droplets [n].GetComponent<Droplet> ().state = false;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_72 = __this->get_Droplets_4();
		int32_t L_73 = V_3;
		int32_t L_74 = L_73;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_75 = (L_72)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_74));
		Droplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF * L_76;
		L_76 = GameObject_GetComponent_TisDroplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF_mF19868F8C2A83A7BC3341157892E7DBD1D23A0FE(L_75, /*hidden argument*/GameObject_GetComponent_TisDroplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF_mF19868F8C2A83A7BC3341157892E7DBD1D23A0FE_RuntimeMethod_var);
		Droplet_set_state_mE58BAD4A0B67C6F1434AC2F1B5D33C45C0925BC8_inline(L_76, (bool)0, /*hidden argument*/NULL);
		// n++;
		int32_t L_77 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_77, (int32_t)1));
	}

IL_015a:
	{
		// while(n<Droplets.Length){
		int32_t L_78 = V_3;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_79 = __this->get_Droplets_4();
		if ((((int32_t)L_78) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_79)->max_length))))))
		{
			goto IL_006e;
		}
	}
	{
		// if (!_init)
		bool L_80 = __this->get__init_8();
		if (L_80)
		{
			goto IL_0177;
		}
	}
	{
		// _init = true;
		__this->set__init_8((bool)1);
	}

IL_0177:
	{
		// }
		return;
	}
}
// System.Void GameManager::checkDroplet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_checkDroplet_m8761776ED511BA2E8CD160AA354C494CD1E7D0F8 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDroplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF_mF19868F8C2A83A7BC3341157892E7DBD1D23A0FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisErrorScript_tC3890EB6BE037D788D007075DE1A96B692A23256_m34057746B92896B0D25D03D99B3F51A957795DF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// bool right = true;
		V_0 = (bool)1;
		// for (int i = 0; i < Droplets.Length; i++) {
		V_1 = 0;
		goto IL_00f4;
	}

IL_0009:
	{
		// if (Droplets [i].GetComponent<Droplet> ().state){
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_Droplets_4();
		int32_t L_1 = V_1;
		int32_t L_2 = L_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		Droplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF * L_4;
		L_4 = GameObject_GetComponent_TisDroplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF_mF19868F8C2A83A7BC3341157892E7DBD1D23A0FE(L_3, /*hidden argument*/GameObject_GetComponent_TisDroplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF_mF19868F8C2A83A7BC3341157892E7DBD1D23A0FE_RuntimeMethod_var);
		bool L_5;
		L_5 = Droplet_get_state_mA89FBFB0087AD4DA992C623C35651D8080224A2B_inline(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_00f0;
		}
	}
	{
		// for (int j = 1; j<=i; j++){
		V_2 = 1;
		goto IL_0042;
	}

IL_0024:
	{
		// if(!Droplets [i-j].GetComponent<Droplet> ().pressed){
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_6 = __this->get_Droplets_4();
		int32_t L_7 = V_1;
		int32_t L_8 = V_2;
		int32_t L_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)L_8));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		Droplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF * L_11;
		L_11 = GameObject_GetComponent_TisDroplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF_mF19868F8C2A83A7BC3341157892E7DBD1D23A0FE(L_10, /*hidden argument*/GameObject_GetComponent_TisDroplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF_mF19868F8C2A83A7BC3341157892E7DBD1D23A0FE_RuntimeMethod_var);
		bool L_12;
		L_12 = Droplet_get_pressed_m7F28B695068C001F36237B65AF39224AD5689C20_inline(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_003e;
		}
	}
	{
		// right = false;
		V_0 = (bool)0;
		// break;
		goto IL_0046;
	}

IL_003e:
	{
		// for (int j = 1; j<=i; j++){
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0042:
	{
		// for (int j = 1; j<=i; j++){
		int32_t L_14 = V_2;
		int32_t L_15 = V_1;
		if ((((int32_t)L_14) <= ((int32_t)L_15)))
		{
			goto IL_0024;
		}
	}

IL_0046:
	{
		// if(right){
		bool L_16 = V_0;
		if (!L_16)
		{
			goto IL_00be;
		}
	}
	{
		// Droplets [i].GetComponent<Droplet> ().pressed = true;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_17 = __this->get_Droplets_4();
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		Droplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF * L_21;
		L_21 = GameObject_GetComponent_TisDroplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF_mF19868F8C2A83A7BC3341157892E7DBD1D23A0FE(L_20, /*hidden argument*/GameObject_GetComponent_TisDroplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF_mF19868F8C2A83A7BC3341157892E7DBD1D23A0FE_RuntimeMethod_var);
		Droplet_set_pressed_mC474246005E8F80599D7DF6160879625780B90B7_inline(L_21, (bool)1, /*hidden argument*/NULL);
		// Droplets [i].GetComponent<Image>().color = Color.green;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_22 = __this->get_Droplets_4();
		int32_t L_23 = V_1;
		int32_t L_24 = L_23;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_26;
		L_26 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_25, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_27;
		L_27 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_26, L_27);
		// Droplets [i].GetComponent<Animator>().enabled = false;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_28 = __this->get_Droplets_4();
		int32_t L_29 = V_1;
		int32_t L_30 = L_29;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_32;
		L_32 = GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36(L_31, /*hidden argument*/GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_32, (bool)0, /*hidden argument*/NULL);
		// Droplets [i].GetComponent<Button>().interactable = false;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_33 = __this->get_Droplets_4();
		int32_t L_34 = V_1;
		int32_t L_35 = L_34;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35));
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_37;
		L_37 = GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8(L_36, /*hidden argument*/GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_37, (bool)0, /*hidden argument*/NULL);
		// droplets--;
		int32_t L_38 = __this->get_droplets_9();
		__this->set_droplets_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_38, (int32_t)1)));
		// if(droplets == 0){
		int32_t L_39 = __this->get_droplets_9();
		if (L_39)
		{
			goto IL_00dc;
		}
	}
	{
		// StartCoroutine(endGame());
		RuntimeObject* L_40;
		L_40 = GameManager_endGame_m3EE9BFA7BF02274A725C2D3E43EB442E156F86C3(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_41;
		L_41 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_40, /*hidden argument*/NULL);
		// }
		goto IL_00dc;
	}

IL_00be:
	{
		// gameErrors.GetComponent<ErrorScript> ().addError ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_42 = __this->get_gameErrors_6();
		ErrorScript_tC3890EB6BE037D788D007075DE1A96B692A23256 * L_43;
		L_43 = GameObject_GetComponent_TisErrorScript_tC3890EB6BE037D788D007075DE1A96B692A23256_m34057746B92896B0D25D03D99B3F51A957795DF2(L_42, /*hidden argument*/GameObject_GetComponent_TisErrorScript_tC3890EB6BE037D788D007075DE1A96B692A23256_m34057746B92896B0D25D03D99B3F51A957795DF2_RuntimeMethod_var);
		ErrorScript_addError_mD6B4899600C8635F832AF93F07D1CF05BA83B328(L_43, /*hidden argument*/NULL);
		// StartCoroutine(incorrect(i));
		int32_t L_44 = V_1;
		RuntimeObject* L_45;
		L_45 = GameManager_incorrect_mCCF464D686F45DC633F3357006F484BFF65A04FF(__this, L_44, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_46;
		L_46 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_45, /*hidden argument*/NULL);
	}

IL_00dc:
	{
		// Droplets [i].GetComponent<Droplet> ().state = false;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_47 = __this->get_Droplets_4();
		int32_t L_48 = V_1;
		int32_t L_49 = L_48;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_50 = (L_47)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_49));
		Droplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF * L_51;
		L_51 = GameObject_GetComponent_TisDroplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF_mF19868F8C2A83A7BC3341157892E7DBD1D23A0FE(L_50, /*hidden argument*/GameObject_GetComponent_TisDroplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF_mF19868F8C2A83A7BC3341157892E7DBD1D23A0FE_RuntimeMethod_var);
		Droplet_set_state_mE58BAD4A0B67C6F1434AC2F1B5D33C45C0925BC8_inline(L_51, (bool)0, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00f0:
	{
		// for (int i = 0; i < Droplets.Length; i++) {
		int32_t L_52 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
	}

IL_00f4:
	{
		// for (int i = 0; i < Droplets.Length; i++) {
		int32_t L_53 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_54 = __this->get_Droplets_4();
		if ((((int32_t)L_53) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_54)->max_length))))))
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator GameManager::incorrect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_incorrect_mCCF464D686F45DC633F3357006F484BFF65A04FF (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CincorrectU3Ed__14_tFE7CCCAA58DE29E1D3B8C29A43713ABC6A845316_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CincorrectU3Ed__14_tFE7CCCAA58DE29E1D3B8C29A43713ABC6A845316 * L_0 = (U3CincorrectU3Ed__14_tFE7CCCAA58DE29E1D3B8C29A43713ABC6A845316 *)il2cpp_codegen_object_new(U3CincorrectU3Ed__14_tFE7CCCAA58DE29E1D3B8C29A43713ABC6A845316_il2cpp_TypeInfo_var);
		U3CincorrectU3Ed__14__ctor_m657516299E85CB945519E11D945AC719528672D6(L_0, 0, /*hidden argument*/NULL);
		U3CincorrectU3Ed__14_tFE7CCCAA58DE29E1D3B8C29A43713ABC6A845316 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		U3CincorrectU3Ed__14_tFE7CCCAA58DE29E1D3B8C29A43713ABC6A845316 * L_2 = L_1;
		int32_t L_3 = ___i0;
		L_2->set_i_3(L_3);
		return L_2;
	}
}
// System.Collections.IEnumerator GameManager::endGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_endGame_m3EE9BFA7BF02274A725C2D3E43EB442E156F86C3 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CendGameU3Ed__15_t253E2AF2E4FB090B5DC46DBC22B801A7E06390F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CendGameU3Ed__15_t253E2AF2E4FB090B5DC46DBC22B801A7E06390F9 * L_0 = (U3CendGameU3Ed__15_t253E2AF2E4FB090B5DC46DBC22B801A7E06390F9 *)il2cpp_codegen_object_new(U3CendGameU3Ed__15_t253E2AF2E4FB090B5DC46DBC22B801A7E06390F9_il2cpp_TypeInfo_var);
		U3CendGameU3Ed__15__ctor_m19531227FB6B47A68244B8D08E05DD976DE819AF(L_0, 0, /*hidden argument*/NULL);
		U3CendGameU3Ed__15_t253E2AF2E4FB090B5DC46DBC22B801A7E06390F9 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mE8666F6D0CA9C31E16B719F79780DC4B0245B64D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// private int droplets = 9;
		__this->set_droplets_9(((int32_t)9));
		// private int minXPos = 100, maxXPos = 1850, minYPos = 100, maxYPos = 800;
		__this->set_minXPos_10(((int32_t)100));
		// private int minXPos = 100, maxXPos = 1850, minYPos = 100, maxYPos = 800;
		__this->set_maxXPos_11(((int32_t)1850));
		// private int minXPos = 100, maxXPos = 1850, minYPos = 100, maxYPos = 800;
		__this->set_minYPos_12(((int32_t)100));
		// private int minXPos = 100, maxXPos = 1850, minYPos = 100, maxYPos = 800;
		__this->set_maxYPos_13(((int32_t)800));
		// private int sideLength = 320;
		__this->set_sideLength_14(((int32_t)320));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.GameObject GetAddScore::get_AddScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAddScore_get_AddScore_m004E61865019D873D76613EFB76B2619193B5446 (GetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83 * __this, const RuntimeMethod* method)
{
	{
		// get { return _AddScore; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get__AddScore_4();
		return L_0;
	}
}
// System.Void GetAddScore::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetAddScore__ctor_m959DBA3EA8ABE295C5430A3DF064A221A5FED6AB (GetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void World.Horizon::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Horizon_Start_mCCCB961BBE5114D435701D8CB3963477B0FDE499 (Horizon_t396B45C0C2FCCBBEEE57CF298C4899E22AF128FE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8_m92B9ADEC5AE6A5FB55D702AD0410469739EF307C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A8FEB9EDCDE7BF9B7F65ADAA728AF508785C657);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartHorizonCycle();
		Horizon_StartHorizonCycle_m4D2F715A474C83ACBC6E0F5C10C454643FAF0FD0(__this, /*hidden argument*/NULL);
		// sunAnimation = sunGameObject.GetComponent<Animation>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_sunGameObject_4();
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_1;
		L_1 = GameObject_GetComponent_TisAnimation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8_m92B9ADEC5AE6A5FB55D702AD0410469739EF307C(L_0, /*hidden argument*/GameObject_GetComponent_TisAnimation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8_m92B9ADEC5AE6A5FB55D702AD0410469739EF307C_RuntimeMethod_var);
		__this->set_sunAnimation_8(L_1);
		// moonAnimation = moonGameObject.GetComponent<Animation>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_moonGameObject_5();
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_3;
		L_3 = GameObject_GetComponent_TisAnimation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8_m92B9ADEC5AE6A5FB55D702AD0410469739EF307C(L_2, /*hidden argument*/GameObject_GetComponent_TisAnimation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8_m92B9ADEC5AE6A5FB55D702AD0410469739EF307C_RuntimeMethod_var);
		__this->set_moonAnimation_9(L_3);
		// dayCounterAnimation = GameObject.FindWithTag("DayCounter").GetComponent<Animation>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = GameObject_FindWithTag_mEF75D1FF1E55B338A77161FDCB68ED0A2A911DF3(_stringLiteral3A8FEB9EDCDE7BF9B7F65ADAA728AF508785C657, /*hidden argument*/NULL);
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_5;
		L_5 = GameObject_GetComponent_TisAnimation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8_m92B9ADEC5AE6A5FB55D702AD0410469739EF307C(L_4, /*hidden argument*/GameObject_GetComponent_TisAnimation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8_m92B9ADEC5AE6A5FB55D702AD0410469739EF307C_RuntimeMethod_var);
		__this->set_dayCounterAnimation_10(L_5);
		// backgroundAnimation = background.GetComponent<Animation>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_background_6();
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_7;
		L_7 = GameObject_GetComponent_TisAnimation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8_m92B9ADEC5AE6A5FB55D702AD0410469739EF307C(L_6, /*hidden argument*/GameObject_GetComponent_TisAnimation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8_m92B9ADEC5AE6A5FB55D702AD0410469739EF307C_RuntimeMethod_var);
		__this->set_backgroundAnimation_11(L_7);
		// dayCounterText = GameObject.FindWithTag("DayCounter").GetComponent<Text>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = GameObject_FindWithTag_mEF75D1FF1E55B338A77161FDCB68ED0A2A911DF3(_stringLiteral3A8FEB9EDCDE7BF9B7F65ADAA728AF508785C657, /*hidden argument*/NULL);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_9;
		L_9 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_8, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		__this->set_dayCounterText_12(L_9);
		// }
		return;
	}
}
// System.Boolean World.Horizon::IsNight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Horizon_IsNight_mD0A693ACFD1DF6F1AC2FA53E5EA7A32A07567D39 (Horizon_t396B45C0C2FCCBBEEE57CF298C4899E22AF128FE * __this, const RuntimeMethod* method)
{
	{
		// return isNight;
		bool L_0 = __this->get_isNight_13();
		return L_0;
	}
}
// System.Void World.Horizon::StartHorizonCycle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Horizon_StartHorizonCycle_m4D2F715A474C83ACBC6E0F5C10C454643FAF0FD0 (Horizon_t396B45C0C2FCCBBEEE57CF298C4899E22AF128FE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C76B73FCA85389C123A41FFEF6CD3BEC7944A03);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9975877697FB13E80C9F4829686286F97CF77026);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InvokeRepeating("SunCycle", 0f, 60f);
		MonoBehaviour_InvokeRepeating_mB77F4276826FBA696A150831D190875CB5802C70(__this, _stringLiteral9975877697FB13E80C9F4829686286F97CF77026, (0.0f), (60.0f), /*hidden argument*/NULL);
		// InvokeRepeating("MoonCycle", 30f, 60f);
		MonoBehaviour_InvokeRepeating_mB77F4276826FBA696A150831D190875CB5802C70(__this, _stringLiteral7C76B73FCA85389C123A41FFEF6CD3BEC7944A03, (30.0f), (60.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void World.Horizon::SunCycle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Horizon_SunCycle_m263FE4F9F61F73B3FCBAD40FA23DC564D97B1154 (Horizon_t396B45C0C2FCCBBEEE57CF298C4899E22AF128FE * __this, const RuntimeMethod* method)
{
	{
		// ShowDayCounter();
		Horizon_ShowDayCounter_m73B13496E8F08BC67502C5F9338177A3F4E8EDFA(__this, /*hidden argument*/NULL);
		// stars.Stop();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_0 = __this->get_stars_7();
		ParticleSystem_Stop_m8CBF9268DE7B5A40952B4977462B857B5F5AFB9D(L_0, /*hidden argument*/NULL);
		// sunAnimation.Play();
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_1 = __this->get_sunAnimation_8();
		bool L_2;
		L_2 = Animation_Play_m5588607899B9B866117A1477C696076F161BA3D4(L_1, /*hidden argument*/NULL);
		// isNight = false;
		__this->set_isNight_13((bool)0);
		// }
		return;
	}
}
// System.Void World.Horizon::MoonCycle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Horizon_MoonCycle_mED0C8DFF5638CF23CBDBA76CEA7BA2A9D722D827 (Horizon_t396B45C0C2FCCBBEEE57CF298C4899E22AF128FE * __this, const RuntimeMethod* method)
{
	{
		// stars.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_0 = __this->get_stars_7();
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_0, /*hidden argument*/NULL);
		// moonAnimation.Play();
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_1 = __this->get_moonAnimation_9();
		bool L_2;
		L_2 = Animation_Play_m5588607899B9B866117A1477C696076F161BA3D4(L_1, /*hidden argument*/NULL);
		// isNight = true;
		__this->set_isNight_13((bool)1);
		// }
		return;
	}
}
// System.Void World.Horizon::ShowDayCounter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Horizon_ShowDayCounter_m73B13496E8F08BC67502C5F9338177A3F4E8EDFA (Horizon_t396B45C0C2FCCBBEEE57CF298C4899E22AF128FE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral132749B9CE189115DFF93C882CA5F528014FF41F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral432640E3BCCFBDDB088EC8A3AE94E2C2995F96EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9929B1163D9A450347CE80EC352823B9C7CE072F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// backgroundAnimation.Play("BackgroundCycle");
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_0 = __this->get_backgroundAnimation_11();
		bool L_1;
		L_1 = Animation_Play_m8EDFE80589A27DF1C34CCC0CF81DB5313CE35607(L_0, _stringLiteral132749B9CE189115DFF93C882CA5F528014FF41F, /*hidden argument*/NULL);
		// dayCounterText.text = "Day " + ++dayCounter;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_dayCounterText_12();
		int32_t L_3 = __this->get_dayCounter_14();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
		int32_t L_4 = V_0;
		__this->set_dayCounter_14(L_4);
		String_t* L_5;
		L_5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral432640E3BCCFBDDB088EC8A3AE94E2C2995F96EA, L_5, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_6);
		// dayCounterAnimation.Play("ShowDayCounter");
		Animation_t8C4FD9513E57F59E8737AD03938AAAF9EFF2F0D8 * L_7 = __this->get_dayCounterAnimation_10();
		bool L_8;
		L_8 = Animation_Play_m8EDFE80589A27DF1C34CCC0CF81DB5313CE35607(L_7, _stringLiteral9929B1163D9A450347CE80EC352823B9C7CE072F, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void World.Horizon::RestartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Horizon_RestartGame_mA2A04BD7DFD4F9FFC0A07ADDA2F053325B130EC9 (Horizon_t396B45C0C2FCCBBEEE57CF298C4899E22AF128FE * __this, const RuntimeMethod* method)
{
	{
		// isNight = false;
		__this->set_isNight_13((bool)0);
		// dayCounter = 0;
		__this->set_dayCounter_14(0);
		// StartHorizonCycle();
		Horizon_StartHorizonCycle_m4D2F715A474C83ACBC6E0F5C10C454643FAF0FD0(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void World.Horizon::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Horizon__ctor_mA0A8A0891CCD77A34E552B3671263DB8EE773C97 (Horizon_t396B45C0C2FCCBBEEE57CF298C4899E22AF128FE * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Instruction::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instruction_Start_m7CEE6AB9D735080FC2F2634B21A437E3E218FBE0 (Instruction_t35BE89F86B1FEE917BA37A65E94EFA45FAEE919A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D_m1C3BCA64655E8EDDFB4DFA15A2CD2E809257E620_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB263E39D78895929576F7A78CBB3C8EFBCA2DC08);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instrut = this.gameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		__this->set_instrut_4(L_0);
		// bool mainMenu = GameObject.Find("SceneController").GetComponent<Controllers.SceneController>().mainMenu;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralB263E39D78895929576F7A78CBB3C8EFBCA2DC08, /*hidden argument*/NULL);
		SceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D * L_2;
		L_2 = GameObject_GetComponent_TisSceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D_m1C3BCA64655E8EDDFB4DFA15A2CD2E809257E620(L_1, /*hidden argument*/GameObject_GetComponent_TisSceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D_m1C3BCA64655E8EDDFB4DFA15A2CD2E809257E620_RuntimeMethod_var);
		bool L_3;
		L_3 = SceneController_get_mainMenu_m065BDF66295571B1BEAB022056E701F433BA3264_inline(L_2, /*hidden argument*/NULL);
		// if(mainMenu){
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		// TogglePause();
		Instruction_TogglePause_m00F4CF0C476E42F9301711EECCC4E0CA547997E4(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0029:
	{
		// instrut.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_instrut_4();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Instruction::TogglePause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instruction_TogglePause_m00F4CF0C476E42F9301711EECCC4E0CA547997E4 (Instruction_t35BE89F86B1FEE917BA37A65E94EFA45FAEE919A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Instruction_t35BE89F86B1FEE917BA37A65E94EFA45FAEE919A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!GamePaused)
		bool L_0 = ((Instruction_t35BE89F86B1FEE917BA37A65E94EFA45FAEE919A_StaticFields*)il2cpp_codegen_static_fields_for(Instruction_t35BE89F86B1FEE917BA37A65E94EFA45FAEE919A_il2cpp_TypeInfo_var))->get_GamePaused_5();
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// Pause();
		Instruction_Pause_m64983CCF4B60D46D5706C3D1A22D3D150B27B233(__this, /*hidden argument*/NULL);
		// }
		goto IL_0015;
	}

IL_000f:
	{
		// UnPause();
		Instruction_UnPause_mB807C30658E3EE5ED8056EE762FE1A5D6BD5D61D(__this, /*hidden argument*/NULL);
	}

IL_0015:
	{
		// GamePaused = !GamePaused;
		bool L_1 = ((Instruction_t35BE89F86B1FEE917BA37A65E94EFA45FAEE919A_StaticFields*)il2cpp_codegen_static_fields_for(Instruction_t35BE89F86B1FEE917BA37A65E94EFA45FAEE919A_il2cpp_TypeInfo_var))->get_GamePaused_5();
		((Instruction_t35BE89F86B1FEE917BA37A65E94EFA45FAEE919A_StaticFields*)il2cpp_codegen_static_fields_for(Instruction_t35BE89F86B1FEE917BA37A65E94EFA45FAEE919A_il2cpp_TypeInfo_var))->set_GamePaused_5((bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0));
		// }
		return;
	}
}
// System.Void Instruction::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instruction_Pause_m64983CCF4B60D46D5706C3D1A22D3D150B27B233 (Instruction_t35BE89F86B1FEE917BA37A65E94EFA45FAEE919A * __this, const RuntimeMethod* method)
{
	{
		// Time.timeScale = 0f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
		// instrut.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_instrut_4();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Instruction::UnPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instruction_UnPause_mB807C30658E3EE5ED8056EE762FE1A5D6BD5D61D (Instruction_t35BE89F86B1FEE917BA37A65E94EFA45FAEE919A * __this, const RuntimeMethod* method)
{
	{
		// Time.timeScale = 1f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// instrut.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_instrut_4();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Instruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instruction__ctor_m15E88169B489692BF3B75995B9909CA84BA8EB26 (Instruction_t35BE89F86B1FEE917BA37A65E94EFA45FAEE919A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Instructions::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instructions_Start_mA7CED110453E8989B708AD5277CFE5A8C7B1E68B (Instructions_t0F2023CAC7FCBA43D7E3847F96AE8DEB4ECD0E89 * __this, const RuntimeMethod* method)
{
	{
		// instrut = this.gameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		__this->set_instrut_4(L_0);
		// TogglePause();
		Instructions_TogglePause_mA278DA22703D184F59B12BC66F6A6DA81F5E23FB(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Instructions::TogglePause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instructions_TogglePause_mA278DA22703D184F59B12BC66F6A6DA81F5E23FB (Instructions_t0F2023CAC7FCBA43D7E3847F96AE8DEB4ECD0E89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Instructions_t0F2023CAC7FCBA43D7E3847F96AE8DEB4ECD0E89_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!GamePaused)
		bool L_0 = ((Instructions_t0F2023CAC7FCBA43D7E3847F96AE8DEB4ECD0E89_StaticFields*)il2cpp_codegen_static_fields_for(Instructions_t0F2023CAC7FCBA43D7E3847F96AE8DEB4ECD0E89_il2cpp_TypeInfo_var))->get_GamePaused_5();
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// Pause();
		Instructions_Pause_m47B996D77CFB32C1B8E0602F28B64ED2412E6D04(__this, /*hidden argument*/NULL);
		// }
		goto IL_0015;
	}

IL_000f:
	{
		// UnPause();
		Instructions_UnPause_m7CCA0DDFC961092E4B2B027D2B7C95D567328665(__this, /*hidden argument*/NULL);
	}

IL_0015:
	{
		// GamePaused = !GamePaused;
		bool L_1 = ((Instructions_t0F2023CAC7FCBA43D7E3847F96AE8DEB4ECD0E89_StaticFields*)il2cpp_codegen_static_fields_for(Instructions_t0F2023CAC7FCBA43D7E3847F96AE8DEB4ECD0E89_il2cpp_TypeInfo_var))->get_GamePaused_5();
		((Instructions_t0F2023CAC7FCBA43D7E3847F96AE8DEB4ECD0E89_StaticFields*)il2cpp_codegen_static_fields_for(Instructions_t0F2023CAC7FCBA43D7E3847F96AE8DEB4ECD0E89_il2cpp_TypeInfo_var))->set_GamePaused_5((bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0));
		// }
		return;
	}
}
// System.Void Instructions::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instructions_Pause_m47B996D77CFB32C1B8E0602F28B64ED2412E6D04 (Instructions_t0F2023CAC7FCBA43D7E3847F96AE8DEB4ECD0E89 * __this, const RuntimeMethod* method)
{
	{
		// Time.timeScale = 0f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
		// instrut.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_instrut_4();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Instructions::UnPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instructions_UnPause_m7CCA0DDFC961092E4B2B027D2B7C95D567328665 (Instructions_t0F2023CAC7FCBA43D7E3847F96AE8DEB4ECD0E89 * __this, const RuntimeMethod* method)
{
	{
		// Time.timeScale = 1f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// instrut.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_instrut_4();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Instructions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Instructions__ctor_mE3EC0BAD148D8BE3F805655E95645E3CD65FFF97 (Instructions_t0F2023CAC7FCBA43D7E3847F96AE8DEB4ECD0E89 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UI.MainMenu::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_Start_m1E97D62628275A76466D6DA3E13D5252491EC583 (MainMenu_tDC081FD41A81E74FD3EB756F8006FC7687EA332A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D_m1C3BCA64655E8EDDFB4DFA15A2CD2E809257E620_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sceneController = sceneControllerGameObject.GetComponent<SceneController>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_sceneControllerGameObject_4();
		SceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D * L_1;
		L_1 = GameObject_GetComponent_TisSceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D_m1C3BCA64655E8EDDFB4DFA15A2CD2E809257E620(L_0, /*hidden argument*/GameObject_GetComponent_TisSceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D_m1C3BCA64655E8EDDFB4DFA15A2CD2E809257E620_RuntimeMethod_var);
		__this->set_sceneController_5(L_1);
		// }
		return;
	}
}
// System.Void UI.MainMenu::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_Play_m3ACC82006BEB6895E2310B9B0932B6F73FB48BB6 (MainMenu_tDC081FD41A81E74FD3EB756F8006FC7687EA332A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral884820433266E121D9AF505AF4DE98B3BA081DC8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sceneController.SwitchScene("MainScene");
		SceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D * L_0 = __this->get_sceneController_5();
		SceneController_SwitchScene_m250B9C8FBE1FEB3B606A0ADB91350DEE18C799A7(L_0, _stringLiteral884820433266E121D9AF505AF4DE98B3BA081DC8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UI.MainMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu__ctor_m5A991FFC5308A3F01C886DA594DD0B3347E8632D (MainMenu_tDC081FD41A81E74FD3EB756F8006FC7687EA332A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Controllers.SceneController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneController_Start_mB036CA9990FD4233D7BB3663626F989377902AE2 (SceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE633B4F1DE3013202D525BC0763C4003D4697E65);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _mainMenu = false;
		((SceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D_StaticFields*)il2cpp_codegen_static_fields_for(SceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D_il2cpp_TypeInfo_var))->set__mainMenu_7((bool)0);
		// transitionPanelAnimator = GameObject.Find("TransitionPanel2").GetComponent<Animator>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralE633B4F1DE3013202D525BC0763C4003D4697E65, /*hidden argument*/NULL);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1;
		L_1 = GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36(L_0, /*hidden argument*/GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		__this->set_transitionPanelAnimator_5(L_1);
		// mainCameraAnimator = mainCameraGameObject.GetComponent<Animator>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_mainCameraGameObject_4();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_3;
		L_3 = GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36(L_2, /*hidden argument*/GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		__this->set_mainCameraAnimator_6(L_3);
		// }
		return;
	}
}
// System.Void Controllers.SceneController::SwitchScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneController_SwitchScene_m250B9C8FBE1FEB3B606A0ADB91350DEE18C799A7 (SceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D * __this, String_t* ___sceneName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// ResetGameState();
		SceneController_ResetGameState_mF8DC728355C963758CEA6D059FAFA0C1DE50DE0B(/*hidden argument*/NULL);
		// if (SceneManager.GetActiveScene().name == "MainMenu")
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// _mainMenu = true;
		((SceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D_StaticFields*)il2cpp_codegen_static_fields_for(SceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D_il2cpp_TypeInfo_var))->set__mainMenu_7((bool)1);
		// }
		goto IL_002c;
	}

IL_0026:
	{
		// _mainMenu = false;
		((SceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D_StaticFields*)il2cpp_codegen_static_fields_for(SceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D_il2cpp_TypeInfo_var))->set__mainMenu_7((bool)0);
	}

IL_002c:
	{
		// StartCoroutine(LoadScene(sceneName));
		String_t* L_3 = ___sceneName0;
		RuntimeObject* L_4;
		L_4 = SceneController_LoadScene_mF65F254C0557FA8AB2F5BE0FB2E2624E084D141F(__this, L_3, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_5;
		L_5 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Controllers.SceneController::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SceneController_LoadScene_mF65F254C0557FA8AB2F5BE0FB2E2624E084D141F (SceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D * __this, String_t* ___sceneName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadSceneU3Ed__6_tF321E46183EB6FBD589D29E33DFF2E8D939D324D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoadSceneU3Ed__6_tF321E46183EB6FBD589D29E33DFF2E8D939D324D * L_0 = (U3CLoadSceneU3Ed__6_tF321E46183EB6FBD589D29E33DFF2E8D939D324D *)il2cpp_codegen_object_new(U3CLoadSceneU3Ed__6_tF321E46183EB6FBD589D29E33DFF2E8D939D324D_il2cpp_TypeInfo_var);
		U3CLoadSceneU3Ed__6__ctor_m2CC4C250BDB2BF40E7310F50A436344533C647CE(L_0, 0, /*hidden argument*/NULL);
		U3CLoadSceneU3Ed__6_tF321E46183EB6FBD589D29E33DFF2E8D939D324D * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		U3CLoadSceneU3Ed__6_tF321E46183EB6FBD589D29E33DFF2E8D939D324D * L_2 = L_1;
		String_t* L_3 = ___sceneName0;
		L_2->set_sceneName_3(L_3);
		return L_2;
	}
}
// System.Void Controllers.SceneController::ResetGameState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneController_ResetGameState_mF8DC728355C963758CEA6D059FAFA0C1DE50DE0B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Time.timeScale = 1f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// GameController.GamePaused = false;
		((GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_StaticFields*)il2cpp_codegen_static_fields_for(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_il2cpp_TypeInfo_var))->set_GamePaused_4((bool)0);
		// GameController.DoubleTempo = false;
		((GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_StaticFields*)il2cpp_codegen_static_fields_for(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_il2cpp_TypeInfo_var))->set_DoubleTempo_5((bool)0);
		// }
		return;
	}
}
// System.Boolean Controllers.SceneController::get_mainMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneController_get_mainMenu_m065BDF66295571B1BEAB022056E701F433BA3264 (SceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _mainMenu; }
		bool L_0 = ((SceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D_StaticFields*)il2cpp_codegen_static_fields_for(SceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D_il2cpp_TypeInfo_var))->get__mainMenu_7();
		return L_0;
	}
}
// System.Void Controllers.SceneController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneController__ctor_m1C8714A5C533591A406C35216FADF3A9FF9AB802 (SceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SceneLoader::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_Start_m0C1135363F132F29168A105548C5C06AF2B7D682 (SceneLoader_t3266812523B184D5AEDF27CA310452129C676B0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("MainMenu");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SceneLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader__ctor_m8708D080848349110CEA260D8779F30BD5823912 (SceneLoader_t3266812523B184D5AEDF27CA310452129C676B0D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ScoreManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_Start_mD3AD35C8B826532687C5600F2BF465093D6D1F91 (ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreTypes_t89BF1731E38AB90545999A938475D8F291DB4A99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// PlayerPrefs.SetInt(ScoreTypes.PlayerHits.ToString(), 0);
		V_0 = 1;
		RuntimeObject * L_0 = Box(ScoreTypes_t89BF1731E38AB90545999A938475D8F291DB4A99_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		V_0 = *(int32_t*)UnBox(L_0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(L_1, 0, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt(ScoreTypes.PlayerMisses.ToString(), 0);
		V_0 = 2;
		RuntimeObject * L_2 = Box(ScoreTypes_t89BF1731E38AB90545999A938475D8F291DB4A99_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		V_0 = *(int32_t*)UnBox(L_2);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(L_3, 0, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt(ScoreTypes.PlayerScore.ToString(), 0);
		V_0 = 0;
		RuntimeObject * L_4 = Box(ScoreTypes_t89BF1731E38AB90545999A938475D8F291DB4A99_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		V_0 = *(int32_t*)UnBox(L_4);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(L_5, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ScoreManager::UpdateScore(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_UpdateScore_m156C45E9BC479AC26BF4055E7CF7673D74089DC2 (ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * __this, int32_t ___amount0, bool ___addToScore1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreTypes_t89BF1731E38AB90545999A938475D8F291DB4A99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// if(addToScore == true)
		bool L_0 = ___addToScore1;
		if (!L_0)
		{
			goto IL_0075;
		}
	}
	{
		// score = PlayerPrefs.GetInt(ScoreTypes.PlayerScore.ToString());
		V_1 = 0;
		RuntimeObject * L_1 = Box(ScoreTypes_t89BF1731E38AB90545999A938475D8F291DB4A99_il2cpp_TypeInfo_var, (&V_1));
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		V_1 = *(int32_t*)UnBox(L_1);
		int32_t L_3;
		L_3 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(L_2, /*hidden argument*/NULL);
		__this->set_score_5(L_3);
		// score += amount;
		int32_t L_4 = __this->get_score_5();
		int32_t L_5 = ___amount0;
		__this->set_score_5(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_5)));
		// PlayerPrefs.SetInt(ScoreTypes.PlayerScore.ToString(), score);
		V_1 = 0;
		RuntimeObject * L_6 = Box(ScoreTypes_t89BF1731E38AB90545999A938475D8F291DB4A99_il2cpp_TypeInfo_var, (&V_1));
		String_t* L_7;
		L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		V_1 = *(int32_t*)UnBox(L_6);
		int32_t L_8 = __this->get_score_5();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(L_7, L_8, /*hidden argument*/NULL);
		// int hits = PlayerPrefs.GetInt(ScoreTypes.PlayerHits.ToString());
		V_1 = 1;
		RuntimeObject * L_9 = Box(ScoreTypes_t89BF1731E38AB90545999A938475D8F291DB4A99_il2cpp_TypeInfo_var, (&V_1));
		String_t* L_10;
		L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
		V_1 = *(int32_t*)UnBox(L_9);
		int32_t L_11;
		L_11 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		// hits += 1;
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		// PlayerPrefs.SetInt(ScoreTypes.PlayerHits.ToString(), hits);
		V_1 = 1;
		RuntimeObject * L_13 = Box(ScoreTypes_t89BF1731E38AB90545999A938475D8F291DB4A99_il2cpp_TypeInfo_var, (&V_1));
		String_t* L_14;
		L_14 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
		V_1 = *(int32_t*)UnBox(L_13);
		int32_t L_15 = V_0;
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(L_14, L_15, /*hidden argument*/NULL);
		// }
		goto IL_00a3;
	}

IL_0075:
	{
		// int misses = PlayerPrefs.GetInt(ScoreTypes.PlayerMisses.ToString());
		V_1 = 2;
		RuntimeObject * L_16 = Box(ScoreTypes_t89BF1731E38AB90545999A938475D8F291DB4A99_il2cpp_TypeInfo_var, (&V_1));
		String_t* L_17;
		L_17 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_16);
		V_1 = *(int32_t*)UnBox(L_16);
		int32_t L_18;
		L_18 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(L_17, /*hidden argument*/NULL);
		V_2 = L_18;
		// misses += 1;
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
		// PlayerPrefs.SetInt(ScoreTypes.PlayerMisses.ToString(), misses);
		V_1 = 2;
		RuntimeObject * L_20 = Box(ScoreTypes_t89BF1731E38AB90545999A938475D8F291DB4A99_il2cpp_TypeInfo_var, (&V_1));
		String_t* L_21;
		L_21 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		V_1 = *(int32_t*)UnBox(L_20);
		int32_t L_22 = V_2;
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(L_21, L_22, /*hidden argument*/NULL);
	}

IL_00a3:
	{
		// scoreLabel.text = "Score: " + score;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_23 = __this->get_scoreLabel_4();
		int32_t* L_24 = __this->get_address_of_score_5();
		String_t* L_25;
		L_25 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_24, /*hidden argument*/NULL);
		String_t* L_26;
		L_26 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6, L_25, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_23, L_26);
		// }
		return;
	}
}
// System.Void ScoreManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager__ctor_m638A240D34643E8AB9D17553622C1C9354348354 (ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void StatsController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatsController_Start_m999167CBAC7BEE4B4D3C54056F6250CFF97F8A0D (StatsController_tBB477720ABA192D16DF50C483D289E3E5A889095 * __this, const RuntimeMethod* method)
{
	{
		// StartStatsDecrease();
		StatsController_StartStatsDecrease_m29026AADCF1D7FB5B409EE24D6F88C69E701F5DC(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StatsController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatsController_Update_mB773C3D0197097BD0A3702860CFAF8455F67E392 (StatsController_tBB477720ABA192D16DF50C483D289E3E5A889095 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m8E5F0FC180955E92CB7AC73D8C05DCE3B586A8E9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetMultiplier();
		StatsController_SetMultiplier_m6EE0423BCAB0B52E6312CF98FD9A70D02DED7CA7(__this, /*hidden argument*/NULL);
		// if(stats[Stats.Health] == 0){
		Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D * L_0 = __this->get_stats_4();
		int32_t L_1;
		L_1 = Dictionary_2_get_Item_m8E5F0FC180955E92CB7AC73D8C05DCE3B586A8E9(L_0, 0, /*hidden argument*/Dictionary_2_get_Item_m8E5F0FC180955E92CB7AC73D8C05DCE3B586A8E9_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		// Time.timeScale = 0f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
		// isAlive = false;
		__this->set_isAlive_5((bool)0);
	}

IL_0025:
	{
		// if(!isAlive){
		bool L_2 = __this->get_isAlive_5();
		if (L_2)
		{
			goto IL_0039;
		}
	}
	{
		// gameOver.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_gameOver_7();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)1, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void StatsController::ChangeStats(StatsController/Stats,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatsController_ChangeStats_mC249813A1FF6B782C2489B11D9D995C9C53B1908 (StatsController_tBB477720ABA192D16DF50C483D289E3E5A889095 * __this, int32_t ___stat0, int32_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m8E5F0FC180955E92CB7AC73D8C05DCE3B586A8E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mF9210916F0878172593D361C0D57EB02043E606D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// stats[stat] += value;
		Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D * L_0 = __this->get_stats_4();
		V_0 = L_0;
		int32_t L_1 = ___stat0;
		V_1 = L_1;
		Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D * L_2 = V_0;
		int32_t L_3 = V_1;
		Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D * L_4 = V_0;
		int32_t L_5 = V_1;
		int32_t L_6;
		L_6 = Dictionary_2_get_Item_m8E5F0FC180955E92CB7AC73D8C05DCE3B586A8E9(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m8E5F0FC180955E92CB7AC73D8C05DCE3B586A8E9_RuntimeMethod_var);
		int32_t L_7 = ___value1;
		Dictionary_2_set_Item_mF9210916F0878172593D361C0D57EB02043E606D(L_2, L_3, ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)L_7)), /*hidden argument*/Dictionary_2_set_Item_mF9210916F0878172593D361C0D57EB02043E606D_RuntimeMethod_var);
		// stats[stat] = Mathf.Clamp(stats[stat], 0, 100);
		Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D * L_8 = __this->get_stats_4();
		int32_t L_9 = ___stat0;
		Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D * L_10 = __this->get_stats_4();
		int32_t L_11 = ___stat0;
		int32_t L_12;
		L_12 = Dictionary_2_get_Item_m8E5F0FC180955E92CB7AC73D8C05DCE3B586A8E9(L_10, L_11, /*hidden argument*/Dictionary_2_get_Item_m8E5F0FC180955E92CB7AC73D8C05DCE3B586A8E9_RuntimeMethod_var);
		int32_t L_13;
		L_13 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(L_12, 0, ((int32_t)100), /*hidden argument*/NULL);
		Dictionary_2_set_Item_mF9210916F0878172593D361C0D57EB02043E606D(L_8, L_9, L_13, /*hidden argument*/Dictionary_2_set_Item_mF9210916F0878172593D361C0D57EB02043E606D_RuntimeMethod_var);
		// UpdateStatBar(stat);
		int32_t L_14 = ___stat0;
		StatsController_UpdateStatBar_mD097B0E88FCF76215C227F26531FF202660F4DD5(__this, L_14, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StatsController::UpdateStatBar(StatsController/Stats)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatsController_UpdateStatBar_mD097B0E88FCF76215C227F26531FF202660F4DD5 (StatsController_tBB477720ABA192D16DF50C483D289E3E5A889095 * __this, int32_t ___stat0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m8E5F0FC180955E92CB7AC73D8C05DCE3B586A8E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mCF2C6D0E8D0B7E12C53CF51A613D9A6545FC05F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stats_t212226081718AC4705DA7DC6B3C211CDF092B3CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44D700698DE33F580439BBCA0F2168D827EBDCAA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject.FindWithTag(stat + "Bar").GetComponent<Slider>().value = stats[stat];
		RuntimeObject * L_0 = Box(Stats_t212226081718AC4705DA7DC6B3C211CDF092B3CC_il2cpp_TypeInfo_var, (&___stat0));
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		___stat0 = *(int32_t*)UnBox(L_0);
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_1, _stringLiteral44D700698DE33F580439BBCA0F2168D827EBDCAA, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = GameObject_FindWithTag_mEF75D1FF1E55B338A77161FDCB68ED0A2A911DF3(L_2, /*hidden argument*/NULL);
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_4;
		L_4 = GameObject_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mCF2C6D0E8D0B7E12C53CF51A613D9A6545FC05F9(L_3, /*hidden argument*/GameObject_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mCF2C6D0E8D0B7E12C53CF51A613D9A6545FC05F9_RuntimeMethod_var);
		Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D * L_5 = __this->get_stats_4();
		int32_t L_6 = ___stat0;
		int32_t L_7;
		L_7 = Dictionary_2_get_Item_m8E5F0FC180955E92CB7AC73D8C05DCE3B586A8E9(L_5, L_6, /*hidden argument*/Dictionary_2_get_Item_m8E5F0FC180955E92CB7AC73D8C05DCE3B586A8E9_RuntimeMethod_var);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_4, ((float)((float)L_7)));
		// }
		return;
	}
}
// System.Void StatsController::SetMultiplier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatsController_SetMultiplier_m6EE0423BCAB0B52E6312CF98FD9A70D02DED7CA7 (StatsController_tBB477720ABA192D16DF50C483D289E3E5A889095 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m12730F905521D6C9F926E7BFEBECD3B0D33E5D25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m8E5F0FC180955E92CB7AC73D8C05DCE3B586A8E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m9518B8E529196767B4E55D75073528EB4242178D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// var average = (stats.Values.Sum() - stats[Stats.Health]) / (stats.Count - 1f);
		Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D * L_0 = __this->get_stats_4();
		ValueCollection_t8ABF7C4906E3BC2AB6C7DD4E6BAF158F0B1ECD02 * L_1;
		L_1 = Dictionary_2_get_Values_m9518B8E529196767B4E55D75073528EB4242178D(L_0, /*hidden argument*/Dictionary_2_get_Values_m9518B8E529196767B4E55D75073528EB4242178D_RuntimeMethod_var);
		int32_t L_2;
		L_2 = Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5(L_1, /*hidden argument*/NULL);
		Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D * L_3 = __this->get_stats_4();
		int32_t L_4;
		L_4 = Dictionary_2_get_Item_m8E5F0FC180955E92CB7AC73D8C05DCE3B586A8E9(L_3, 0, /*hidden argument*/Dictionary_2_get_Item_m8E5F0FC180955E92CB7AC73D8C05DCE3B586A8E9_RuntimeMethod_var);
		Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D * L_5 = __this->get_stats_4();
		int32_t L_6;
		L_6 = Dictionary_2_get_Count_m12730F905521D6C9F926E7BFEBECD3B0D33E5D25(L_5, /*hidden argument*/Dictionary_2_get_Count_m12730F905521D6C9F926E7BFEBECD3B0D33E5D25_RuntimeMethod_var);
		V_0 = ((float)((float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_4))))/(float)((float)il2cpp_codegen_subtract((float)((float)((float)L_6)), (float)(1.0f)))));
		// multiplier = Math.Max(0.1f, average / 100f);
		float L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		float L_8;
		L_8 = Math_Max_mEB87839DA28310AE4CB81A94D551874CFC2B1247((0.100000001f), ((float)((float)L_7/(float)(100.0f))), /*hidden argument*/NULL);
		__this->set_multiplier_6(L_8);
		// }
		return;
	}
}
// System.Void StatsController::StartStatsDecrease()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatsController_StartStatsDecrease_m29026AADCF1D7FB5B409EE24D6F88C69E701F5DC (StatsController_tBB477720ABA192D16DF50C483D289E3E5A889095 * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(DecreaseStat(Stats.Health, 4f));
		RuntimeObject* L_0;
		L_0 = StatsController_DecreaseStat_mA24C4C6B67194F975E609B16831E2FAA40A5F137(__this, 0, (4.0f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// StartCoroutine(DecreaseStat(Stats.Energy, 1f));
		RuntimeObject* L_2;
		L_2 = StatsController_DecreaseStat_mA24C4C6B67194F975E609B16831E2FAA40A5F137(__this, 1, (1.0f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_3;
		L_3 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_2, /*hidden argument*/NULL);
		// StartCoroutine(DecreaseStat(Stats.Hunger, 0.66f));
		RuntimeObject* L_4;
		L_4 = StatsController_DecreaseStat_mA24C4C6B67194F975E609B16831E2FAA40A5F137(__this, 2, (0.660000026f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_5;
		L_5 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_4, /*hidden argument*/NULL);
		// StartCoroutine(DecreaseStat(Stats.Thirst, 0.5f));
		RuntimeObject* L_6;
		L_6 = StatsController_DecreaseStat_mA24C4C6B67194F975E609B16831E2FAA40A5F137(__this, 3, (0.5f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_7;
		L_7 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_6, /*hidden argument*/NULL);
		// StartCoroutine(DecreaseStat(Stats.Amusement, 0.4f));
		RuntimeObject* L_8;
		L_8 = StatsController_DecreaseStat_mA24C4C6B67194F975E609B16831E2FAA40A5F137(__this, 4, (0.400000006f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_9;
		L_9 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator StatsController::DecreaseStat(StatsController/Stats,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StatsController_DecreaseStat_mA24C4C6B67194F975E609B16831E2FAA40A5F137 (StatsController_tBB477720ABA192D16DF50C483D289E3E5A889095 * __this, int32_t ___stat0, float ___repeatRate1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDecreaseStatU3Ed__11_t4917F8E64D46140E0510AAC61E692EA94C1E3BF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDecreaseStatU3Ed__11_t4917F8E64D46140E0510AAC61E692EA94C1E3BF2 * L_0 = (U3CDecreaseStatU3Ed__11_t4917F8E64D46140E0510AAC61E692EA94C1E3BF2 *)il2cpp_codegen_object_new(U3CDecreaseStatU3Ed__11_t4917F8E64D46140E0510AAC61E692EA94C1E3BF2_il2cpp_TypeInfo_var);
		U3CDecreaseStatU3Ed__11__ctor_m385C8CA7BDEFC82B20223E2B9DE63DF21BCCA2F8(L_0, 0, /*hidden argument*/NULL);
		U3CDecreaseStatU3Ed__11_t4917F8E64D46140E0510AAC61E692EA94C1E3BF2 * L_1 = L_0;
		L_1->set_U3CU3E4__this_4(__this);
		U3CDecreaseStatU3Ed__11_t4917F8E64D46140E0510AAC61E692EA94C1E3BF2 * L_2 = L_1;
		int32_t L_3 = ___stat0;
		L_2->set_stat_2(L_3);
		U3CDecreaseStatU3Ed__11_t4917F8E64D46140E0510AAC61E692EA94C1E3BF2 * L_4 = L_2;
		float L_5 = ___repeatRate1;
		L_4->set_repeatRate_3(L_5);
		return L_4;
	}
}
// System.Void StatsController::restartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatsController_restartGame_m2C8D510E2E2AA38FBD1A3D3D1B3079A94A12F175 (StatsController_tBB477720ABA192D16DF50C483D289E3E5A889095 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mF9210916F0878172593D361C0D57EB02043E606D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D_m1C3BCA64655E8EDDFB4DFA15A2CD2E809257E620_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB263E39D78895929576F7A78CBB3C8EFBCA2DC08);
		s_Il2CppMethodInitialized = true;
	}
	{
		// stats[Stats.Health] = 100;
		Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D * L_0 = __this->get_stats_4();
		Dictionary_2_set_Item_mF9210916F0878172593D361C0D57EB02043E606D(L_0, 0, ((int32_t)100), /*hidden argument*/Dictionary_2_set_Item_mF9210916F0878172593D361C0D57EB02043E606D_RuntimeMethod_var);
		// stats[Stats.Energy] = 100;
		Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D * L_1 = __this->get_stats_4();
		Dictionary_2_set_Item_mF9210916F0878172593D361C0D57EB02043E606D(L_1, 1, ((int32_t)100), /*hidden argument*/Dictionary_2_set_Item_mF9210916F0878172593D361C0D57EB02043E606D_RuntimeMethod_var);
		// stats[Stats.Hunger] = 100;
		Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D * L_2 = __this->get_stats_4();
		Dictionary_2_set_Item_mF9210916F0878172593D361C0D57EB02043E606D(L_2, 2, ((int32_t)100), /*hidden argument*/Dictionary_2_set_Item_mF9210916F0878172593D361C0D57EB02043E606D_RuntimeMethod_var);
		// stats[Stats.Thirst] = 100;
		Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D * L_3 = __this->get_stats_4();
		Dictionary_2_set_Item_mF9210916F0878172593D361C0D57EB02043E606D(L_3, 3, ((int32_t)100), /*hidden argument*/Dictionary_2_set_Item_mF9210916F0878172593D361C0D57EB02043E606D_RuntimeMethod_var);
		// stats[Stats.Amusement] = 100;
		Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D * L_4 = __this->get_stats_4();
		Dictionary_2_set_Item_mF9210916F0878172593D361C0D57EB02043E606D(L_4, 4, ((int32_t)100), /*hidden argument*/Dictionary_2_set_Item_mF9210916F0878172593D361C0D57EB02043E606D_RuntimeMethod_var);
		// gameOver.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_gameOver_7();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
		// isAlive = true;
		__this->set_isAlive_5((bool)1);
		// GameObject.Find("SceneController").GetComponent<Controllers.SceneController>().SwitchScene("MainMenu");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralB263E39D78895929576F7A78CBB3C8EFBCA2DC08, /*hidden argument*/NULL);
		SceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D * L_7;
		L_7 = GameObject_GetComponent_TisSceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D_m1C3BCA64655E8EDDFB4DFA15A2CD2E809257E620(L_6, /*hidden argument*/GameObject_GetComponent_TisSceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D_m1C3BCA64655E8EDDFB4DFA15A2CD2E809257E620_RuntimeMethod_var);
		SceneController_SwitchScene_m250B9C8FBE1FEB3B606A0ADB91350DEE18C799A7(L_7, _stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StatsController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatsController__ctor_mE534B1B6838115ABD0590745D17174F8BD656DA5 (StatsController_tBB477720ABA192D16DF50C483D289E3E5A889095 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m35A25765687BBD2CA19755DA5B323380186EF504_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3D32778087167D107BBEBD82CC70FF1E40E5B621_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Dictionary<Stats, int> stats = new Dictionary<Stats, int>
		// {
		//     {Stats.Health, 100},
		//     {Stats.Energy, 100},
		//     {Stats.Hunger, 100},
		//     {Stats.Thirst, 100},
		//     {Stats.Amusement, 100}
		// };
		Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D * L_0 = (Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D *)il2cpp_codegen_object_new(Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3D32778087167D107BBEBD82CC70FF1E40E5B621(L_0, /*hidden argument*/Dictionary_2__ctor_m3D32778087167D107BBEBD82CC70FF1E40E5B621_RuntimeMethod_var);
		Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D * L_1 = L_0;
		Dictionary_2_Add_m35A25765687BBD2CA19755DA5B323380186EF504(L_1, 0, ((int32_t)100), /*hidden argument*/Dictionary_2_Add_m35A25765687BBD2CA19755DA5B323380186EF504_RuntimeMethod_var);
		Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D * L_2 = L_1;
		Dictionary_2_Add_m35A25765687BBD2CA19755DA5B323380186EF504(L_2, 1, ((int32_t)100), /*hidden argument*/Dictionary_2_Add_m35A25765687BBD2CA19755DA5B323380186EF504_RuntimeMethod_var);
		Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D * L_3 = L_2;
		Dictionary_2_Add_m35A25765687BBD2CA19755DA5B323380186EF504(L_3, 2, ((int32_t)100), /*hidden argument*/Dictionary_2_Add_m35A25765687BBD2CA19755DA5B323380186EF504_RuntimeMethod_var);
		Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D * L_4 = L_3;
		Dictionary_2_Add_m35A25765687BBD2CA19755DA5B323380186EF504(L_4, 3, ((int32_t)100), /*hidden argument*/Dictionary_2_Add_m35A25765687BBD2CA19755DA5B323380186EF504_RuntimeMethod_var);
		Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D * L_5 = L_4;
		Dictionary_2_Add_m35A25765687BBD2CA19755DA5B323380186EF504(L_5, 4, ((int32_t)100), /*hidden argument*/Dictionary_2_Add_m35A25765687BBD2CA19755DA5B323380186EF504_RuntimeMethod_var);
		__this->set_stats_4(L_5);
		// private bool isAlive = true;
		__this->set_isAlive_5((bool)1);
		// private float multiplier = 1f;
		__this->set_multiplier_6((1.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void StopTime::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StopTime_Start_m51CBFB41FB43A5DB8AF83A04B053FB9EE947ECAB (StopTime_tC6E2F2D2D28372C933A7F0B5105DB4FB3F295786 * __this, const RuntimeMethod* method)
{
	{
		// Time.timeScale = 0f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StopTime::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StopTime__ctor_m8CAFF11B45CF7A90F27CCE4943C82BE3F0A90591 (StopTime_tC6E2F2D2D28372C933A7F0B5105DB4FB3F295786 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SummaryManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SummaryManager_Start_mCCF413453E1957691B9030D0852690B50655FB6F (SummaryManager_t3E936A619358AB897319D2F29433407F509E4263 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreTypes_t89BF1731E38AB90545999A938475D8F291DB4A99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral285E3C03E340455D89B211A0A47AE592F4C2B105);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D574506275F634BC8700ED6B88553583D07C3F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A12E64C285A43EE258D15AE96138179CA5633F9);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// hitTxt.text = "Total Hits: " + PlayerPrefs.GetInt(ScoreTypes.PlayerHits.ToString());
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_hitTxt_4();
		V_0 = 1;
		RuntimeObject * L_1 = Box(ScoreTypes_t89BF1731E38AB90545999A938475D8F291DB4A99_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		V_0 = *(int32_t*)UnBox(L_1);
		int32_t L_3;
		L_3 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral285E3C03E340455D89B211A0A47AE592F4C2B105, L_4, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_5);
		// missTxt.text = "Total Misses: " + PlayerPrefs.GetInt(ScoreTypes.PlayerMisses.ToString());
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_6 = __this->get_missTxt_5();
		V_0 = 2;
		RuntimeObject * L_7 = Box(ScoreTypes_t89BF1731E38AB90545999A938475D8F291DB4A99_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_8;
		L_8 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		V_0 = *(int32_t*)UnBox(L_7);
		int32_t L_9;
		L_9 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		String_t* L_10;
		L_10 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_11;
		L_11 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral3D574506275F634BC8700ED6B88553583D07C3F9, L_10, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_11);
		// scoreTxt.text = "Total Score: " + PlayerPrefs.GetInt(ScoreTypes.PlayerScore.ToString());
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_12 = __this->get_scoreTxt_6();
		V_0 = 0;
		RuntimeObject * L_13 = Box(ScoreTypes_t89BF1731E38AB90545999A938475D8F291DB4A99_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_14;
		L_14 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
		V_0 = *(int32_t*)UnBox(L_13);
		int32_t L_15;
		L_15 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(L_14, /*hidden argument*/NULL);
		V_1 = L_15;
		String_t* L_16;
		L_16 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_17;
		L_17 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral5A12E64C285A43EE258D15AE96138179CA5633F9, L_16, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_17);
		// }
		return;
	}
}
// System.Void SummaryManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SummaryManager__ctor_m7EC296E07B8EAB7E36844DDA42F6F4B15AB99A3A (SummaryManager_t3E936A619358AB897319D2F29433407F509E4263 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TimeManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeManager_Start_m266A4C8445E0E6B1356A27AFF828649C364A62D3 (TimeManager_t7C9EC9E1F31A3BAAE33B119C0B91347D37ABAF82 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void TimeManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeManager_Update_m2FE11D93837B4183FDA835BBBACACE91FEFC9B3A (TimeManager_t7C9EC9E1F31A3BAAE33B119C0B91347D37ABAF82 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral299E01A3C227A338CCCF7D17E88F26B036E2B8EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// maxTime -= Time.deltaTime;
		float L_0 = __this->get_maxTime_6();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_maxTime_6(((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)));
		// int seconds = Mathf.RoundToInt(maxTime % 60f);
		float L_2 = __this->get_maxTime_6();
		int32_t L_3;
		L_3 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD((fmodf(L_2, (60.0f))), /*hidden argument*/NULL);
		V_0 = L_3;
		// if (seconds >= 0)
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		// timeLabel.GetComponent<Text>().text = "Time: " + seconds.ToString("00");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_timeLabel_4();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_6;
		L_6 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_5, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		String_t* L_7;
		L_7 = Int32_ToString_m5398ED0B6625B75CAF70C63B3CF2CE47D3C1B184((int32_t*)(&V_0), _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73, /*hidden argument*/NULL);
		String_t* L_8;
		L_8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral299E01A3C227A338CCCF7D17E88F26B036E2B8EC, L_7, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_8);
		// }
		return;
	}

IL_004f:
	{
		// if (gameOver == false)
		bool L_9 = __this->get_gameOver_7();
		if (L_9)
		{
			goto IL_006b;
		}
	}
	{
		// gameOver = true;
		__this->set_gameOver_7((bool)1);
		// StartCoroutine(endGame());
		RuntimeObject* L_10;
		L_10 = TimeManager_endGame_m68F1B5976A700B9AF23B39E2F11892E61524F732(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_11;
		L_11 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_10, /*hidden argument*/NULL);
	}

IL_006b:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator TimeManager::endGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TimeManager_endGame_m68F1B5976A700B9AF23B39E2F11892E61524F732 (TimeManager_t7C9EC9E1F31A3BAAE33B119C0B91347D37ABAF82 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CendGameU3Ed__6_t05CCEFCBCC960836A17AEB1322F2E62BFEE00D2E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CendGameU3Ed__6_t05CCEFCBCC960836A17AEB1322F2E62BFEE00D2E * L_0 = (U3CendGameU3Ed__6_t05CCEFCBCC960836A17AEB1322F2E62BFEE00D2E *)il2cpp_codegen_object_new(U3CendGameU3Ed__6_t05CCEFCBCC960836A17AEB1322F2E62BFEE00D2E_il2cpp_TypeInfo_var);
		U3CendGameU3Ed__6__ctor_m4F49D65B27DDD5D7C659F75E0007EF5116C8F08E(L_0, 0, /*hidden argument*/NULL);
		U3CendGameU3Ed__6_t05CCEFCBCC960836A17AEB1322F2E62BFEE00D2E * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void TimeManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeManager__ctor_m29682988877F236DB723B6DA48DA89855B9934A7 (TimeManager_t7C9EC9E1F31A3BAAE33B119C0B91347D37ABAF82 * __this, const RuntimeMethod* method)
{
	{
		// float maxTime = 20;
		__this->set_maxTime_6((20.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TrafficLight::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficLight_Start_m4FD84738A302301C102E99D70DAA5683F1AFA3CA (TrafficLight_tD55F68E16E18C0A5F32B506715F5BE0989084ABD * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(Cycle());
		RuntimeObject* L_0;
		L_0 = TrafficLight_Cycle_mC7EE81D3CEB990F6AC6AD49EC038199B7B44B4E9(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TrafficLight::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficLight_Update_mF44A2AAE3DB764E971E6121A5C9433C0C96E1BC1 (TrafficLight_tD55F68E16E18C0A5F32B506715F5BE0989084ABD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown("space")){
		bool L_0;
		L_0 = Input_GetKeyDown_m9D556E728119BEB64AA624EBE82931367B6573A5(_stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		// lightSwitch = !lightSwitch;
		bool L_1 = __this->get_lightSwitch_6();
		__this->set_lightSwitch_6((bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0));
		// greenOn();
		TrafficLight_greenOn_m338B88A6E16EE7B5FD3DE3E4379F9A7D3B49DC5F(__this, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator TrafficLight::Cycle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TrafficLight_Cycle_mC7EE81D3CEB990F6AC6AD49EC038199B7B44B4E9 (TrafficLight_tD55F68E16E18C0A5F32B506715F5BE0989084ABD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCycleU3Ed__5_t31732404568B7EF11413CAAF13D0B07C6E7AC9A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCycleU3Ed__5_t31732404568B7EF11413CAAF13D0B07C6E7AC9A2 * L_0 = (U3CCycleU3Ed__5_t31732404568B7EF11413CAAF13D0B07C6E7AC9A2 *)il2cpp_codegen_object_new(U3CCycleU3Ed__5_t31732404568B7EF11413CAAF13D0B07C6E7AC9A2_il2cpp_TypeInfo_var);
		U3CCycleU3Ed__5__ctor_mE65C5379FD0F6B514882C9A95D46B6299BA86A2A(L_0, 0, /*hidden argument*/NULL);
		U3CCycleU3Ed__5_t31732404568B7EF11413CAAF13D0B07C6E7AC9A2 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Boolean TrafficLight::getLightSwitch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrafficLight_getLightSwitch_mCB954678FDD2BF019C9851D0BCE5163B0749AAAD (TrafficLight_tD55F68E16E18C0A5F32B506715F5BE0989084ABD * __this, const RuntimeMethod* method)
{
	{
		// return !lightSwitch;
		bool L_0 = __this->get_lightSwitch_6();
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void TrafficLight::greenOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficLight_greenOn_m338B88A6E16EE7B5FD3DE3E4379F9A7D3B49DC5F (TrafficLight_tD55F68E16E18C0A5F32B506715F5BE0989084ABD * __this, const RuntimeMethod* method)
{
	{
		// Green.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_Green_4();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// Red.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_Red_5();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TrafficLight::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrafficLight__ctor_m25FBA1B06317E68A42625CD73E906BBE288896AF (TrafficLight_tD55F68E16E18C0A5F32B506715F5BE0989084ABD * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void cardScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cardScript_Start_m77933C2659CF4EB6CE89AA8990429A6C5DAF9154 (cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7831B7715AA09703BEA6DAB66D910E60EB689C3F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _state = 1;
		__this->set__state_5(1);
		// _manager = GameObject.FindGameObjectWithTag ("Manager");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteral7831B7715AA09703BEA6DAB66D910E60EB689C3F, /*hidden argument*/NULL);
		__this->set__manager_10(L_0);
		// }
		return;
	}
}
// System.Void cardScript::setupGraphics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cardScript_setupGraphics_mD609F509C8A3FA38330E9D30286C1BC42034FA54 (cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisgameManager_t2A9919D7CB9773B3211A72C5DA02B305DE63B8AB_m49ED8B9C83E58A4240FC71E9AB438EBF2C9EB619_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _cardBack = _manager.GetComponent<gameManager> ().getCardBack ();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get__manager_10();
		gameManager_t2A9919D7CB9773B3211A72C5DA02B305DE63B8AB * L_1;
		L_1 = GameObject_GetComponent_TisgameManager_t2A9919D7CB9773B3211A72C5DA02B305DE63B8AB_m49ED8B9C83E58A4240FC71E9AB438EBF2C9EB619(L_0, /*hidden argument*/GameObject_GetComponent_TisgameManager_t2A9919D7CB9773B3211A72C5DA02B305DE63B8AB_m49ED8B9C83E58A4240FC71E9AB438EBF2C9EB619_RuntimeMethod_var);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_2;
		L_2 = gameManager_getCardBack_m72B9BD9FFA168A4F5CB25B74A92823F3FB098822_inline(L_1, /*hidden argument*/NULL);
		__this->set__cardBack_8(L_2);
		// _cardFace = _manager.GetComponent<gameManager> ().getCardFace (_cardValue);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get__manager_10();
		gameManager_t2A9919D7CB9773B3211A72C5DA02B305DE63B8AB * L_4;
		L_4 = GameObject_GetComponent_TisgameManager_t2A9919D7CB9773B3211A72C5DA02B305DE63B8AB_m49ED8B9C83E58A4240FC71E9AB438EBF2C9EB619(L_3, /*hidden argument*/GameObject_GetComponent_TisgameManager_t2A9919D7CB9773B3211A72C5DA02B305DE63B8AB_m49ED8B9C83E58A4240FC71E9AB438EBF2C9EB619_RuntimeMethod_var);
		int32_t L_5 = __this->get__cardValue_6();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_6;
		L_6 = gameManager_getCardFace_m2FA320972152025F9ADAF8D9C10E1E04BB14A446(L_4, L_5, /*hidden argument*/NULL);
		__this->set__cardFace_9(L_6);
		// flipcard ();
		cardScript_flipcard_m49A8EF288190A219379C4079919AA0F29952049E(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void cardScript::flipcard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cardScript_flipcard_m49A8EF288190A219379C4079919AA0F29952049E (cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_state == 0)
		int32_t L_0 = __this->get__state_5();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// _state = 1;
		__this->set__state_5(1);
		goto IL_0021;
	}

IL_0011:
	{
		// else if (_state == 1)
		int32_t L_1 = __this->get__state_5();
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0021;
		}
	}
	{
		// _state = 0;
		__this->set__state_5(0);
	}

IL_0021:
	{
		// if (_state == 0 && !DO_NOT)
		int32_t L_2 = __this->get__state_5();
		if (L_2)
		{
			goto IL_0042;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6_il2cpp_TypeInfo_var);
		bool L_3 = ((cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6_StaticFields*)il2cpp_codegen_static_fields_for(cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6_il2cpp_TypeInfo_var))->get_DO_NOT_4();
		if (L_3)
		{
			goto IL_0042;
		}
	}
	{
		// GetComponent<Image> ().sprite = _cardBack;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4;
		L_4 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB(__this, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_5 = __this->get__cardBack_8();
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_4, L_5, /*hidden argument*/NULL);
		return;
	}

IL_0042:
	{
		// else if (_state == 1 && !DO_NOT)
		int32_t L_6 = __this->get__state_5();
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0063;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6_il2cpp_TypeInfo_var);
		bool L_7 = ((cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6_StaticFields*)il2cpp_codegen_static_fields_for(cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6_il2cpp_TypeInfo_var))->get_DO_NOT_4();
		if (L_7)
		{
			goto IL_0063;
		}
	}
	{
		// GetComponent<Image> ().sprite = _cardFace;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB(__this, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_9 = __this->get__cardFace_9();
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_8, L_9, /*hidden argument*/NULL);
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Int32 cardScript::get_cardValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t cardScript_get_cardValue_m804850DC442696ACEEB20B33C94E9569F821FE3F (cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6 * __this, const RuntimeMethod* method)
{
	{
		// get { return _cardValue; }
		int32_t L_0 = __this->get__cardValue_6();
		return L_0;
	}
}
// System.Void cardScript::set_cardValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cardScript_set_cardValue_mADAFD08DA1BBB92A6CB9A6F260C95C986DCECBE4 (cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { _cardValue = value; }
		int32_t L_0 = ___value0;
		__this->set__cardValue_6(L_0);
		// set { _cardValue = value; }
		return;
	}
}
// System.Int32 cardScript::get_state()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t cardScript_get_state_m486D8B461A15F1C86CF6B55D8D474914648AC9F3 (cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6 * __this, const RuntimeMethod* method)
{
	{
		// get { return _state; }
		int32_t L_0 = __this->get__state_5();
		return L_0;
	}
}
// System.Void cardScript::set_state(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cardScript_set_state_mF527311F7B3ABC5D3932470C90611844AC9DA1D2 (cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { _state = value; }
		int32_t L_0 = ___value0;
		__this->set__state_5(L_0);
		// set { _state = value; }
		return;
	}
}
// System.Boolean cardScript::get_initialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool cardScript_get_initialized_mACFDBF3668EBDBD300E7B18CFA7AE5B646E8F4E0 (cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6 * __this, const RuntimeMethod* method)
{
	{
		// get { return _initialized; }
		bool L_0 = __this->get__initialized_7();
		return L_0;
	}
}
// System.Void cardScript::set_initialized(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cardScript_set_initialized_mC63FC7D64384285BA9593FA8C55FD4878CAFE664 (cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { _initialized = value; }
		bool L_0 = ___value0;
		__this->set__initialized_7(L_0);
		// set { _initialized = value; }
		return;
	}
}
// System.Void cardScript::falseCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cardScript_falseCheck_m82F2D722EEB6E59FFECC3D2E6E997DBA5F84828A (cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6 * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine (pause ());
		RuntimeObject* L_0;
		L_0 = cardScript_pause_mB5BF2DCD65F43214C6CA0FC4532B0879F5CC9FAA(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator cardScript::pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cardScript_pause_mB5BF2DCD65F43214C6CA0FC4532B0879F5CC9FAA (cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CpauseU3Ed__20_t80A82111B292E0B9D43B8B71F99F25A6BDD0EEC8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CpauseU3Ed__20_t80A82111B292E0B9D43B8B71F99F25A6BDD0EEC8 * L_0 = (U3CpauseU3Ed__20_t80A82111B292E0B9D43B8B71F99F25A6BDD0EEC8 *)il2cpp_codegen_object_new(U3CpauseU3Ed__20_t80A82111B292E0B9D43B8B71F99F25A6BDD0EEC8_il2cpp_TypeInfo_var);
		U3CpauseU3Ed__20__ctor_mE6177DCAC1CC462CC27907717D74399AEB34FEE9(L_0, 0, /*hidden argument*/NULL);
		U3CpauseU3Ed__20_t80A82111B292E0B9D43B8B71F99F25A6BDD0EEC8 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void cardScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cardScript__ctor_mF5679CC4C2FA804C7A41A620690D50312E5106BA (cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void cardScript::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cardScript__cctor_m6746E0CD6A43935AC769320580A6F96AD8B090AD (const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void gameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameManager_Update_m4978BE4E0F5A5AD68B9948B18BD445253D99B7A2 (gameManager_t2A9919D7CB9773B3211A72C5DA02B305DE63B8AB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19722AC100562EF1E66E244B5E1EB07AD561FF86);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Mismatch.GetComponent<Text>().text = "No. of Mismatch" + ": " + mismatch;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_Mismatch_8();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1;
		L_1 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_0, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		int32_t* L_2 = __this->get_address_of_mismatch_10();
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral19722AC100562EF1E66E244B5E1EB07AD561FF86, L_3, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_4);
		// if (!_init)
		bool L_5 = __this->get__init_11();
		if (L_5)
		{
			goto IL_0033;
		}
	}
	{
		// initializeCards ();
		gameManager_initializeCards_mF44A80342BD428300FEDE23432FC8D961A799963(__this, /*hidden argument*/NULL);
	}

IL_0033:
	{
		// if (Input.GetMouseButtonUp (0))
		bool L_6;
		L_6 = Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022(0, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		// checkCards ();
		gameManager_checkCards_mC20C748E46E8B18A4BD40ECACB3869F29470A48D(__this, /*hidden argument*/NULL);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void gameManager::initializeCards()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameManager_initializeCards_mF44A80342BD428300FEDE23432FC8D961A799963 (gameManager_t2A9919D7CB9773B3211A72C5DA02B305DE63B8AB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TiscardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6_m56F647CEF21406EE0F7D3ABE225F1DEE7FD1CAB5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_4 = NULL;
	int32_t V_5 = 0;
	{
		// for (int id = 0; id < 2; id++) {
		V_0 = 0;
		goto IL_0068;
	}

IL_0004:
	{
		// for (int i = 1; i < 5; i++) {
		V_1 = 1;
		goto IL_0060;
	}

IL_0008:
	{
		// bool test = false;
		V_2 = (bool)0;
		// int choice = 0;
		V_3 = 0;
		goto IL_0033;
	}

IL_000e:
	{
		// choice = Random.Range (0, cards.Length);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_cards_6();
		int32_t L_1;
		L_1 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))), /*hidden argument*/NULL);
		V_3 = L_1;
		// test = !(cards [choice].GetComponent<cardScript> ().initialized);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_2 = __this->get_cards_6();
		int32_t L_3 = V_3;
		int32_t L_4 = L_3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6 * L_6;
		L_6 = GameObject_GetComponent_TiscardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6_m56F647CEF21406EE0F7D3ABE225F1DEE7FD1CAB5(L_5, /*hidden argument*/GameObject_GetComponent_TiscardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6_m56F647CEF21406EE0F7D3ABE225F1DEE7FD1CAB5_RuntimeMethod_var);
		bool L_7;
		L_7 = cardScript_get_initialized_mACFDBF3668EBDBD300E7B18CFA7AE5B646E8F4E0_inline(L_6, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
	}

IL_0033:
	{
		// while (!test) {
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_000e;
		}
	}
	{
		// cards [choice].GetComponent<cardScript> ().cardValue = i;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_9 = __this->get_cards_6();
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6 * L_13;
		L_13 = GameObject_GetComponent_TiscardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6_m56F647CEF21406EE0F7D3ABE225F1DEE7FD1CAB5(L_12, /*hidden argument*/GameObject_GetComponent_TiscardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6_m56F647CEF21406EE0F7D3ABE225F1DEE7FD1CAB5_RuntimeMethod_var);
		int32_t L_14 = V_1;
		cardScript_set_cardValue_mADAFD08DA1BBB92A6CB9A6F260C95C986DCECBE4_inline(L_13, L_14, /*hidden argument*/NULL);
		// cards [choice].GetComponent<cardScript> ().initialized = true;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_15 = __this->get_cards_6();
		int32_t L_16 = V_3;
		int32_t L_17 = L_16;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6 * L_19;
		L_19 = GameObject_GetComponent_TiscardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6_m56F647CEF21406EE0F7D3ABE225F1DEE7FD1CAB5(L_18, /*hidden argument*/GameObject_GetComponent_TiscardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6_m56F647CEF21406EE0F7D3ABE225F1DEE7FD1CAB5_RuntimeMethod_var);
		cardScript_set_initialized_mC63FC7D64384285BA9593FA8C55FD4878CAFE664_inline(L_19, (bool)1, /*hidden argument*/NULL);
		// for (int i = 1; i < 5; i++) {
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0060:
	{
		// for (int i = 1; i < 5; i++) {
		int32_t L_21 = V_1;
		if ((((int32_t)L_21) < ((int32_t)5)))
		{
			goto IL_0008;
		}
	}
	{
		// for (int id = 0; id < 2; id++) {
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_0068:
	{
		// for (int id = 0; id < 2; id++) {
		int32_t L_23 = V_0;
		if ((((int32_t)L_23) < ((int32_t)2)))
		{
			goto IL_0004;
		}
	}
	{
		// foreach (GameObject c in cards)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_24 = __this->get_cards_6();
		V_4 = L_24;
		V_5 = 0;
		goto IL_008e;
	}

IL_0079:
	{
		// foreach (GameObject c in cards)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_25 = V_4;
		int32_t L_26 = V_5;
		int32_t L_27 = L_26;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		// c.GetComponent<cardScript> ().setupGraphics ();
		cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6 * L_29;
		L_29 = GameObject_GetComponent_TiscardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6_m56F647CEF21406EE0F7D3ABE225F1DEE7FD1CAB5(L_28, /*hidden argument*/GameObject_GetComponent_TiscardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6_m56F647CEF21406EE0F7D3ABE225F1DEE7FD1CAB5_RuntimeMethod_var);
		cardScript_setupGraphics_mD609F509C8A3FA38330E9D30286C1BC42034FA54(L_29, /*hidden argument*/NULL);
		int32_t L_30 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_008e:
	{
		// foreach (GameObject c in cards)
		int32_t L_31 = V_5;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_32 = V_4;
		if ((((int32_t)L_31) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length))))))
		{
			goto IL_0079;
		}
	}
	{
		// if (!_init)
		bool L_33 = __this->get__init_11();
		if (L_33)
		{
			goto IL_00a5;
		}
	}
	{
		// _init = true;
		__this->set__init_11((bool)1);
	}

IL_00a5:
	{
		// }
		return;
	}
}
// UnityEngine.Sprite gameManager::getCardBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * gameManager_getCardBack_m72B9BD9FFA168A4F5CB25B74A92823F3FB098822 (gameManager_t2A9919D7CB9773B3211A72C5DA02B305DE63B8AB * __this, const RuntimeMethod* method)
{
	{
		// return cardBack;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_0 = __this->get_cardBack_5();
		return L_0;
	}
}
// UnityEngine.Sprite gameManager::getCardFace(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * gameManager_getCardFace_m2FA320972152025F9ADAF8D9C10E1E04BB14A446 (gameManager_t2A9919D7CB9773B3211A72C5DA02B305DE63B8AB * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		// return cardFace[i - 1];
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_0 = __this->get_cardFace_4();
		int32_t L_1 = ___i0;
		int32_t L_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1));
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// System.Void gameManager::checkCards()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameManager_checkCards_mC20C748E46E8B18A4BD40ECACB3869F29470A48D (gameManager_t2A9919D7CB9773B3211A72C5DA02B305DE63B8AB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TiscardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6_m56F647CEF21406EE0F7D3ABE225F1DEE7FD1CAB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// List<int> c = new List<int> ();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD(L_0, /*hidden argument*/List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		V_0 = L_0;
		// for (int i = 0; i < cards.Length; i++) {
		V_1 = 0;
		goto IL_002a;
	}

IL_000a:
	{
		// if (cards [i].GetComponent<cardScript> ().state == 1)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = __this->get_cards_6();
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6 * L_5;
		L_5 = GameObject_GetComponent_TiscardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6_m56F647CEF21406EE0F7D3ABE225F1DEE7FD1CAB5(L_4, /*hidden argument*/GameObject_GetComponent_TiscardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6_m56F647CEF21406EE0F7D3ABE225F1DEE7FD1CAB5_RuntimeMethod_var);
		int32_t L_6;
		L_6 = cardScript_get_state_m486D8B461A15F1C86CF6B55D8D474914648AC9F3_inline(L_5, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0026;
		}
	}
	{
		// c.Add (i);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_7 = V_0;
		int32_t L_8 = V_1;
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_7, L_8, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
	}

IL_0026:
	{
		// for (int i = 0; i < cards.Length; i++) {
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_002a:
	{
		// for (int i = 0; i < cards.Length; i++) {
		int32_t L_10 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_11 = __this->get_cards_6();
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		// if (c.Count == 2){
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_12 = V_0;
		int32_t L_13;
		L_13 = List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline(L_12, /*hidden argument*/List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		if ((!(((uint32_t)L_13) == ((uint32_t)2))))
		{
			goto IL_0053;
		}
	}
	{
		// mismatch++;
		int32_t L_14 = __this->get_mismatch_10();
		__this->set_mismatch_10(((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1)));
		// cardComparison (c);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_15 = V_0;
		gameManager_cardComparison_m5A47D3FF5DF8396F8EA2A6EABD223B93D4C444CE(__this, L_15, /*hidden argument*/NULL);
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Void gameManager::cardComparison(System.Collections.Generic.List`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameManager_cardComparison_m5A47D3FF5DF8396F8EA2A6EABD223B93D4C444CE (gameManager_t2A9919D7CB9773B3211A72C5DA02B305DE63B8AB * __this, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TiscardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6_m56F647CEF21406EE0F7D3ABE225F1DEE7FD1CAB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// cardScript.DO_NOT = true;
		IL2CPP_RUNTIME_CLASS_INIT(cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6_il2cpp_TypeInfo_var);
		((cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6_StaticFields*)il2cpp_codegen_static_fields_for(cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6_il2cpp_TypeInfo_var))->set_DO_NOT_4((bool)1);
		// int x = 0;
		V_0 = 0;
		// if (cards [c [0]].GetComponent<cardScript> ().cardValue == cards [c [1]].GetComponent<cardScript> ().cardValue) {
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_cards_6();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_1 = ___c0;
		int32_t L_2;
		L_2 = List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline(L_1, 0, /*hidden argument*/List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		int32_t L_3 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6 * L_5;
		L_5 = GameObject_GetComponent_TiscardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6_m56F647CEF21406EE0F7D3ABE225F1DEE7FD1CAB5(L_4, /*hidden argument*/GameObject_GetComponent_TiscardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6_m56F647CEF21406EE0F7D3ABE225F1DEE7FD1CAB5_RuntimeMethod_var);
		int32_t L_6;
		L_6 = cardScript_get_cardValue_m804850DC442696ACEEB20B33C94E9569F821FE3F_inline(L_5, /*hidden argument*/NULL);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_7 = __this->get_cards_6();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_8 = ___c0;
		int32_t L_9;
		L_9 = List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline(L_8, 1, /*hidden argument*/List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		int32_t L_10 = L_9;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6 * L_12;
		L_12 = GameObject_GetComponent_TiscardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6_m56F647CEF21406EE0F7D3ABE225F1DEE7FD1CAB5(L_11, /*hidden argument*/GameObject_GetComponent_TiscardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6_m56F647CEF21406EE0F7D3ABE225F1DEE7FD1CAB5_RuntimeMethod_var);
		int32_t L_13;
		L_13 = cardScript_get_cardValue_m804850DC442696ACEEB20B33C94E9569F821FE3F_inline(L_12, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_13))))
		{
			goto IL_005f;
		}
	}
	{
		// x = 2;
		V_0 = 2;
		// _matches--;
		int32_t L_14 = __this->get__matches_12();
		__this->set__matches_12(((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1)));
		// if (_matches == 0){
		int32_t L_15 = __this->get__matches_12();
		if (L_15)
		{
			goto IL_005f;
		}
	}
	{
		// StartCoroutine(endGame());
		RuntimeObject* L_16;
		L_16 = gameManager_endGame_mB04AB1FB3A0FA21E49639A638DA494DA9AA501B6(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_17;
		L_17 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_16, /*hidden argument*/NULL);
	}

IL_005f:
	{
		// for (int i = 0; i < c.Count; i++) {
		V_1 = 0;
		goto IL_0098;
	}

IL_0063:
	{
		// cards [c [i]].GetComponent<cardScript> ().state = x;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_18 = __this->get_cards_6();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_19 = ___c0;
		int32_t L_20 = V_1;
		int32_t L_21;
		L_21 = List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline(L_19, L_20, /*hidden argument*/List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		int32_t L_22 = L_21;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6 * L_24;
		L_24 = GameObject_GetComponent_TiscardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6_m56F647CEF21406EE0F7D3ABE225F1DEE7FD1CAB5(L_23, /*hidden argument*/GameObject_GetComponent_TiscardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6_m56F647CEF21406EE0F7D3ABE225F1DEE7FD1CAB5_RuntimeMethod_var);
		int32_t L_25 = V_0;
		cardScript_set_state_mF527311F7B3ABC5D3932470C90611844AC9DA1D2_inline(L_24, L_25, /*hidden argument*/NULL);
		// cards [c [i]].GetComponent<cardScript> ().falseCheck ();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_26 = __this->get_cards_6();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_27 = ___c0;
		int32_t L_28 = V_1;
		int32_t L_29;
		L_29 = List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline(L_27, L_28, /*hidden argument*/List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		int32_t L_30 = L_29;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31 = (L_26)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6 * L_32;
		L_32 = GameObject_GetComponent_TiscardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6_m56F647CEF21406EE0F7D3ABE225F1DEE7FD1CAB5(L_31, /*hidden argument*/GameObject_GetComponent_TiscardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6_m56F647CEF21406EE0F7D3ABE225F1DEE7FD1CAB5_RuntimeMethod_var);
		cardScript_falseCheck_m82F2D722EEB6E59FFECC3D2E6E997DBA5F84828A(L_32, /*hidden argument*/NULL);
		// for (int i = 0; i < c.Count; i++) {
		int32_t L_33 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_0098:
	{
		// for (int i = 0; i < c.Count; i++) {
		int32_t L_34 = V_1;
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_35 = ___c0;
		int32_t L_36;
		L_36 = List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline(L_35, /*hidden argument*/List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		if ((((int32_t)L_34) < ((int32_t)L_36)))
		{
			goto IL_0063;
		}
	}
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator gameManager::endGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* gameManager_endGame_mB04AB1FB3A0FA21E49639A638DA494DA9AA501B6 (gameManager_t2A9919D7CB9773B3211A72C5DA02B305DE63B8AB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CendGameU3Ed__15_t3938227E4045198C45B0340DABB7F1EF91CF0B5B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CendGameU3Ed__15_t3938227E4045198C45B0340DABB7F1EF91CF0B5B * L_0 = (U3CendGameU3Ed__15_t3938227E4045198C45B0340DABB7F1EF91CF0B5B *)il2cpp_codegen_object_new(U3CendGameU3Ed__15_t3938227E4045198C45B0340DABB7F1EF91CF0B5B_il2cpp_TypeInfo_var);
		U3CendGameU3Ed__15__ctor_m27E79C32F193BB85C35EF66EA77ED01C92CF38DA(L_0, 0, /*hidden argument*/NULL);
		U3CendGameU3Ed__15_t3938227E4045198C45B0340DABB7F1EF91CF0B5B * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void gameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameManager__ctor_mEC3390C453AE10969E79C65755A3BECB98211356 (gameManager_t2A9919D7CB9773B3211A72C5DA02B305DE63B8AB * __this, const RuntimeMethod* method)
{
	{
		// private int mismatch = -4;
		__this->set_mismatch_10(((int32_t)-4));
		// private int _matches = 4;
		__this->set__matches_12(4);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void getTime::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void getTime_Start_m85657DEDADF1BEADB315D8E27964A59EE0CED1AA (getTime_t35B684BAE3F51C0B31B7059A6A772B7052A9E23D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<Text>().text = time.GetComponent<Text>().text;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0;
		L_0 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(__this, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_time_4();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2;
		L_2 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_1, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_2);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		// }
		return;
	}
}
// System.Void getTime::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void getTime__ctor_m2350F4662723FC9779FB6EF8E97EB0096AEBFFCF (getTime_t35B684BAE3F51C0B31B7059A6A772B7052A9E23D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void timeScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void timeScript_Start_m71C300A7A6E5B32EFC91AF0873941947E5D32C32 (timeScript_t676CF5FF3D174FDE41EE6B117EC3542CE225C182 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// counterText = GetComponent<Text> () as Text;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0;
		L_0 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(__this, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		__this->set_counterText_4(L_0);
		// }
		return;
	}
}
// System.Void timeScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void timeScript_Update_mC58DA6C89FA16B9A667CE88D17576716C44FBB91 (timeScript_t676CF5FF3D174FDE41EE6B117EC3542CE225C182 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51B5CD1D6594415A8439F216785E444EDDED9C65);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (timeCounter) {
		bool L_0 = __this->get_timeCounter_5();
		if (!L_0)
		{
			goto IL_0040;
		}
	}
	{
		// seconds = (int)(Time.timeSinceLevelLoad % 60f);
		float L_1;
		L_1 = Time_get_timeSinceLevelLoad_m47A90DE6CB3A3180D64F0049290BC72C186FC7FB(/*hidden argument*/NULL);
		__this->set_seconds_6(((float)((float)il2cpp_codegen_cast_double_to_int<int32_t>((fmodf(L_1, (60.0f)))))));
		// counterText.text = "Seconds" + ": " + seconds.ToString ("00");
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_counterText_4();
		float* L_3 = __this->get_address_of_seconds_6();
		String_t* L_4;
		L_4 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)L_3, _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral51B5CD1D6594415A8439F216785E444EDDED9C65, L_4, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_5);
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void timeScript::endGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void timeScript_endGame_mB0A702B5CA8CB1CFCC89EB4659D09E282B944BF6 (timeScript_t676CF5FF3D174FDE41EE6B117EC3542CE225C182 * __this, const RuntimeMethod* method)
{
	{
		// timeCounter = false;
		__this->set_timeCounter_5((bool)0);
		// counterText.color = Color.yellow;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_counterText_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1(/*hidden argument*/NULL);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void timeScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void timeScript__ctor_mC531070A62A82189CB0F0863393F37913A34EB0A (timeScript_t676CF5FF3D174FDE41EE6B117EC3542CE225C182 * __this, const RuntimeMethod* method)
{
	{
		// public bool timeCounter = true;
		__this->set_timeCounter_5((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ButtonManager/<HideGhost>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHideGhostU3Ed__8__ctor_m7989C10513A5C38604549DD1A56B2CC4A43A8A99 (U3CHideGhostU3Ed__8_t749108EEA4C8AEFD44F8B618A2649711FE52BF6C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ButtonManager/<HideGhost>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHideGhostU3Ed__8_System_IDisposable_Dispose_m2BCE15BAF2B3E2CCDFB3B21C879D5A5983484B04 (U3CHideGhostU3Ed__8_t749108EEA4C8AEFD44F8B618A2649711FE52BF6C * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ButtonManager/<HideGhost>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CHideGhostU3Ed__8_MoveNext_m30C19F2A7AB2D9A8BEE99376947997506043D5D6 (U3CHideGhostU3Ed__8_t749108EEA4C8AEFD44F8B618A2649711FE52BF6C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF37CBD339C4FC2591F66448F35A256012A55618F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(hideTime);
		ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31 * L_4 = V_1;
		float L_5 = L_4->get_hideTime_8();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, L_5, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0038:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (Ghosts.GetComponent<Button>().interactable == true)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_Ghosts_3();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_8;
		L_8 = GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8(L_7, /*hidden argument*/GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		bool L_9;
		L_9 = Selectable_get_interactable_m4231515CC3C861B431AA22FE3345F831389B3840_inline(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0084;
		}
	}
	{
		// scoreManager.UpdateScore(5, false);
		ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31 * L_10 = V_1;
		ScoreManager_t52E31A532CA8B702090279B85180CF575D6FE113 * L_11 = L_10->get_scoreManager_4();
		ScoreManager_UpdateScore_m156C45E9BC479AC26BF4055E7CF7673D74089DC2(L_11, 5, (bool)0, /*hidden argument*/NULL);
		// Ghosts.GetComponent<Button>().interactable = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_Ghosts_3();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_13;
		L_13 = GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8(L_12, /*hidden argument*/GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_13, (bool)0, /*hidden argument*/NULL);
		// Ghosts.GetComponent<Animator>().Play("GhostDisappear");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_Ghosts_3();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_15;
		L_15 = GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36(L_14, /*hidden argument*/GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C(L_15, _stringLiteralF37CBD339C4FC2591F66448F35A256012A55618F, /*hidden argument*/NULL);
	}

IL_0084:
	{
		// }
		return (bool)0;
	}
}
// System.Object ButtonManager/<HideGhost>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CHideGhostU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC7DC2A9ADA3024C8365340CF58CFB008CF86311E (U3CHideGhostU3Ed__8_t749108EEA4C8AEFD44F8B618A2649711FE52BF6C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ButtonManager/<HideGhost>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHideGhostU3Ed__8_System_Collections_IEnumerator_Reset_m90DEAEFBDCAFF20B35FBDEB0A809F62FE5C47606 (U3CHideGhostU3Ed__8_t749108EEA4C8AEFD44F8B618A2649711FE52BF6C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CHideGhostU3Ed__8_System_Collections_IEnumerator_Reset_m90DEAEFBDCAFF20B35FBDEB0A809F62FE5C47606_RuntimeMethod_var)));
	}
}
// System.Object ButtonManager/<HideGhost>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CHideGhostU3Ed__8_System_Collections_IEnumerator_get_Current_m88D38BD96F1FF6E5C8ECC5B22852FC5109501780 (U3CHideGhostU3Ed__8_t749108EEA4C8AEFD44F8B618A2649711FE52BF6C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ButtonManager/<HitGhost>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHitGhostU3Ed__9__ctor_m757C892FFF881F8E45DB40AB43D682101DD382EC (U3CHitGhostU3Ed__9_t3FD34179317C706741C8ADC0FB2F966AF3A787C4 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ButtonManager/<HitGhost>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHitGhostU3Ed__9_System_IDisposable_Dispose_mC6E2A9C756F7DA0517C0A3A8A723433607B7FD0F (U3CHitGhostU3Ed__9_t3FD34179317C706741C8ADC0FB2F966AF3A787C4 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ButtonManager/<HitGhost>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CHitGhostU3Ed__9_MoveNext_m45224BC948CF61E7C38263CA3D575EEA0421B737 (U3CHitGhostU3Ed__9_t3FD34179317C706741C8ADC0FB2F966AF3A787C4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF37CBD339C4FC2591F66448F35A256012A55618F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0030;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_3 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_3, (0.5f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0030:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Ghosts.GetComponent<Button>().interactable = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_Ghosts_2();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_5;
		L_5 = GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8(L_4, /*hidden argument*/GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_5, (bool)0, /*hidden argument*/NULL);
		// Ghosts.GetComponent<Image>().color = Color.white;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_Ghosts_2();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_7;
		L_7 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_6, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8;
		L_8 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_7, L_8);
		// Ghosts.GetComponent<Animator>().Play("GhostDisappear");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_Ghosts_2();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_10;
		L_10 = GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36(L_9, /*hidden argument*/GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C(L_10, _stringLiteralF37CBD339C4FC2591F66448F35A256012A55618F, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object ButtonManager/<HitGhost>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CHitGhostU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m624C9B315915249F3569959C66A9148CADE9B617 (U3CHitGhostU3Ed__9_t3FD34179317C706741C8ADC0FB2F966AF3A787C4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ButtonManager/<HitGhost>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHitGhostU3Ed__9_System_Collections_IEnumerator_Reset_mF77D00F34D7117D064498B13D735D1EB98CB6226 (U3CHitGhostU3Ed__9_t3FD34179317C706741C8ADC0FB2F966AF3A787C4 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CHitGhostU3Ed__9_System_Collections_IEnumerator_Reset_mF77D00F34D7117D064498B13D735D1EB98CB6226_RuntimeMethod_var)));
	}
}
// System.Object ButtonManager/<HitGhost>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CHitGhostU3Ed__9_System_Collections_IEnumerator_get_Current_mA9441C7D365926D2E6556E2237F668D8B0B7793C (U3CHitGhostU3Ed__9_t3FD34179317C706741C8ADC0FB2F966AF3A787C4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ButtonManager/<ShowGhost>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowGhostU3Ed__7__ctor_m4DE1E0513548D50AD8ACABBC42CF7ADC751CA37B (U3CShowGhostU3Ed__7_tABC923EDB14A96DAA4B068E1A7DD2C59DC240056 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ButtonManager/<ShowGhost>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowGhostU3Ed__7_System_IDisposable_Dispose_m3CE0B6382FFE564ABA93A0B2D53B214DC27D0430 (U3CShowGhostU3Ed__7_tABC923EDB14A96DAA4B068E1A7DD2C59DC240056 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ButtonManager/<ShowGhost>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CShowGhostU3Ed__7_MoveNext_mDD26718602CBB8F0EBD3C2A78B3D4BA7413D04A5 (U3CShowGhostU3Ed__7_tABC923EDB14A96DAA4B068E1A7DD2C59DC240056 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DBBCE50C794FFB9AA76A7FA1609EF06852F6E53);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF37CBD339C4FC2591F66448F35A256012A55618F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(showTime);
		ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31 * L_4 = V_1;
		float L_5 = L_4->get_showTime_7();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, L_5, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0038:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (timeManager.gameOver == true){
		ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31 * L_7 = V_1;
		TimeManager_t7C9EC9E1F31A3BAAE33B119C0B91347D37ABAF82 * L_8 = L_7->get_timeManager_5();
		bool L_9 = L_8->get_gameOver_7();
		if (!L_9)
		{
			goto IL_0089;
		}
	}
	{
		// for (int i = 0; i < Ghosts.Length; i ++)
		V_2 = 0;
		goto IL_007e;
	}

IL_0050:
	{
		// Ghosts[i].GetComponent<Button>().interactable = false;
		ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31 * L_10 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_11 = L_10->get_Ghosts_6();
		int32_t L_12 = V_2;
		int32_t L_13 = L_12;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_15;
		L_15 = GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8(L_14, /*hidden argument*/GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_15, (bool)0, /*hidden argument*/NULL);
		// Ghosts[i].GetComponent<Animator>().Play("GhostDisappear");
		ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31 * L_16 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_17 = L_16->get_Ghosts_6();
		int32_t L_18 = V_2;
		int32_t L_19 = L_18;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_21;
		L_21 = GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36(L_20, /*hidden argument*/GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C(L_21, _stringLiteralF37CBD339C4FC2591F66448F35A256012A55618F, /*hidden argument*/NULL);
		// for (int i = 0; i < Ghosts.Length; i ++)
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_007e:
	{
		// for (int i = 0; i < Ghosts.Length; i ++)
		int32_t L_23 = V_2;
		ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31 * L_24 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_25 = L_24->get_Ghosts_6();
		if ((((int32_t)L_23) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length))))))
		{
			goto IL_0050;
		}
	}

IL_0089:
	{
		// if (timeManager.gameOver == false)
		ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31 * L_26 = V_1;
		TimeManager_t7C9EC9E1F31A3BAAE33B119C0B91347D37ABAF82 * L_27 = L_26->get_timeManager_5();
		bool L_28 = L_27->get_gameOver_7();
		if (L_28)
		{
			goto IL_0105;
		}
	}
	{
		// int randBtn = Random.Range(0, Ghosts.Length);
		ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31 * L_29 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_30 = L_29->get_Ghosts_6();
		int32_t L_31;
		L_31 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length))), /*hidden argument*/NULL);
		V_3 = L_31;
		// if (Ghosts[randBtn].GetComponent<Button>().interactable == false)
		ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31 * L_32 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_33 = L_32->get_Ghosts_6();
		int32_t L_34 = V_3;
		int32_t L_35 = L_34;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35));
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_37;
		L_37 = GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8(L_36, /*hidden argument*/GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		bool L_38;
		L_38 = Selectable_get_interactable_m4231515CC3C861B431AA22FE3345F831389B3840_inline(L_37, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_00e3;
		}
	}
	{
		// Ghosts[randBtn].GetComponent<Button>().interactable = true;
		ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31 * L_39 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_40 = L_39->get_Ghosts_6();
		int32_t L_41 = V_3;
		int32_t L_42 = L_41;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43 = (L_40)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_42));
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_44;
		L_44 = GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8(L_43, /*hidden argument*/GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_44, (bool)1, /*hidden argument*/NULL);
		// Ghosts[randBtn].GetComponent<Animator>().Play("GhostAppear");
		ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31 * L_45 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_46 = L_45->get_Ghosts_6();
		int32_t L_47 = V_3;
		int32_t L_48 = L_47;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_49 = (L_46)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_48));
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_50;
		L_50 = GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36(L_49, /*hidden argument*/GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C(L_50, _stringLiteral7DBBCE50C794FFB9AA76A7FA1609EF06852F6E53, /*hidden argument*/NULL);
	}

IL_00e3:
	{
		// StartCoroutine(ShowGhost());
		ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31 * L_51 = V_1;
		ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31 * L_52 = V_1;
		RuntimeObject* L_53;
		L_53 = ButtonManager_ShowGhost_m4B62BBDF73381C373120804F9F29472E7E2D7EE1(L_52, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_54;
		L_54 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_51, L_53, /*hidden argument*/NULL);
		// StartCoroutine(HideGhost(Ghosts[randBtn]));
		ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31 * L_55 = V_1;
		ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31 * L_56 = V_1;
		ButtonManager_t71DCCA8A02560CC7013AA89F9E76F5039482BB31 * L_57 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_58 = L_57->get_Ghosts_6();
		int32_t L_59 = V_3;
		int32_t L_60 = L_59;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_61 = (L_58)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_60));
		RuntimeObject* L_62;
		L_62 = ButtonManager_HideGhost_mD736CDF76C54CDBE76D3FAFDCB6CE3E64F37F163(L_56, L_61, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_63;
		L_63 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_55, L_62, /*hidden argument*/NULL);
	}

IL_0105:
	{
		// }
		return (bool)0;
	}
}
// System.Object ButtonManager/<ShowGhost>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShowGhostU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m039FC94E00020B3E96F6DB0FCF6172B4BE592A2B (U3CShowGhostU3Ed__7_tABC923EDB14A96DAA4B068E1A7DD2C59DC240056 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ButtonManager/<ShowGhost>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowGhostU3Ed__7_System_Collections_IEnumerator_Reset_m74AE67848A7B571533C0FE37836EC2162E71EBEC (U3CShowGhostU3Ed__7_tABC923EDB14A96DAA4B068E1A7DD2C59DC240056 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CShowGhostU3Ed__7_System_Collections_IEnumerator_Reset_m74AE67848A7B571533C0FE37836EC2162E71EBEC_RuntimeMethod_var)));
	}
}
// System.Object ButtonManager/<ShowGhost>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShowGhostU3Ed__7_System_Collections_IEnumerator_get_Current_mD5D16E9A39190DAE91D3A5DA582DF5C32B9D02ED (U3CShowGhostU3Ed__7_tABC923EDB14A96DAA4B068E1A7DD2C59DC240056 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Driver/<endGame>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CendGameU3Ed__15__ctor_mC1902BCD325034E40667BEC522657D33BD15B28C (U3CendGameU3Ed__15_tCC463386A1B61B40FD8EECE6B47D4AC99BBCCAFC * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Driver/<endGame>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CendGameU3Ed__15_System_IDisposable_Dispose_m345FC58DE50773277A72410F7DF8D81195F697FF (U3CendGameU3Ed__15_tCC463386A1B61B40FD8EECE6B47D4AC99BBCCAFC * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Driver/<endGame>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CendGameU3Ed__15_MoveNext_mC6D14D70506FC4EA26F429D5FECE45E4C03118FD (U3CendGameU3Ed__15_tCC463386A1B61B40FD8EECE6B47D4AC99BBCCAFC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83_m3DF57F4764A980487940B6B376435B8024A1D23C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisStatsController_tBB477720ABA192D16DF50C483D289E3E5A889095_m3A8F8E23C79DAF9AE52E9EA41EEDBBCCEA041956_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TistimeScript_t676CF5FF3D174FDE41EE6B117EC3542CE225C182_mD0FC1FED96DB99D94449D7FDAA5054AFAE0AFCB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral162E86C91F5205A141B28109C3F1C992A8B0D613);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3ECDFE8945C09AB159F2C17858C48E954CB90A2B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5ACDFF9A389332216C4D2638C239E2BD5667E2F0);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Driver_t2AD30C27D04F1E04A5C815739AB520064BCE9AE0 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Driver_t2AD30C27D04F1E04A5C815739AB520064BCE9AE0 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00b3;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// end = true;
		Driver_t2AD30C27D04F1E04A5C815739AB520064BCE9AE0 * L_4 = V_1;
		L_4->set_end_8((bool)1);
		// gameTime.GetComponent<timeScript> ().endGame ();
		Driver_t2AD30C27D04F1E04A5C815739AB520064BCE9AE0 * L_5 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = L_5->get_gameTime_10();
		timeScript_t676CF5FF3D174FDE41EE6B117EC3542CE225C182 * L_7;
		L_7 = GameObject_GetComponent_TistimeScript_t676CF5FF3D174FDE41EE6B117EC3542CE225C182_mD0FC1FED96DB99D94449D7FDAA5054AFAE0AFCB6(L_6, /*hidden argument*/GameObject_GetComponent_TistimeScript_t676CF5FF3D174FDE41EE6B117EC3542CE225C182_mD0FC1FED96DB99D94449D7FDAA5054AFAE0AFCB6_RuntimeMethod_var);
		timeScript_endGame_mB0A702B5CA8CB1CFCC89EB4659D09E282B944BF6(L_7, /*hidden argument*/NULL);
		// GameObject.Find("HungerBar").GetComponent<GetAddScore>().AddScore.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral3ECDFE8945C09AB159F2C17858C48E954CB90A2B, /*hidden argument*/NULL);
		GetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83 * L_9;
		L_9 = GameObject_GetComponent_TisGetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83_m3DF57F4764A980487940B6B376435B8024A1D23C(L_8, /*hidden argument*/GameObject_GetComponent_TisGetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83_m3DF57F4764A980487940B6B376435B8024A1D23C_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = GetAddScore_get_AddScore_m004E61865019D873D76613EFB76B2619193B5446_inline(L_9, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_10, (bool)1, /*hidden argument*/NULL);
		// GameObject.Find("HealthBar").GetComponent<GetAddScore>().AddScore.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral162E86C91F5205A141B28109C3F1C992A8B0D613, /*hidden argument*/NULL);
		GetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83 * L_12;
		L_12 = GameObject_GetComponent_TisGetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83_m3DF57F4764A980487940B6B376435B8024A1D23C(L_11, /*hidden argument*/GameObject_GetComponent_TisGetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83_m3DF57F4764A980487940B6B376435B8024A1D23C_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = GetAddScore_get_AddScore_m004E61865019D873D76613EFB76B2619193B5446_inline(L_12, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_13, (bool)1, /*hidden argument*/NULL);
		// GameObject.Find("Stats").GetComponent<StatsController>().ChangeStats(StatsController.Stats.Hunger, 30);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral5ACDFF9A389332216C4D2638C239E2BD5667E2F0, /*hidden argument*/NULL);
		StatsController_tBB477720ABA192D16DF50C483D289E3E5A889095 * L_15;
		L_15 = GameObject_GetComponent_TisStatsController_tBB477720ABA192D16DF50C483D289E3E5A889095_m3A8F8E23C79DAF9AE52E9EA41EEDBBCCEA041956(L_14, /*hidden argument*/GameObject_GetComponent_TisStatsController_tBB477720ABA192D16DF50C483D289E3E5A889095_m3A8F8E23C79DAF9AE52E9EA41EEDBBCCEA041956_RuntimeMethod_var);
		StatsController_ChangeStats_mC249813A1FF6B782C2489B11D9D995C9C53B1908(L_15, 2, ((int32_t)30), /*hidden argument*/NULL);
		// GameObject.Find("Stats").GetComponent<StatsController>().ChangeStats(StatsController.Stats.Health, 10);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral5ACDFF9A389332216C4D2638C239E2BD5667E2F0, /*hidden argument*/NULL);
		StatsController_tBB477720ABA192D16DF50C483D289E3E5A889095 * L_17;
		L_17 = GameObject_GetComponent_TisStatsController_tBB477720ABA192D16DF50C483D289E3E5A889095_m3A8F8E23C79DAF9AE52E9EA41EEDBBCCEA041956(L_16, /*hidden argument*/GameObject_GetComponent_TisStatsController_tBB477720ABA192D16DF50C483D289E3E5A889095_m3A8F8E23C79DAF9AE52E9EA41EEDBBCCEA041956_RuntimeMethod_var);
		StatsController_ChangeStats_mC249813A1FF6B782C2489B11D9D995C9C53B1908(L_17, 0, ((int32_t)10), /*hidden argument*/NULL);
		// yield return new WaitForSeconds(2f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_18 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_18, (2.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_18);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00b3:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Time.timeScale = 0f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
		// GameObject.Find("HungerBar").GetComponent<GetAddScore>().AddScore.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
		L_19 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral3ECDFE8945C09AB159F2C17858C48E954CB90A2B, /*hidden argument*/NULL);
		GetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83 * L_20;
		L_20 = GameObject_GetComponent_TisGetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83_m3DF57F4764A980487940B6B376435B8024A1D23C(L_19, /*hidden argument*/GameObject_GetComponent_TisGetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83_m3DF57F4764A980487940B6B376435B8024A1D23C_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = GetAddScore_get_AddScore_m004E61865019D873D76613EFB76B2619193B5446_inline(L_20, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_21, (bool)0, /*hidden argument*/NULL);
		// GameObject.Find("HealthBar").GetComponent<GetAddScore>().AddScore.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22;
		L_22 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral162E86C91F5205A141B28109C3F1C992A8B0D613, /*hidden argument*/NULL);
		GetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83 * L_23;
		L_23 = GameObject_GetComponent_TisGetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83_m3DF57F4764A980487940B6B376435B8024A1D23C(L_22, /*hidden argument*/GameObject_GetComponent_TisGetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83_m3DF57F4764A980487940B6B376435B8024A1D23C_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24;
		L_24 = GetAddScore_get_AddScore_m004E61865019D873D76613EFB76B2619193B5446_inline(L_23, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_24, (bool)0, /*hidden argument*/NULL);
		// statsPanel.SetActive(true);
		Driver_t2AD30C27D04F1E04A5C815739AB520064BCE9AE0 * L_25 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26 = L_25->get_statsPanel_12();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_26, (bool)1, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Driver/<endGame>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CendGameU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m19729C96DB6D926DB2CCBCE8CC34089E4EBB6A22 (U3CendGameU3Ed__15_tCC463386A1B61B40FD8EECE6B47D4AC99BBCCAFC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Driver/<endGame>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CendGameU3Ed__15_System_Collections_IEnumerator_Reset_m680890F6D3D7A82AEDBC3CAC04E0C2ADA7C7FB35 (U3CendGameU3Ed__15_tCC463386A1B61B40FD8EECE6B47D4AC99BBCCAFC * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CendGameU3Ed__15_System_Collections_IEnumerator_Reset_m680890F6D3D7A82AEDBC3CAC04E0C2ADA7C7FB35_RuntimeMethod_var)));
	}
}
// System.Object Driver/<endGame>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CendGameU3Ed__15_System_Collections_IEnumerator_get_Current_mB1B6C6130D6579CC86DF71D6A64E93973986082A (U3CendGameU3Ed__15_tCC463386A1B61B40FD8EECE6B47D4AC99BBCCAFC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Driver/<speed>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CspeedU3Ed__14__ctor_m0C7F31EC3C86D2D741E87C4A8058A333132F0C57 (U3CspeedU3Ed__14_tAED4F0B8D128FBFC7AF15B2386463C1466BFB5E0 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Driver/<speed>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CspeedU3Ed__14_System_IDisposable_Dispose_m30A4763611311DACD5602E125747A411CD145DDF (U3CspeedU3Ed__14_tAED4F0B8D128FBFC7AF15B2386463C1466BFB5E0 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Driver/<speed>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CspeedU3Ed__14_MoveNext_m75B17BD00E27DD6074D382C46E79EC0DE36ECFC5 (U3CspeedU3Ed__14_tAED4F0B8D128FBFC7AF15B2386463C1466BFB5E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Driver_t2AD30C27D04F1E04A5C815739AB520064BCE9AE0 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Driver_t2AD30C27D04F1E04A5C815739AB520064BCE9AE0 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0043;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// moveSpeed = slowSpeed;
		Driver_t2AD30C27D04F1E04A5C815739AB520064BCE9AE0 * L_4 = V_1;
		Driver_t2AD30C27D04F1E04A5C815739AB520064BCE9AE0 * L_5 = V_1;
		float L_6 = L_5->get_slowSpeed_6();
		L_4->set_moveSpeed_7(L_6);
		// yield return new WaitForSeconds(2f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_7 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_7, (2.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_7);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0043:
	{
		__this->set_U3CU3E1__state_0((-1));
		// moveSpeed = normalSpeed;
		Driver_t2AD30C27D04F1E04A5C815739AB520064BCE9AE0 * L_8 = V_1;
		Driver_t2AD30C27D04F1E04A5C815739AB520064BCE9AE0 * L_9 = V_1;
		float L_10 = L_9->get_normalSpeed_5();
		L_8->set_moveSpeed_7(L_10);
		// }
		return (bool)0;
	}
}
// System.Object Driver/<speed>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CspeedU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mBAF5E4C6E1E4C7E6D3B9EC47CCD0AD0E2F073C4D (U3CspeedU3Ed__14_tAED4F0B8D128FBFC7AF15B2386463C1466BFB5E0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Driver/<speed>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CspeedU3Ed__14_System_Collections_IEnumerator_Reset_m0E4A4445111ED7A9BE3A388FFF87865332681A5A (U3CspeedU3Ed__14_tAED4F0B8D128FBFC7AF15B2386463C1466BFB5E0 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CspeedU3Ed__14_System_Collections_IEnumerator_Reset_m0E4A4445111ED7A9BE3A388FFF87865332681A5A_RuntimeMethod_var)));
	}
}
// System.Object Driver/<speed>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CspeedU3Ed__14_System_Collections_IEnumerator_get_Current_m72753232DB721B677407FF921C26DAE9541B8636 (U3CspeedU3Ed__14_tAED4F0B8D128FBFC7AF15B2386463C1466BFB5E0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameManager/<endGame>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CendGameU3Ed__15__ctor_m19531227FB6B47A68244B8D08E05DD976DE819AF (U3CendGameU3Ed__15_t253E2AF2E4FB090B5DC46DBC22B801A7E06390F9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GameManager/<endGame>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CendGameU3Ed__15_System_IDisposable_Dispose_m4DE20271816ACD20527F197D74F0C66A0CC6CE74 (U3CendGameU3Ed__15_t253E2AF2E4FB090B5DC46DBC22B801A7E06390F9 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GameManager/<endGame>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CendGameU3Ed__15_MoveNext_m39304E68B15DF577A620017A8A25538EE6A30B57 (U3CendGameU3Ed__15_t253E2AF2E4FB090B5DC46DBC22B801A7E06390F9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83_m3DF57F4764A980487940B6B376435B8024A1D23C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisStatsController_tBB477720ABA192D16DF50C483D289E3E5A889095_m3A8F8E23C79DAF9AE52E9EA41EEDBBCCEA041956_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TistimeScript_t676CF5FF3D174FDE41EE6B117EC3542CE225C182_mD0FC1FED96DB99D94449D7FDAA5054AFAE0AFCB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral162E86C91F5205A141B28109C3F1C992A8B0D613);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral241D63F73ED8ABEFF765B28C9791693C5814C752);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5ACDFF9A389332216C4D2638C239E2BD5667E2F0);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00ac;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// gameTime.GetComponent<timeScript> ().endGame ();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_4 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = L_4->get_gameTime_5();
		timeScript_t676CF5FF3D174FDE41EE6B117EC3542CE225C182 * L_6;
		L_6 = GameObject_GetComponent_TistimeScript_t676CF5FF3D174FDE41EE6B117EC3542CE225C182_mD0FC1FED96DB99D94449D7FDAA5054AFAE0AFCB6(L_5, /*hidden argument*/GameObject_GetComponent_TistimeScript_t676CF5FF3D174FDE41EE6B117EC3542CE225C182_mD0FC1FED96DB99D94449D7FDAA5054AFAE0AFCB6_RuntimeMethod_var);
		timeScript_endGame_mB0A702B5CA8CB1CFCC89EB4659D09E282B944BF6(L_6, /*hidden argument*/NULL);
		// GameObject.Find("ThirstBar").GetComponent<GetAddScore>().AddScore.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral241D63F73ED8ABEFF765B28C9791693C5814C752, /*hidden argument*/NULL);
		GetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83 * L_8;
		L_8 = GameObject_GetComponent_TisGetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83_m3DF57F4764A980487940B6B376435B8024A1D23C(L_7, /*hidden argument*/GameObject_GetComponent_TisGetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83_m3DF57F4764A980487940B6B376435B8024A1D23C_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = GetAddScore_get_AddScore_m004E61865019D873D76613EFB76B2619193B5446_inline(L_8, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)1, /*hidden argument*/NULL);
		// GameObject.Find("HealthBar").GetComponent<GetAddScore>().AddScore.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral162E86C91F5205A141B28109C3F1C992A8B0D613, /*hidden argument*/NULL);
		GetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83 * L_11;
		L_11 = GameObject_GetComponent_TisGetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83_m3DF57F4764A980487940B6B376435B8024A1D23C(L_10, /*hidden argument*/GameObject_GetComponent_TisGetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83_m3DF57F4764A980487940B6B376435B8024A1D23C_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = GetAddScore_get_AddScore_m004E61865019D873D76613EFB76B2619193B5446_inline(L_11, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_12, (bool)1, /*hidden argument*/NULL);
		// GameObject.Find("Stats").GetComponent<StatsController>().ChangeStats(StatsController.Stats.Thirst, 30);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral5ACDFF9A389332216C4D2638C239E2BD5667E2F0, /*hidden argument*/NULL);
		StatsController_tBB477720ABA192D16DF50C483D289E3E5A889095 * L_14;
		L_14 = GameObject_GetComponent_TisStatsController_tBB477720ABA192D16DF50C483D289E3E5A889095_m3A8F8E23C79DAF9AE52E9EA41EEDBBCCEA041956(L_13, /*hidden argument*/GameObject_GetComponent_TisStatsController_tBB477720ABA192D16DF50C483D289E3E5A889095_m3A8F8E23C79DAF9AE52E9EA41EEDBBCCEA041956_RuntimeMethod_var);
		StatsController_ChangeStats_mC249813A1FF6B782C2489B11D9D995C9C53B1908(L_14, 3, ((int32_t)30), /*hidden argument*/NULL);
		// GameObject.Find("Stats").GetComponent<StatsController>().ChangeStats(StatsController.Stats.Health, 10);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15;
		L_15 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral5ACDFF9A389332216C4D2638C239E2BD5667E2F0, /*hidden argument*/NULL);
		StatsController_tBB477720ABA192D16DF50C483D289E3E5A889095 * L_16;
		L_16 = GameObject_GetComponent_TisStatsController_tBB477720ABA192D16DF50C483D289E3E5A889095_m3A8F8E23C79DAF9AE52E9EA41EEDBBCCEA041956(L_15, /*hidden argument*/GameObject_GetComponent_TisStatsController_tBB477720ABA192D16DF50C483D289E3E5A889095_m3A8F8E23C79DAF9AE52E9EA41EEDBBCCEA041956_RuntimeMethod_var);
		StatsController_ChangeStats_mC249813A1FF6B782C2489B11D9D995C9C53B1908(L_16, 0, ((int32_t)10), /*hidden argument*/NULL);
		// yield return new WaitForSeconds(2f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_17 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_17, (2.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_17);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00ac:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Time.timeScale = 0f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
		// GameObject.Find("ThirstBar").GetComponent<GetAddScore>().AddScore.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18;
		L_18 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral241D63F73ED8ABEFF765B28C9791693C5814C752, /*hidden argument*/NULL);
		GetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83 * L_19;
		L_19 = GameObject_GetComponent_TisGetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83_m3DF57F4764A980487940B6B376435B8024A1D23C(L_18, /*hidden argument*/GameObject_GetComponent_TisGetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83_m3DF57F4764A980487940B6B376435B8024A1D23C_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = GetAddScore_get_AddScore_m004E61865019D873D76613EFB76B2619193B5446_inline(L_19, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_20, (bool)0, /*hidden argument*/NULL);
		// GameObject.Find("HealthBar").GetComponent<GetAddScore>().AddScore.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral162E86C91F5205A141B28109C3F1C992A8B0D613, /*hidden argument*/NULL);
		GetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83 * L_22;
		L_22 = GameObject_GetComponent_TisGetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83_m3DF57F4764A980487940B6B376435B8024A1D23C(L_21, /*hidden argument*/GameObject_GetComponent_TisGetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83_m3DF57F4764A980487940B6B376435B8024A1D23C_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = GetAddScore_get_AddScore_m004E61865019D873D76613EFB76B2619193B5446_inline(L_22, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_23, (bool)0, /*hidden argument*/NULL);
		// statsPanel.SetActive(true);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_24 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = L_24->get_statsPanel_7();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_25, (bool)1, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object GameManager/<endGame>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CendGameU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m71808A4F11818E1777C14E7FB01EDBD6C8B10B9E (U3CendGameU3Ed__15_t253E2AF2E4FB090B5DC46DBC22B801A7E06390F9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GameManager/<endGame>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CendGameU3Ed__15_System_Collections_IEnumerator_Reset_m3847E4B27D98016D5D574A12E34B9E35DC125513 (U3CendGameU3Ed__15_t253E2AF2E4FB090B5DC46DBC22B801A7E06390F9 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CendGameU3Ed__15_System_Collections_IEnumerator_Reset_m3847E4B27D98016D5D574A12E34B9E35DC125513_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<endGame>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CendGameU3Ed__15_System_Collections_IEnumerator_get_Current_mCAF09273D74A9BEC5D2292F347E9DFCD35B557B0 (U3CendGameU3Ed__15_t253E2AF2E4FB090B5DC46DBC22B801A7E06390F9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameManager/<incorrect>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CincorrectU3Ed__14__ctor_m657516299E85CB945519E11D945AC719528672D6 (U3CincorrectU3Ed__14_tFE7CCCAA58DE29E1D3B8C29A43713ABC6A845316 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GameManager/<incorrect>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CincorrectU3Ed__14_System_IDisposable_Dispose_m0115622326F6E9B7840935B864E66B5EA90A974D (U3CincorrectU3Ed__14_tFE7CCCAA58DE29E1D3B8C29A43713ABC6A845316 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GameManager/<incorrect>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CincorrectU3Ed__14_MoveNext_mA57B4B6EB3B163AEA0E05A78C99B602DEB7B3643 (U3CincorrectU3Ed__14_tFE7CCCAA58DE29E1D3B8C29A43713ABC6A845316 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0053;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Droplets [i].GetComponent<Image>().color = Color.red;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_4 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_5 = L_4->get_Droplets_4();
		int32_t L_6 = __this->get_i_3();
		int32_t L_7 = L_6;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_9;
		L_9 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_8, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_10;
		L_10 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_9, L_10);
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_11 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_11, (0.5f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_11);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0053:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Droplets [i].GetComponent<Image>().color = new Color32(60, 159, 219, 255);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_12 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_13 = L_12->get_Droplets_4();
		int32_t L_14 = __this->get_i_3();
		int32_t L_15 = L_14;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_17;
		L_17 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_16, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94((&L_18), (uint8_t)((int32_t)60), (uint8_t)((int32_t)159), (uint8_t)((int32_t)219), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_19;
		L_19 = Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623(L_18, /*hidden argument*/NULL);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_17, L_19);
		// }
		return (bool)0;
	}
}
// System.Object GameManager/<incorrect>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CincorrectU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2DDA01A6631C4588EC71D23D0A6F306F7D1103DF (U3CincorrectU3Ed__14_tFE7CCCAA58DE29E1D3B8C29A43713ABC6A845316 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GameManager/<incorrect>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CincorrectU3Ed__14_System_Collections_IEnumerator_Reset_m488219B6D5A22DD870987E85BE1D20CD4FF32357 (U3CincorrectU3Ed__14_tFE7CCCAA58DE29E1D3B8C29A43713ABC6A845316 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CincorrectU3Ed__14_System_Collections_IEnumerator_Reset_m488219B6D5A22DD870987E85BE1D20CD4FF32357_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<incorrect>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CincorrectU3Ed__14_System_Collections_IEnumerator_get_Current_m15D8DDAA44563D0F7859CB38CF566080BEDF9457 (U3CincorrectU3Ed__14_tFE7CCCAA58DE29E1D3B8C29A43713ABC6A845316 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Controllers.SceneController/<LoadScene>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneU3Ed__6__ctor_m2CC4C250BDB2BF40E7310F50A436344533C647CE (U3CLoadSceneU3Ed__6_tF321E46183EB6FBD589D29E33DFF2E8D939D324D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Controllers.SceneController/<LoadScene>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneU3Ed__6_System_IDisposable_Dispose_mDFCBC6BD11B068C851D4D5D220EDE25A6474E425 (U3CLoadSceneU3Ed__6_tF321E46183EB6FBD589D29E33DFF2E8D939D324D * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Controllers.SceneController/<LoadScene>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadSceneU3Ed__6_MoveNext_m1AF348A826720BBD09E3D7137D0A2CBD9CD9065B (U3CLoadSceneU3Ed__6_tF321E46183EB6FBD589D29E33DFF2E8D939D324D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BAB35B0590CD96882325346D548D4B3D8FF5C14);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		SceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0064;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// transitionPanelAnimator.Play("CircleWipeIn");
		SceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D * L_4 = V_1;
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_5 = L_4->get_transitionPanelAnimator_5();
		Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C(L_5, _stringLiteral5BAB35B0590CD96882325346D548D4B3D8FF5C14, /*hidden argument*/NULL);
		// AsyncOperation asyncOperation = SceneManager.LoadSceneAsync(sceneName);
		String_t* L_6 = __this->get_sceneName_3();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_7;
		L_7 = SceneManager_LoadSceneAsync_m9710D4ECD4D8BE75ACB7794E5300288C38A8A6BA(L_6, /*hidden argument*/NULL);
		__this->set_U3CasyncOperationU3E5__2_4(L_7);
		// asyncOperation.allowSceneActivation = false;
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_8 = __this->get_U3CasyncOperationU3E5__2_4();
		AsyncOperation_set_allowSceneActivation_mFA2C12F4A7D138D4CED4BA72F9E97AF0BD117C33(L_8, (bool)0, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(0.8f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_9 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_9, (0.800000012f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_9);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0064:
	{
		__this->set_U3CU3E1__state_0((-1));
		// asyncOperation.allowSceneActivation = true;
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_10 = __this->get_U3CasyncOperationU3E5__2_4();
		AsyncOperation_set_allowSceneActivation_mFA2C12F4A7D138D4CED4BA72F9E97AF0BD117C33(L_10, (bool)1, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Controllers.SceneController/<LoadScene>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadSceneU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8C138E97BF1C08FE48DE6855AB83C454186300D7 (U3CLoadSceneU3Ed__6_tF321E46183EB6FBD589D29E33DFF2E8D939D324D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Controllers.SceneController/<LoadScene>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneU3Ed__6_System_Collections_IEnumerator_Reset_mB1C517BC57EB9288C7DCD1A49C2516E25BE305F4 (U3CLoadSceneU3Ed__6_tF321E46183EB6FBD589D29E33DFF2E8D939D324D * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadSceneU3Ed__6_System_Collections_IEnumerator_Reset_mB1C517BC57EB9288C7DCD1A49C2516E25BE305F4_RuntimeMethod_var)));
	}
}
// System.Object Controllers.SceneController/<LoadScene>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadSceneU3Ed__6_System_Collections_IEnumerator_get_Current_m10083A76D914A8DE9C291707A1E5BAAB95AE09D8 (U3CLoadSceneU3Ed__6_tF321E46183EB6FBD589D29E33DFF2E8D939D324D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void StatsController/<DecreaseStat>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDecreaseStatU3Ed__11__ctor_m385C8CA7BDEFC82B20223E2B9DE63DF21BCCA2F8 (U3CDecreaseStatU3Ed__11_t4917F8E64D46140E0510AAC61E692EA94C1E3BF2 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void StatsController/<DecreaseStat>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDecreaseStatU3Ed__11_System_IDisposable_Dispose_m5A32E6781A37C55BB38C6D5B530C6CAA55D74E36 (U3CDecreaseStatU3Ed__11_t4917F8E64D46140E0510AAC61E692EA94C1E3BF2 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean StatsController/<DecreaseStat>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDecreaseStatU3Ed__11_MoveNext_m13D27EA2D9B57B58679B9D648738C71A99C18F00 (U3CDecreaseStatU3Ed__11_t4917F8E64D46140E0510AAC61E692EA94C1E3BF2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m8E5F0FC180955E92CB7AC73D8C05DCE3B586A8E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mF9210916F0878172593D361C0D57EB02043E606D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StatsController_tBB477720ABA192D16DF50C483D289E3E5A889095 * V_1 = NULL;
	float V_2 = 0.0f;
	Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D * V_3 = NULL;
	int32_t V_4 = 0;
	float G_B7_0 = 0.0f;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		StatsController_tBB477720ABA192D16DF50C483D289E3E5A889095 * L_1 = __this->get_U3CU3E4__this_4();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0053;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_009b;
	}

IL_0020:
	{
		// var secondsToWait = stat == Stats.Health ? repeatRate * multiplier : repeatRate;
		int32_t L_4 = __this->get_stat_2();
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		float L_5 = __this->get_repeatRate_3();
		G_B7_0 = L_5;
		goto IL_003d;
	}

IL_0030:
	{
		float L_6 = __this->get_repeatRate_3();
		StatsController_tBB477720ABA192D16DF50C483D289E3E5A889095 * L_7 = V_1;
		float L_8 = L_7->get_multiplier_6();
		G_B7_0 = ((float)il2cpp_codegen_multiply((float)L_6, (float)L_8));
	}

IL_003d:
	{
		V_2 = G_B7_0;
		// yield return new WaitForSeconds(secondsToWait);
		float L_9 = V_2;
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_10 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_10, L_9, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_10);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0053:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (stats[stat] > 0)
		StatsController_tBB477720ABA192D16DF50C483D289E3E5A889095 * L_11 = V_1;
		Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D * L_12 = L_11->get_stats_4();
		int32_t L_13 = __this->get_stat_2();
		int32_t L_14;
		L_14 = Dictionary_2_get_Item_m8E5F0FC180955E92CB7AC73D8C05DCE3B586A8E9(L_12, L_13, /*hidden argument*/Dictionary_2_get_Item_m8E5F0FC180955E92CB7AC73D8C05DCE3B586A8E9_RuntimeMethod_var);
		if ((((int32_t)L_14) <= ((int32_t)0)))
		{
			goto IL_008f;
		}
	}
	{
		// stats[stat] -= 1;
		StatsController_tBB477720ABA192D16DF50C483D289E3E5A889095 * L_15 = V_1;
		Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D * L_16 = L_15->get_stats_4();
		V_3 = L_16;
		int32_t L_17 = __this->get_stat_2();
		V_4 = L_17;
		Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D * L_18 = V_3;
		int32_t L_19 = V_4;
		Dictionary_2_t837E2F7CE88974C008C80546BF532B4FA554C85D * L_20 = V_3;
		int32_t L_21 = V_4;
		int32_t L_22;
		L_22 = Dictionary_2_get_Item_m8E5F0FC180955E92CB7AC73D8C05DCE3B586A8E9(L_20, L_21, /*hidden argument*/Dictionary_2_get_Item_m8E5F0FC180955E92CB7AC73D8C05DCE3B586A8E9_RuntimeMethod_var);
		Dictionary_2_set_Item_mF9210916F0878172593D361C0D57EB02043E606D(L_18, L_19, ((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)1)), /*hidden argument*/Dictionary_2_set_Item_mF9210916F0878172593D361C0D57EB02043E606D_RuntimeMethod_var);
	}

IL_008f:
	{
		// UpdateStatBar(stat);
		StatsController_tBB477720ABA192D16DF50C483D289E3E5A889095 * L_23 = V_1;
		int32_t L_24 = __this->get_stat_2();
		StatsController_UpdateStatBar_mD097B0E88FCF76215C227F26531FF202660F4DD5(L_23, L_24, /*hidden argument*/NULL);
	}

IL_009b:
	{
		// while (isAlive)
		StatsController_tBB477720ABA192D16DF50C483D289E3E5A889095 * L_25 = V_1;
		bool L_26 = L_25->get_isAlive_5();
		if (L_26)
		{
			goto IL_0020;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object StatsController/<DecreaseStat>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDecreaseStatU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1EF19B669B00A83BC692A5C52023E01F7EC84CC9 (U3CDecreaseStatU3Ed__11_t4917F8E64D46140E0510AAC61E692EA94C1E3BF2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void StatsController/<DecreaseStat>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDecreaseStatU3Ed__11_System_Collections_IEnumerator_Reset_mD95AB0D2B67B3D29B23DEA3E7932ECE8CC96E508 (U3CDecreaseStatU3Ed__11_t4917F8E64D46140E0510AAC61E692EA94C1E3BF2 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDecreaseStatU3Ed__11_System_Collections_IEnumerator_Reset_mD95AB0D2B67B3D29B23DEA3E7932ECE8CC96E508_RuntimeMethod_var)));
	}
}
// System.Object StatsController/<DecreaseStat>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDecreaseStatU3Ed__11_System_Collections_IEnumerator_get_Current_mC7E65DA736DA6DA509BF2F506FDA19092A3C6DFE (U3CDecreaseStatU3Ed__11_t4917F8E64D46140E0510AAC61E692EA94C1E3BF2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TimeManager/<endGame>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CendGameU3Ed__6__ctor_m4F49D65B27DDD5D7C659F75E0007EF5116C8F08E (U3CendGameU3Ed__6_t05CCEFCBCC960836A17AEB1322F2E62BFEE00D2E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TimeManager/<endGame>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CendGameU3Ed__6_System_IDisposable_Dispose_m9DDDD790F9D55B55A6AFEF3D2093D99B8D0FFBFD (U3CendGameU3Ed__6_t05CCEFCBCC960836A17AEB1322F2E62BFEE00D2E * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TimeManager/<endGame>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CendGameU3Ed__6_MoveNext_mA095BACAFB4E575460E66CE96AC2138CD013FAD8 (U3CendGameU3Ed__6_t05CCEFCBCC960836A17AEB1322F2E62BFEE00D2E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83_m3DF57F4764A980487940B6B376435B8024A1D23C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisStatsController_tBB477720ABA192D16DF50C483D289E3E5A889095_m3A8F8E23C79DAF9AE52E9EA41EEDBBCCEA041956_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral162E86C91F5205A141B28109C3F1C992A8B0D613);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5ACDFF9A389332216C4D2638C239E2BD5667E2F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral632E4CA0EE96B461C1379977080C85B82BEFC57D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TimeManager_t7C9EC9E1F31A3BAAE33B119C0B91347D37ABAF82 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TimeManager_t7C9EC9E1F31A3BAAE33B119C0B91347D37ABAF82 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00b1;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// timeLabel.GetComponent<Text>().color = Color.yellow;
		TimeManager_t7C9EC9E1F31A3BAAE33B119C0B91347D37ABAF82 * L_4 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = L_4->get_timeLabel_4();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_6;
		L_6 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_5, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7;
		L_7 = Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1(/*hidden argument*/NULL);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_6, L_7);
		// GameObject.Find("EnergyBar").GetComponent<GetAddScore>().AddScore.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral632E4CA0EE96B461C1379977080C85B82BEFC57D, /*hidden argument*/NULL);
		GetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83 * L_9;
		L_9 = GameObject_GetComponent_TisGetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83_m3DF57F4764A980487940B6B376435B8024A1D23C(L_8, /*hidden argument*/GameObject_GetComponent_TisGetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83_m3DF57F4764A980487940B6B376435B8024A1D23C_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = GetAddScore_get_AddScore_m004E61865019D873D76613EFB76B2619193B5446_inline(L_9, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_10, (bool)1, /*hidden argument*/NULL);
		// GameObject.Find("HealthBar").GetComponent<GetAddScore>().AddScore.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral162E86C91F5205A141B28109C3F1C992A8B0D613, /*hidden argument*/NULL);
		GetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83 * L_12;
		L_12 = GameObject_GetComponent_TisGetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83_m3DF57F4764A980487940B6B376435B8024A1D23C(L_11, /*hidden argument*/GameObject_GetComponent_TisGetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83_m3DF57F4764A980487940B6B376435B8024A1D23C_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = GetAddScore_get_AddScore_m004E61865019D873D76613EFB76B2619193B5446_inline(L_12, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_13, (bool)1, /*hidden argument*/NULL);
		// GameObject.Find("Stats").GetComponent<StatsController>().ChangeStats(StatsController.Stats.Energy, 30);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral5ACDFF9A389332216C4D2638C239E2BD5667E2F0, /*hidden argument*/NULL);
		StatsController_tBB477720ABA192D16DF50C483D289E3E5A889095 * L_15;
		L_15 = GameObject_GetComponent_TisStatsController_tBB477720ABA192D16DF50C483D289E3E5A889095_m3A8F8E23C79DAF9AE52E9EA41EEDBBCCEA041956(L_14, /*hidden argument*/GameObject_GetComponent_TisStatsController_tBB477720ABA192D16DF50C483D289E3E5A889095_m3A8F8E23C79DAF9AE52E9EA41EEDBBCCEA041956_RuntimeMethod_var);
		StatsController_ChangeStats_mC249813A1FF6B782C2489B11D9D995C9C53B1908(L_15, 1, ((int32_t)30), /*hidden argument*/NULL);
		// GameObject.Find("Stats").GetComponent<StatsController>().ChangeStats(StatsController.Stats.Health, 10);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral5ACDFF9A389332216C4D2638C239E2BD5667E2F0, /*hidden argument*/NULL);
		StatsController_tBB477720ABA192D16DF50C483D289E3E5A889095 * L_17;
		L_17 = GameObject_GetComponent_TisStatsController_tBB477720ABA192D16DF50C483D289E3E5A889095_m3A8F8E23C79DAF9AE52E9EA41EEDBBCCEA041956(L_16, /*hidden argument*/GameObject_GetComponent_TisStatsController_tBB477720ABA192D16DF50C483D289E3E5A889095_m3A8F8E23C79DAF9AE52E9EA41EEDBBCCEA041956_RuntimeMethod_var);
		StatsController_ChangeStats_mC249813A1FF6B782C2489B11D9D995C9C53B1908(L_17, 0, ((int32_t)10), /*hidden argument*/NULL);
		// yield return new WaitForSeconds(2f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_18 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_18, (2.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_18);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00b1:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Time.timeScale = 0f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
		// GameObject.Find("EnergyBar").GetComponent<GetAddScore>().AddScore.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
		L_19 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral632E4CA0EE96B461C1379977080C85B82BEFC57D, /*hidden argument*/NULL);
		GetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83 * L_20;
		L_20 = GameObject_GetComponent_TisGetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83_m3DF57F4764A980487940B6B376435B8024A1D23C(L_19, /*hidden argument*/GameObject_GetComponent_TisGetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83_m3DF57F4764A980487940B6B376435B8024A1D23C_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = GetAddScore_get_AddScore_m004E61865019D873D76613EFB76B2619193B5446_inline(L_20, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_21, (bool)0, /*hidden argument*/NULL);
		// GameObject.Find("HealthBar").GetComponent<GetAddScore>().AddScore.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22;
		L_22 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral162E86C91F5205A141B28109C3F1C992A8B0D613, /*hidden argument*/NULL);
		GetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83 * L_23;
		L_23 = GameObject_GetComponent_TisGetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83_m3DF57F4764A980487940B6B376435B8024A1D23C(L_22, /*hidden argument*/GameObject_GetComponent_TisGetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83_m3DF57F4764A980487940B6B376435B8024A1D23C_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24;
		L_24 = GetAddScore_get_AddScore_m004E61865019D873D76613EFB76B2619193B5446_inline(L_23, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_24, (bool)0, /*hidden argument*/NULL);
		// statsPanel.SetActive(true);
		TimeManager_t7C9EC9E1F31A3BAAE33B119C0B91347D37ABAF82 * L_25 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26 = L_25->get_statsPanel_5();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_26, (bool)1, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object TimeManager/<endGame>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CendGameU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6CD1A8FF336B08536155BD10550FD34A81EB132E (U3CendGameU3Ed__6_t05CCEFCBCC960836A17AEB1322F2E62BFEE00D2E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TimeManager/<endGame>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CendGameU3Ed__6_System_Collections_IEnumerator_Reset_m9C0EDF4FC96F6DCD2DBAE1DEE2ADFB4A83FB4A1F (U3CendGameU3Ed__6_t05CCEFCBCC960836A17AEB1322F2E62BFEE00D2E * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CendGameU3Ed__6_System_Collections_IEnumerator_Reset_m9C0EDF4FC96F6DCD2DBAE1DEE2ADFB4A83FB4A1F_RuntimeMethod_var)));
	}
}
// System.Object TimeManager/<endGame>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CendGameU3Ed__6_System_Collections_IEnumerator_get_Current_mB2ABF3CB0C111E348A12AFFE7680B1E0F7EFF18C (U3CendGameU3Ed__6_t05CCEFCBCC960836A17AEB1322F2E62BFEE00D2E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TrafficLight/<Cycle>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCycleU3Ed__5__ctor_mE65C5379FD0F6B514882C9A95D46B6299BA86A2A (U3CCycleU3Ed__5_t31732404568B7EF11413CAAF13D0B07C6E7AC9A2 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TrafficLight/<Cycle>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCycleU3Ed__5_System_IDisposable_Dispose_m5A98CC785C5BAAB052E24A6362A8C6BE24BDCED1 (U3CCycleU3Ed__5_t31732404568B7EF11413CAAF13D0B07C6E7AC9A2 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TrafficLight/<Cycle>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCycleU3Ed__5_MoveNext_m19D038238F37E6C3985BE192E632464E054C1D8A (U3CCycleU3Ed__5_t31732404568B7EF11413CAAF13D0B07C6E7AC9A2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TrafficLight_tD55F68E16E18C0A5F32B506715F5BE0989084ABD * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TrafficLight_tD55F68E16E18C0A5F32B506715F5BE0989084ABD * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0075;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_001e:
	{
		// lightSwitch = !lightSwitch;
		TrafficLight_tD55F68E16E18C0A5F32B506715F5BE0989084ABD * L_4 = V_1;
		TrafficLight_tD55F68E16E18C0A5F32B506715F5BE0989084ABD * L_5 = V_1;
		bool L_6 = L_5->get_lightSwitch_6();
		L_4->set_lightSwitch_6((bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0));
		// Green.SetActive(lightSwitch);
		TrafficLight_tD55F68E16E18C0A5F32B506715F5BE0989084ABD * L_7 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = L_7->get_Green_4();
		TrafficLight_tD55F68E16E18C0A5F32B506715F5BE0989084ABD * L_9 = V_1;
		bool L_10 = L_9->get_lightSwitch_6();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, L_10, /*hidden argument*/NULL);
		// Red.SetActive(!lightSwitch);
		TrafficLight_tD55F68E16E18C0A5F32B506715F5BE0989084ABD * L_11 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = L_11->get_Red_5();
		TrafficLight_tD55F68E16E18C0A5F32B506715F5BE0989084ABD * L_13 = V_1;
		bool L_14 = L_13->get_lightSwitch_6();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_12, (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// yield return new WaitForSeconds(Random.Range(2f, 5f));
		float L_15;
		L_15 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((2.0f), (5.0f), /*hidden argument*/NULL);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_16 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_16, L_15, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_16);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0075:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while(true){
		goto IL_001e;
	}
}
// System.Object TrafficLight/<Cycle>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCycleU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m400B2B5267EA0C31CD1C508B1343FAC989934B79 (U3CCycleU3Ed__5_t31732404568B7EF11413CAAF13D0B07C6E7AC9A2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TrafficLight/<Cycle>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCycleU3Ed__5_System_Collections_IEnumerator_Reset_m0007480788D5919CBF8FC9601A7EF7692B585FB4 (U3CCycleU3Ed__5_t31732404568B7EF11413CAAF13D0B07C6E7AC9A2 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCycleU3Ed__5_System_Collections_IEnumerator_Reset_m0007480788D5919CBF8FC9601A7EF7692B585FB4_RuntimeMethod_var)));
	}
}
// System.Object TrafficLight/<Cycle>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCycleU3Ed__5_System_Collections_IEnumerator_get_Current_m0AFF30F16ADD8B99377C363F183ED154F1AA2EBE (U3CCycleU3Ed__5_t31732404568B7EF11413CAAF13D0B07C6E7AC9A2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void cardScript/<pause>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CpauseU3Ed__20__ctor_mE6177DCAC1CC462CC27907717D74399AEB34FEE9 (U3CpauseU3Ed__20_t80A82111B292E0B9D43B8B71F99F25A6BDD0EEC8 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void cardScript/<pause>d__20::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CpauseU3Ed__20_System_IDisposable_Dispose_m588FE68E0C116DC8C765EBACE64459B1D2278DF6 (U3CpauseU3Ed__20_t80A82111B292E0B9D43B8B71F99F25A6BDD0EEC8 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean cardScript/<pause>d__20::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CpauseU3Ed__20_MoveNext_mD312ED5EF9A8CD0BF7580A953007AB7574145E20 (U3CpauseU3Ed__20_t80A82111B292E0B9D43B8B71F99F25A6BDD0EEC8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(0.2F);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, (0.200000003f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0037:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if(_state == 0)
		cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6 * L_5 = V_1;
		int32_t L_6 = L_5->get__state_5();
		if (L_6)
		{
			goto IL_0059;
		}
	}
	{
		// GetComponent<Image>().sprite = _cardBack;
		cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6 * L_7 = V_1;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB(L_7, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6 * L_9 = V_1;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_10 = L_9->get__cardBack_8();
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_8, L_10, /*hidden argument*/NULL);
		goto IL_0073;
	}

IL_0059:
	{
		// else if(_state == 1)
		cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6 * L_11 = V_1;
		int32_t L_12 = L_11->get__state_5();
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0073;
		}
	}
	{
		// GetComponent<Image>().sprite = _cardFace;
		cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6 * L_13 = V_1;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_14;
		L_14 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB(L_13, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6 * L_15 = V_1;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_16 = L_15->get__cardFace_9();
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_14, L_16, /*hidden argument*/NULL);
	}

IL_0073:
	{
		// DO_NOT = false;
		IL2CPP_RUNTIME_CLASS_INIT(cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6_il2cpp_TypeInfo_var);
		((cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6_StaticFields*)il2cpp_codegen_static_fields_for(cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6_il2cpp_TypeInfo_var))->set_DO_NOT_4((bool)0);
		// }
		return (bool)0;
	}
}
// System.Object cardScript/<pause>d__20::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CpauseU3Ed__20_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2F5FFC958B717C2284157664F3B1FD2965B59EDD (U3CpauseU3Ed__20_t80A82111B292E0B9D43B8B71F99F25A6BDD0EEC8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void cardScript/<pause>d__20::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CpauseU3Ed__20_System_Collections_IEnumerator_Reset_m3C2834DA90DD095FE0EFA84148099534332E168A (U3CpauseU3Ed__20_t80A82111B292E0B9D43B8B71F99F25A6BDD0EEC8 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CpauseU3Ed__20_System_Collections_IEnumerator_Reset_m3C2834DA90DD095FE0EFA84148099534332E168A_RuntimeMethod_var)));
	}
}
// System.Object cardScript/<pause>d__20::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CpauseU3Ed__20_System_Collections_IEnumerator_get_Current_m3BBD2DABDF3896115F0792CB206FF363C789D914 (U3CpauseU3Ed__20_t80A82111B292E0B9D43B8B71F99F25A6BDD0EEC8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void gameManager/<endGame>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CendGameU3Ed__15__ctor_m27E79C32F193BB85C35EF66EA77ED01C92CF38DA (U3CendGameU3Ed__15_t3938227E4045198C45B0340DABB7F1EF91CF0B5B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void gameManager/<endGame>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CendGameU3Ed__15_System_IDisposable_Dispose_m552B729A8BA27B2B253BE89F4363439293D8A476 (U3CendGameU3Ed__15_t3938227E4045198C45B0340DABB7F1EF91CF0B5B * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean gameManager/<endGame>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CendGameU3Ed__15_MoveNext_mE7D5E0481887366CA07A8761DD28F1F23C296AD5 (U3CendGameU3Ed__15_t3938227E4045198C45B0340DABB7F1EF91CF0B5B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83_m3DF57F4764A980487940B6B376435B8024A1D23C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisStatsController_tBB477720ABA192D16DF50C483D289E3E5A889095_m3A8F8E23C79DAF9AE52E9EA41EEDBBCCEA041956_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TistimeScript_t676CF5FF3D174FDE41EE6B117EC3542CE225C182_mD0FC1FED96DB99D94449D7FDAA5054AFAE0AFCB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral162E86C91F5205A141B28109C3F1C992A8B0D613);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5ACDFF9A389332216C4D2638C239E2BD5667E2F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C664E07394AE1D3EF0A9AD2790A4DB84498DD15);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	gameManager_t2A9919D7CB9773B3211A72C5DA02B305DE63B8AB * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		gameManager_t2A9919D7CB9773B3211A72C5DA02B305DE63B8AB * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00ac;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// gameTime.GetComponent<timeScript> ().endGame ();
		gameManager_t2A9919D7CB9773B3211A72C5DA02B305DE63B8AB * L_4 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = L_4->get_gameTime_7();
		timeScript_t676CF5FF3D174FDE41EE6B117EC3542CE225C182 * L_6;
		L_6 = GameObject_GetComponent_TistimeScript_t676CF5FF3D174FDE41EE6B117EC3542CE225C182_mD0FC1FED96DB99D94449D7FDAA5054AFAE0AFCB6(L_5, /*hidden argument*/GameObject_GetComponent_TistimeScript_t676CF5FF3D174FDE41EE6B117EC3542CE225C182_mD0FC1FED96DB99D94449D7FDAA5054AFAE0AFCB6_RuntimeMethod_var);
		timeScript_endGame_mB0A702B5CA8CB1CFCC89EB4659D09E282B944BF6(L_6, /*hidden argument*/NULL);
		// GameObject.Find("AmusementBar").GetComponent<GetAddScore>().AddScore.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral8C664E07394AE1D3EF0A9AD2790A4DB84498DD15, /*hidden argument*/NULL);
		GetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83 * L_8;
		L_8 = GameObject_GetComponent_TisGetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83_m3DF57F4764A980487940B6B376435B8024A1D23C(L_7, /*hidden argument*/GameObject_GetComponent_TisGetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83_m3DF57F4764A980487940B6B376435B8024A1D23C_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = GetAddScore_get_AddScore_m004E61865019D873D76613EFB76B2619193B5446_inline(L_8, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)1, /*hidden argument*/NULL);
		// GameObject.Find("HealthBar").GetComponent<GetAddScore>().AddScore.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral162E86C91F5205A141B28109C3F1C992A8B0D613, /*hidden argument*/NULL);
		GetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83 * L_11;
		L_11 = GameObject_GetComponent_TisGetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83_m3DF57F4764A980487940B6B376435B8024A1D23C(L_10, /*hidden argument*/GameObject_GetComponent_TisGetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83_m3DF57F4764A980487940B6B376435B8024A1D23C_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = GetAddScore_get_AddScore_m004E61865019D873D76613EFB76B2619193B5446_inline(L_11, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_12, (bool)1, /*hidden argument*/NULL);
		// GameObject.Find("Stats").GetComponent<StatsController>().ChangeStats(StatsController.Stats.Amusement, 30);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral5ACDFF9A389332216C4D2638C239E2BD5667E2F0, /*hidden argument*/NULL);
		StatsController_tBB477720ABA192D16DF50C483D289E3E5A889095 * L_14;
		L_14 = GameObject_GetComponent_TisStatsController_tBB477720ABA192D16DF50C483D289E3E5A889095_m3A8F8E23C79DAF9AE52E9EA41EEDBBCCEA041956(L_13, /*hidden argument*/GameObject_GetComponent_TisStatsController_tBB477720ABA192D16DF50C483D289E3E5A889095_m3A8F8E23C79DAF9AE52E9EA41EEDBBCCEA041956_RuntimeMethod_var);
		StatsController_ChangeStats_mC249813A1FF6B782C2489B11D9D995C9C53B1908(L_14, 4, ((int32_t)30), /*hidden argument*/NULL);
		// GameObject.Find("Stats").GetComponent<StatsController>().ChangeStats(StatsController.Stats.Health, 10);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15;
		L_15 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral5ACDFF9A389332216C4D2638C239E2BD5667E2F0, /*hidden argument*/NULL);
		StatsController_tBB477720ABA192D16DF50C483D289E3E5A889095 * L_16;
		L_16 = GameObject_GetComponent_TisStatsController_tBB477720ABA192D16DF50C483D289E3E5A889095_m3A8F8E23C79DAF9AE52E9EA41EEDBBCCEA041956(L_15, /*hidden argument*/GameObject_GetComponent_TisStatsController_tBB477720ABA192D16DF50C483D289E3E5A889095_m3A8F8E23C79DAF9AE52E9EA41EEDBBCCEA041956_RuntimeMethod_var);
		StatsController_ChangeStats_mC249813A1FF6B782C2489B11D9D995C9C53B1908(L_16, 0, ((int32_t)10), /*hidden argument*/NULL);
		// yield return new WaitForSeconds(2f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_17 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_17, (2.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_17);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00ac:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Time.timeScale = 0f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
		// GameObject.Find("AmusementBar").GetComponent<GetAddScore>().AddScore.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18;
		L_18 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral8C664E07394AE1D3EF0A9AD2790A4DB84498DD15, /*hidden argument*/NULL);
		GetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83 * L_19;
		L_19 = GameObject_GetComponent_TisGetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83_m3DF57F4764A980487940B6B376435B8024A1D23C(L_18, /*hidden argument*/GameObject_GetComponent_TisGetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83_m3DF57F4764A980487940B6B376435B8024A1D23C_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = GetAddScore_get_AddScore_m004E61865019D873D76613EFB76B2619193B5446_inline(L_19, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_20, (bool)0, /*hidden argument*/NULL);
		// GameObject.Find("HealthBar").GetComponent<GetAddScore>().AddScore.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral162E86C91F5205A141B28109C3F1C992A8B0D613, /*hidden argument*/NULL);
		GetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83 * L_22;
		L_22 = GameObject_GetComponent_TisGetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83_m3DF57F4764A980487940B6B376435B8024A1D23C(L_21, /*hidden argument*/GameObject_GetComponent_TisGetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83_m3DF57F4764A980487940B6B376435B8024A1D23C_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = GetAddScore_get_AddScore_m004E61865019D873D76613EFB76B2619193B5446_inline(L_22, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_23, (bool)0, /*hidden argument*/NULL);
		// statsPanel.SetActive(true);
		gameManager_t2A9919D7CB9773B3211A72C5DA02B305DE63B8AB * L_24 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = L_24->get_statsPanel_9();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_25, (bool)1, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object gameManager/<endGame>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CendGameU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1FA904187DBEAF40B5F41BC0E62956BEA5971786 (U3CendGameU3Ed__15_t3938227E4045198C45B0340DABB7F1EF91CF0B5B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void gameManager/<endGame>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CendGameU3Ed__15_System_Collections_IEnumerator_Reset_m9F81B641846ED624BEA3B47D13C9EB3B6657010E (U3CendGameU3Ed__15_t3938227E4045198C45B0340DABB7F1EF91CF0B5B * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CendGameU3Ed__15_System_Collections_IEnumerator_Reset_m9F81B641846ED624BEA3B47D13C9EB3B6657010E_RuntimeMethod_var)));
	}
}
// System.Object gameManager/<endGame>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CendGameU3Ed__15_System_Collections_IEnumerator_get_Current_mC70A737CB4D90B5F5EC925CDB3E9AB815D2076E9 (U3CendGameU3Ed__15_t3938227E4045198C45B0340DABB7F1EF91CF0B5B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * EventSystem_get_currentSelectedGameObject_m999F9BFD4C20E2F00C56D4FED89602B6077EF70D_inline (EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * __this, const RuntimeMethod* method)
{
	{
		// get { return m_CurrentSelected; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_CurrentSelected_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Droplet_set_position_m3916063F9B041010885703B30563E031881A996C_inline (Droplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method)
{
	{
		// set { _position = value; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___value0;
		__this->set__position_5(L_0);
		// set { _position = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Droplet_set_pressed_mC474246005E8F80599D7DF6160879625780B90B7_inline (Droplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { _pressed = value; }
		bool L_0 = ___value0;
		__this->set__pressed_7(L_0);
		// set { _pressed = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Droplet_set_state_mE58BAD4A0B67C6F1434AC2F1B5D33C45C0925BC8_inline (Droplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { _state = value; }
		bool L_0 = ___value0;
		__this->set__state_6(L_0);
		// set { _state = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Droplet_get_position_mB7F46C99396147DE2172BB76FEF273EFA5647720_inline (Droplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF * __this, const RuntimeMethod* method)
{
	{
		// get { return _position; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get__position_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Droplet_get_state_mA89FBFB0087AD4DA992C623C35651D8080224A2B_inline (Droplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF * __this, const RuntimeMethod* method)
{
	{
		// get { return _state; }
		bool L_0 = __this->get__state_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Droplet_get_pressed_m7F28B695068C001F36237B65AF39224AD5689C20_inline (Droplet_t96A2AD8084BF42AB94FE0F2A3903EAB9C0572BFF * __this, const RuntimeMethod* method)
{
	{
		// get { return _pressed; }
		bool L_0 = __this->get__pressed_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SceneController_get_mainMenu_m065BDF66295571B1BEAB022056E701F433BA3264_inline (SceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _mainMenu; }
		bool L_0 = ((SceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D_StaticFields*)il2cpp_codegen_static_fields_for(SceneController_tB99E8ADDEE0F33989DC8BF3EECB1A4B2DB6C296D_il2cpp_TypeInfo_var))->get__mainMenu_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * gameManager_getCardBack_m72B9BD9FFA168A4F5CB25B74A92823F3FB098822_inline (gameManager_t2A9919D7CB9773B3211A72C5DA02B305DE63B8AB * __this, const RuntimeMethod* method)
{
	{
		// return cardBack;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_0 = __this->get_cardBack_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool cardScript_get_initialized_mACFDBF3668EBDBD300E7B18CFA7AE5B646E8F4E0_inline (cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6 * __this, const RuntimeMethod* method)
{
	{
		// get { return _initialized; }
		bool L_0 = __this->get__initialized_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void cardScript_set_cardValue_mADAFD08DA1BBB92A6CB9A6F260C95C986DCECBE4_inline (cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { _cardValue = value; }
		int32_t L_0 = ___value0;
		__this->set__cardValue_6(L_0);
		// set { _cardValue = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void cardScript_set_initialized_mC63FC7D64384285BA9593FA8C55FD4878CAFE664_inline (cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { _initialized = value; }
		bool L_0 = ___value0;
		__this->set__initialized_7(L_0);
		// set { _initialized = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t cardScript_get_state_m486D8B461A15F1C86CF6B55D8D474914648AC9F3_inline (cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6 * __this, const RuntimeMethod* method)
{
	{
		// get { return _state; }
		int32_t L_0 = __this->get__state_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t cardScript_get_cardValue_m804850DC442696ACEEB20B33C94E9569F821FE3F_inline (cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6 * __this, const RuntimeMethod* method)
{
	{
		// get { return _cardValue; }
		int32_t L_0 = __this->get__cardValue_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void cardScript_set_state_mF527311F7B3ABC5D3932470C90611844AC9DA1D2_inline (cardScript_t2A352B6AB63C1733AAF6E7AEBDE8E84A9193EBB6 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { _state = value; }
		int32_t L_0 = ___value0;
		__this->set__state_5(L_0);
		// set { _state = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Selectable_get_interactable_m4231515CC3C861B431AA22FE3345F831389B3840_inline (Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Interactable; }
		bool L_0 = __this->get_m_Interactable_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAddScore_get_AddScore_m004E61865019D873D76613EFB76B2619193B5446_inline (GetAddScore_t3EEF06D9180A9A2446A51022AFD32CF8E5253C83 * __this, const RuntimeMethod* method)
{
	{
		// get { return _AddScore; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get__AddScore_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get__items_1();
		int32_t L_3 = ___index0;
		int32_t L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_2, (int32_t)L_3);
		return (int32_t)L_4;
	}
}
