project('craft', 'c')

src = [
  'src/auth.c',
  'src/client.c',
  'src/cube.c',
  'src/db.c',
  'src/item.c',
  'src/main.c',
  'src/map.c',
  'src/matrix.c',
  'src/noise.c',
  'src/ring.c',
  'src/sign.c',
  'src/util.c',
  'src/world.c',
  'deps/lodepng/lodepng.c',
  'deps/tinycthread/tinycthread.c'
]

inc = [
  'deps/lodepng',
  'deps/tinycthread'
]

curl = dependency('libcurl')
epoxy = dependency('epoxy')
glfw = dependency('glfw3')
sqlite = dependency('sqlite3')

deps = [curl, epoxy, glfw, sqlite]

executable('craft',
  sources: src,
  include_directories: inc,
  dependencies: deps)
