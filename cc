{
    "platform": "android",
    "atlas": {
        "pc": {
            "width": 2048,
            "height": 2048,
            "tileSize": 128,
            "tileCount": 7,
            "sliceSize": 512,
            "borderSize": 16
        },
        "ios": {
            "width": 2048,
            "height": 2048,
            "tileSize": 128,
            "tileCount": 7,
            "borderSize": 16
        },
        "android": {
            "width": 2048,
            "height": 2048,
            "tileSize": 128,
            "tileCount": 7,
            "borderSize": 16
        },
        "durango": {
            "width": 2048,
            "height": 2048,
            "tileSize": 128,
            "tileCount": 7,
            "sliceSize": 512,
            "borderSize": 16
        }
    },
    "materials": [
        {
            "name": "Air"
        },
        {
            "name": "Water",
            "water": 0.5
        },
        {
            "name": "Grass",
            "base_color": [
                185,
                202,
                87
            ],
            "texture_top": {
                "tiling": 0.5,
                "detiling_legacy": 0,
                "detiling": 3.717,
                "rotation": 0.5,
                "blend": {
                    "min": 0.032,
                    "max": 0.308,
                    "scale": 0.603
                }
            },
            "texture_side": {
                "tiling": 0.5,
                "detiling_legacy": 0.199,
                "detiling": 5,
                "blend": {
                    "min": 0.196,
                    "max": 0.419,
                    "scale": 0.611
                }
            },
            "texture_bottom": {
                "tiling": 0.5,
                "detiling_legacy": 0.45,
                "detiling": 2.222,
                "blend": {
                    "min": 0.467,
                    "max": 0.552,
                    "scale": 0.93
                }
            }
        },
        {
            "name": "Slate",
            "base_color": [
                113,
                115,
                111
            ],
            "shift": 0,
            "texture_top": {
                "tiling": 0.5,
                "detiling_legacy": 0.45,
                "detiling": 1.292,
                "blend": {
                    "min": 0.0,
                    "max": 0.484,
                    "scale": 1.0
                }
            },
            "texture_side": {
                "tiling": 0.5,
                "detiling_legacy": 0.45,
                "detiling": 2.222,
                "blend": {
                    "min": 0.398,
                    "max": 0.738,
                    "scale": 0.75
                }
            },
            "texture_bottom": {
                "tiling": 0.5,
                "detiling_legacy": 0.45,
                "detiling": 2.222,
                "blend": {
                    "min": 0.446,
                    "max": 0.792,
                    "scale": 0.532
                }
            }
        },
        {
            "name": "Concrete",
            "base_color": [
                157,
                158,
                152
            ],
            "quantize": 1,
            "type": "hard",
            "texture": {
                "tiling": 0.5,
                "detiling_legacy": 0.319,
                "detiling": 3.134,
                "blend": {
                    "min": 0.121,
                    "max": 0.403,
                    "scale": 0.583
                }
            }
        },
        {
            "name": "Brick",
            "base_color": [
                138,
                97,
                73
            ],
            "cubify": 1,
            "type": "hard",
            "mapping": "cube",
            "texture": {
                "tiling": 0.5,
                "detiling_legacy": 0.111,
                "detiling": 1,
                "blend": {
                    "min": 0.133,
                    "max": 0.621,
                    "scale": 0.263
                }
            }
        },
        {
            "name": "Sand",
            "base_color": [
                236,
                223,
                184
            ],
            "texture_top": {
                "tiling": 0.5,
                "detiling_legacy": 0.099,
                "detiling": 3.793,
                "blend": {
                    "min": -0.297,
                    "max": 0.798,
                    "scale": 0.72
                }
            },
            "texture_side": {
                "tiling": 0.5,
                "detiling_legacy": 0.099,
                "detiling": 10,
                "blend": {
                    "min": 0.377,
                    "max": 0.744,
                    "scale": 0.528
                }
            },
            "blend": {
                "min": 0,
                "max": 1,
                "scale": 1
            }
        },
        {
            "name": "WoodPlanks",
            "base_color": [
                172,
                138,
                96
            ],
            "cubify": 1,
            "type": "hard",
            "mapping": "cube",
            "texture": {
                "tiling": 0.5,
                "detiling_legacy": 0.399,
                "detiling": 1,
                "blend": {
                    "min": 0.456,
                    "max": 0.579,
                    "scale": 0.06
                }
            }
        },
        {
            "name": "Rock",
            "base_color": [
                147,
                148,
                149
            ],
            "shift": 0.299,
            "type": "hardsoft",
            "texture": {
                "tiling": 0.5,
                "detiling_legacy": 0.166,
                "detiling": 1.73,
                "rotation": 0,
                "blend": {
                    "min": -0.096,
                    "max": 0.297,
                    "scale": 0.518
                }
            }
        },
        {
            "name": "Glacier",
            "base_color": [
                216,
                226,
                240
            ],
            "texture_top": {
                "tiling": 0.5,
                "detiling_legacy": 0.166,
                "detiling": 6,
                "blend": {
                    "min": -0.079,
                    "max": 0.409,
                    "scale": 0.802
                }
            },
            "texture_side": {
                "tiling": 0.5,
                "detiling_legacy": 0.166,
                "detiling": 6,
                "blend": {
                    "min": 0.314,
                    "max": 0.595,
                    "scale": 0.629
                }
            },
            "texture_bottom": {
                "tiling": 0.5,
                "detiling_legacy": 0.166,
                "detiling": 6,
                "blend": {
                    "min": 0.319,
                    "max": 0.829,
                    "scale": 0.662
                }
            }
        },
        {
            "name": "Snow",
            "base_color": [
                255,
                255,
                255
            ],
            "texture_top": {
                "tiling": 0.5,
                "detiling_legacy": 0.333,
                "detiling": 2.73,
                "blend": {
                    "min": -0.452,
                    "max": 0.6,
                    "scale": 1
                }
            },
            "texture_side": {
                "tiling": 0.5,
                "detiling_legacy": 0.333,
                "detiling": 3,
                "blend": {
                    "min": 0.382,
                    "max": 0.542,
                    "scale": 0.954
                }
            }
        },
        {
            "name": "Sandstone",
            "base_color": [
                171,
                130,
                96
            ],
            "texture_top": {
                "tiling": 0.5,
                "detiling_legacy": 0.45,
                "detiling": 7.222,
                "rotation": 0,
                "blend": {
                    "min": 0.366,
                    "max": 0.6,
                    "scale": 0.625
                }
            },
            "texture_side": {
                "tiling": 0.5,
                "detiling_legacy": 0.45,
                "detiling": 2.222,
                "blend": {
                    "min": 0.212,
                    "max": 0.839,
                    "scale": 0.768
                }
            }
        },
        {
            "name": "Mud",
            "base_color": [
                173,
                162,
                127
            ],
            "texture": {
                "tiling": 0.5,
                "detiling_legacy": 0.01,
                "detiling": 1.3,
                "blend": {
                    "min": 0.121,
                    "max": 0.787,
                    "scale": 0.494
                }
            }
        },
        {
            "name": "Basalt",
            "base_color": [
                86,
                89,
                94
            ],
            "type": "hardsoft",
            "texture": {
                "tiling": 0.5,
                "detiling_legacy": 0.231,
                "detiling": 1,
                "blend": {
                    "min": 0.25,
                    "max": 0.516,
                    "scale": 0.347
                }
            }
        },
        {
            "name": "Ground",
            "base_color": [
                223,
                207,
                150
            ],
            "texture": {
                "tiling": 0.5,
                "detiling_legacy": 0.099,
                "detiling": 2.79,
                "rotation": 0,
                "blend": {
                    "min": 0.105,
                    "max": 0.644,
                    "scale": 0.706
                }
            }
        },
        {
            "name": "CrackedLava",
            "base_color": [
                186,
                52,
                0
            ],
            "texture": {
                "tiling": 0.5,
                "detiling_legacy": 0,
                "detiling": 2,
                "rotation": 0,
                "blend": {
                    "min": 0.552,
                    "max": 0.839,
                    "scale": 0.3
                }
            }
        },
        {
            "name": "Asphalt",
            "base_color": [
                87,
                89,
                94
            ],
            "texture_top": {
                "tiling": 0.5,
                "detiling_legacy": 0.344,
                "detiling": 2.898,
                "blend": {
                    "min": 0.6,
                    "max": 1.059,
                    "scale": 0.422
                }
            },
            "texture_side": {
                "tiling": 0.5,
                "detiling_legacy": 0.344,
                "detiling": 2.898,
                "blend": {
                    "min": -0.004,
                    "max": 0.286,
                    "scale": 0.444
                }
            }
        },
        {
            "name": "Cobblestone",
            "base_color": [
                167,
                162,
                124
            ],
            "type": "hardsoft",
            "texture": {
                "tiling": 0.5,
                "detiling_legacy": 0,
                "detiling": 1,
                "blend": {
                    "min": 0.532,
                    "max": 0.978,
                    "scale": 0.233
                }
            }
        },
        {
            "name": "Ice",
            "base_color": [
                216,
                226,
                240
            ],
            "shift": 0.149,
            "texture_top": {
                "tiling": 0.5,
                "detiling_legacy": 0.125,
                "detiling": 3.78,
                "rotation": 0,
                "blend": {
                    "min": 0.33,
                    "max": 0.552,
                    "scale": 0.93
                }
            },
            "texture_side": {
                "tiling": 0.5,
                "detiling_legacy": 0.125,
                "detiling": 8,
                "blend": {
                    "min": -0.016,
                    "max": 0.532,
                    "scale": 0.542
                }
            }
        },
        {
            "name": "LeafyGrass",
            "base_color": [
                193,
                221,
                93
            ],
            "texture_top": {
                "tiling": 0.5,
                "detiling_legacy": 0.25,
                "detiling": 3.793,
                "rotation": 0,
                "blend": {
                    "min": 0.01,
                    "max": 0.18,
                    "scale": 0.883
                }
            },
            "texture_side": {
                "tiling": 0.5,
                "detiling_legacy": 0.25,
                "detiling": 3.71,
                "blend": {
                    "min": 0.302,
                    "max": 0.579,
                    "scale": 0.611
                }
            },
            "texture_bottom": {
                "tiling": 0.5,
                "detiling_legacy": 0.25,
                "detiling": 3.71,
                "blend": {
                    "min": 0.302,
                    "max": 0.579,
                    "scale": 0.611
                }
            }
        },
        {
            "name": "Salt",
            "base_color": [
                221,
                216,
                211
            ],
            "texture_top": {
                "tiling": 0.5,
                "detiling_legacy": 0.199,
                "detiling": 2,
                "blend": {
                    "min": 0,
                    "max": 0.808,
                    "scale": 0.394
                }
            },
            "texture_side": {
                "tiling": 0.5,
                "detiling_legacy": 0.199,
                "detiling": 5,
                "blend": {
                    "min": 0.85,
                    "max": 0.915,
                    "scale": 0.837
                }
            }
        },
        {
            "name": "Limestone",
            "base_color": [
                206,
                189,
                159
            ],
            "texture_top": {
                "tiling": 0.5,
                "detiling_legacy": 0.166,
                "detiling": 6,
                "rotation": 0,
                "blend": {
                    "min": 0.048,
                    "max": 0.419,
                    "scale": 0.785
                }
            },
            "texture_side": {
                "tiling": 0.5,
                "detiling_legacy": 0.166,
                "detiling": 6,
                "blend": {
                    "min": 0.345,
                    "max": 0.712,
                    "scale": 0.523
                }
            }
        },
        {
            "name": "Pavement",
            "base_color": [
                200,
                200,
                190
            ],
            "quantize": 0.25,
            "type": "hardsoft",
            "texture_top": {
                "tiling": 0.5,
                "detiling_legacy": 0.083,
                "detiling": 1,
                "blend": {
                    "min": 0.532,
                    "max": 0.696,
                    "scale": 0.504
                }
            },
            "texture_side": {
                "tiling": 0.5,
                "detiling_legacy": 0.166,
                "detiling": 6,
                "blend": {
                    "min": 0.345,
                    "max": 0.712,
                    "scale": 0.523
                }
            }
        }
    ]
}
