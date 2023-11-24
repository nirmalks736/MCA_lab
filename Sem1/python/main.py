from graphics.rectangle import area as rect_area, perimeter as rect_perimeter
from graphics.circle import area as circle_area, perimeter as circle_perimeter
from graphics.3d_graphics.cuboid import area as cuboid_area, volumeas cuboid_volume
from graphics.3d_graphics.sphere import area as sphere_area, volume as sphere_volume
rect_length,rect_width = 5, 10
circle_radius = 7
cuboid_length, cuboid_width, cuboid_height = 3, 4, 5
sphere_radius = 6
print("Rectangle Area:", rect_area(rect_length, rect_width))
print("Rectangle perimeter:", perimeter(rect_length, rect_width))
print("circle Area:", area(circle_radius))
print("Circle Perimeter:",perimeter(circle_radius))
print("Cuboid Area:", area(cuboid_length, cuboid_width,cuboid_height))
print("Sphere Area:", area(sphere_radius))
print("Sphere volume:", volume(sphere_radius))
