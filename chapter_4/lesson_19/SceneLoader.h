#pragma once

#include <anax/World.hpp>
#include <boost/filesystem/path.hpp>
#include "libscene/AssetLoader.h"


class CSceneLoader
{
public:
    CSceneLoader(anax::World &world);

    // Загружает сцену из заданного JSON-файла
    void LoadScene(const boost::filesystem::path &path);

#if 0
    // Загружает SkyBox из заданного атласа (PLIST + изображение).
    void LoadSkybox(const boost::filesystem::path &path);
#endif

private:
    anax::World &m_world;
    CAssetLoader m_assetLoader;
};
