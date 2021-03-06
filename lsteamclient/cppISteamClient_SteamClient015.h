#ifdef __cplusplus
extern "C" {
#endif
extern HSteamPipe cppISteamClient_SteamClient015_CreateSteamPipe(void *);
extern bool cppISteamClient_SteamClient015_BReleaseSteamPipe(void *, HSteamPipe);
extern HSteamUser cppISteamClient_SteamClient015_ConnectToGlobalUser(void *, HSteamPipe);
extern HSteamUser cppISteamClient_SteamClient015_CreateLocalUser(void *, HSteamPipe *, EAccountType);
extern void cppISteamClient_SteamClient015_ReleaseUser(void *, HSteamPipe, HSteamUser);
extern void *cppISteamClient_SteamClient015_GetISteamUser(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient015_GetISteamGameServer(void *, HSteamUser, HSteamPipe, const char *);
extern void cppISteamClient_SteamClient015_SetLocalIPBinding(void *, uint32, uint16);
extern void *cppISteamClient_SteamClient015_GetISteamFriends(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient015_GetISteamUtils(void *, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient015_GetISteamMatchmaking(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient015_GetISteamMatchmakingServers(void *, HSteamUser, HSteamPipe, const char *);
extern void * cppISteamClient_SteamClient015_GetISteamGenericInterface(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient015_GetISteamUserStats(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient015_GetISteamGameServerStats(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient015_GetISteamApps(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient015_GetISteamNetworking(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient015_GetISteamRemoteStorage(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient015_GetISteamScreenshots(void *, HSteamUser, HSteamPipe, const char *);
extern void cppISteamClient_SteamClient015_RunFrame(void *);
extern uint32 cppISteamClient_SteamClient015_GetIPCCallCount(void *);
extern void cppISteamClient_SteamClient015_SetWarningMessageHook(void *, SteamAPIWarningMessageHook_t);
extern bool cppISteamClient_SteamClient015_BShutdownIfAllPipesClosed(void *);
extern void *cppISteamClient_SteamClient015_GetISteamHTTP(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient015_GetISteamUnifiedMessages(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient015_GetISteamController(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient015_GetISteamUGC(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient015_GetISteamAppList(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient015_GetISteamMusic(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient015_GetISteamMusicRemote(void *, HSteamUser, HSteamPipe, const char *);
#ifdef __cplusplus
}
#endif
